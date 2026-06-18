/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/bluetooth/services/bas.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/keycode_state_changed.h>
#include <zmk/events/wpm_state_changed.h>
#include <zmk/wpm.h>

#include "raven.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);
static lv_timer_t *idle_check_timer = NULL;

LV_IMG_DECLARE(raven_idle);
LV_IMG_DECLARE(raven_mouth_open);
LV_IMG_DECLARE(raven_eyes_closed);
LV_IMG_DECLARE(raven_wings_open);

/*
 * Per-key animation transition type.
 * Set by the keycode event handler, consumed by update_raven().
 */
enum raven_transition {
    RAVEN_TRANS_NONE  = 0,
    RAVEN_TRANS_OPEN,   /* 0→1: first key pressed — show active (mouth/wings) */
    RAVEN_TRANS_CLOSE,  /* 1→0: last key released — show rest (eyes_closed / idle) */
};

/*
 * Idle timeout: after this many milliseconds with no key activity,
 * the raven snaps back to its neutral idle frame.
 * Much shorter than the old WPM-decay falloff — instant visual feedback.
 */
#define IDLE_TIMEOUT_MS 200
#define IDLE_CHECK_PERIOD_MS 100

/*
 * WPM tier thresholds for selecting the "active" frame on keypress.
 * Higher WPM = more dramatic raven reaction.
 */
#define WPM_TIER_SLOW  1   /* Below this: still show mouth_open for responsiveness */
#define WPM_TIER_MID   30
#define WPM_TIER_FAST  70

struct raven_state {
    uint8_t wpm;
    uint8_t active_keys;       /* number of keys currently held */
    enum raven_transition transition;  /* what the last key event asks us to do */
    uint32_t last_key_event;   /* k_uptime_get_32() timestamp */
    lv_obj_t *obj;
    bool is_idle;
    uint8_t frame_idx;         /* which frame in the current tier's cycle */
    uint8_t active_tier;       /* cached tier to detect tier changes */
};

static struct raven_state state = {
    .wpm = 0,
    .active_keys = 0,
    .transition = RAVEN_TRANS_NONE,
    .last_key_event = 0,
    .obj = NULL,
    .is_idle = true,
    .frame_idx = 0,
    .active_tier = 0,
};

/* -------------------------------------------------------------------------- */
/*  Tiered frame arrays — cycled through on each keypress                     */
/* -------------------------------------------------------------------------- */

enum raven_tier {
    TIER_SLOW,   /* WPM < 30:  mouth_open  <->  idle        */
    TIER_MID,    /* WPM < 70:  mouth_open  <->  eyes_closed  */
    TIER_FAST,   /* WPM >= 70: wings_open   <->  eyes_closed */
    TIER_COUNT
};

static const lv_img_dsc_t *tier_frames[TIER_COUNT][2] = {
    [TIER_SLOW] = { &raven_mouth_open, &raven_idle        },
    [TIER_MID]  = { &raven_mouth_open, &raven_eyes_closed  },
    [TIER_FAST] = { &raven_wings_open, &raven_eyes_closed  },
};

#define FRAMES_PER_TIER 2

static enum raven_tier get_tier(uint8_t wpm) {
    if (wpm >= WPM_TIER_FAST) return TIER_FAST;
    if (wpm >= WPM_TIER_MID)  return TIER_MID;
    return TIER_SLOW;  /* WPM_TIER_SLOW (5) or lower — still reacts */
}

/* -------------------------------------------------------------------------- */
/*  Animation helpers                                                         */
/* -------------------------------------------------------------------------- */

static void snap_to_idle(lv_obj_t *obj) {
    if (state.is_idle) {
        return;
    }
    state.is_idle = true;
    state.frame_idx = 0;
    lv_img_set_src(obj, &raven_idle);
}

/*
 * Show the tier-appropriate "rest" frame (mouth closed / eyes closed)
 * when the last key is released.  This is NOT the neutral idle — the
 * idle timer will transition to raven_idle after IDLE_TIMEOUT_MS.
 */
static void show_rest_frame(lv_obj_t *obj) {
    enum raven_tier tier = get_tier(state.wpm);
    /* Second frame in each tier is the "rest" pose */
    const lv_img_dsc_t *frame = tier_frames[tier][1];
    state.is_idle = false;
    state.frame_idx = 0;
    lv_img_set_src(obj, frame);
}

static void show_active_frame(lv_obj_t *obj) {
    enum raven_tier tier = get_tier(state.wpm);

    /* Reset frame index when crossing into a different tier */
    if (tier != state.active_tier) {
        state.frame_idx = 0;
        state.active_tier = tier;
    }

    state.is_idle = false;

    /* Advance to the next frame in this tier's cycle */
    const lv_img_dsc_t *frame = tier_frames[tier][state.frame_idx];
    lv_img_set_src(obj, frame);

    state.frame_idx = (state.frame_idx + 1) % FRAMES_PER_TIER;
}

/* -------------------------------------------------------------------------- */
/*  Idle-check timer: periodically returns raven to idle after no key events  */
/* -------------------------------------------------------------------------- */

static void check_idle_timeout(lv_timer_t *timer) {
    /* Don't interrupt an active typing burst or an already-idle raven. */
    if (state.active_keys > 0 || state.obj == NULL || state.is_idle) {
        return;
    }

    uint32_t now = k_uptime_get_32();
    if ((now - state.last_key_event) >= IDLE_TIMEOUT_MS) {
        snap_to_idle(state.obj);
    }
}

/* -------------------------------------------------------------------------- */
/*  Widget update — called from LVGL display context                          */
/* -------------------------------------------------------------------------- */

static void update_raven(struct zmk_widget_wpm_raven *widget,
                         struct raven_state new_state) {
    if (!widget || !widget->obj) {
        return;
    }

    state.obj = widget->obj;
    /* Note: state.wpm was already set by the WPM event getter.
     * state.active_keys / transition / last_key_event were set by the
     * keycode getter. */

    switch (new_state.transition) {
    case RAVEN_TRANS_OPEN:
        show_active_frame(widget->obj);
        break;
    case RAVEN_TRANS_CLOSE:
        /* Last key released — close the mouth / wings immediately. */
        show_rest_frame(widget->obj);
        break;
    case RAVEN_TRANS_NONE:
    default:
        /* WPM-only event while keys are held: refresh for a possible
         * tier change so the active frame updates without waiting for
         * the next press. */
        if (state.active_keys > 0 && !state.is_idle) {
            enum raven_tier tier = get_tier(state.wpm);
            if (tier != state.active_tier) {
                show_active_frame(widget->obj);
            }
        }
        break;
    }
}

/* -------------------------------------------------------------------------- */
/*  Event: keycode state changed  (press / release)                           */
/* -------------------------------------------------------------------------- */

static struct raven_state raven_get_state_from_keycode(const zmk_event_t *eh) {
    const struct zmk_keycode_state_changed *ev = as_zmk_keycode_state_changed(eh);
    if (ev != NULL) {
        state.transition = RAVEN_TRANS_NONE;

        if (ev->state) {
            /* Key pressed — increment the active-key counter. */
            if (state.active_keys == 0) {
                state.transition = RAVEN_TRANS_OPEN;
            }
            state.active_keys++;
        } else {
            /* Key released — decrement (clamp to 0). */
            if (state.active_keys > 0) {
                state.active_keys--;
                if (state.active_keys == 0) {
                    state.transition = RAVEN_TRANS_CLOSE;
                }
            }
        }

        state.last_key_event = k_uptime_get_32();
    }
    return state;
}

static void raven_update_cb(struct raven_state new_state) {
    struct zmk_widget_wpm_raven *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        update_raven(widget, new_state);
    }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_raven_keycode, struct raven_state,
                            raven_update_cb, raven_get_state_from_keycode)
ZMK_SUBSCRIPTION(widget_raven_keycode, zmk_keycode_state_changed);

/* -------------------------------------------------------------------------- */
/*  Event: WPM state changed  (tier selection)                                */
/* -------------------------------------------------------------------------- */

static struct raven_state raven_get_state_from_wpm(const zmk_event_t *eh) {
    const struct zmk_wpm_state_changed *ev = as_zmk_wpm_state_changed(eh);
    if (ev != NULL) {
        state.wpm = ev->state;
    }
    return state;
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_raven_wpm, struct raven_state,
                            raven_update_cb, raven_get_state_from_wpm)
ZMK_SUBSCRIPTION(widget_raven_wpm, zmk_wpm_state_changed);

/* -------------------------------------------------------------------------- */
/*  Public API                                                                */
/* -------------------------------------------------------------------------- */

int zmk_widget_wpm_raven_init(struct zmk_widget_wpm_raven *widget, lv_obj_t *parent) {
    widget->obj = lv_img_create(parent);
    lv_obj_center(widget->obj);

    /* Start with idle frame */
    lv_img_set_src(widget->obj, &raven_idle);
    state.obj = widget->obj;
    state.is_idle = true;

    /* Create the idle-check timer once (shared across all widget instances) */
    if (idle_check_timer == NULL) {
        idle_check_timer = lv_timer_create(check_idle_timeout, IDLE_CHECK_PERIOD_MS, NULL);
    }

    sys_slist_append(&widgets, &widget->node);

    widget_raven_keycode_init();
    widget_raven_wpm_init();

    return 0;
}

lv_obj_t *zmk_widget_wpm_raven_obj(struct zmk_widget_wpm_raven *widget) {
    return widget->obj;
}
