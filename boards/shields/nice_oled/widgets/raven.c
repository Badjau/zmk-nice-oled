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
 * Idle timeout: after this many milliseconds with no key activity,
 * the raven snaps back to its idle frame.
 * Much shorter than the old WPM-decay falloff — instant visual feedback.
 */
#define IDLE_TIMEOUT_MS 300
#define IDLE_CHECK_PERIOD_MS 100

/*
 * WPM tier thresholds for selecting the "active" frame on keypress.
 * Higher WPM = more dramatic raven reaction.
 */
#define WPM_TIER_SLOW  5   /* Below this: still show mouth_open for responsiveness */
#define WPM_TIER_MID   30
#define WPM_TIER_FAST  70

struct raven_state {
    uint8_t wpm;
    bool key_pressed;
    uint32_t last_key_event;   /* k_uptime_get_32() timestamp */
    lv_obj_t *obj;
    bool is_idle;
};

static struct raven_state state = {
    .wpm = 0,
    .key_pressed = false,
    .last_key_event = 0,
    .obj = NULL,
    .is_idle = true,
};

/* -------------------------------------------------------------------------- */
/*  Frame selection by WPM tier                                               */
/* -------------------------------------------------------------------------- */

static const lv_img_dsc_t *get_active_frame(uint8_t wpm) {
    if (wpm >= WPM_TIER_FAST) {
        return &raven_wings_open;
    } else if (wpm >= WPM_TIER_MID) {
        return &raven_eyes_closed;
    } else {
        /* WPM_TIER_SLOW or lower — always show mouth_open for responsiveness */
        return &raven_mouth_open;
    }
}

/* -------------------------------------------------------------------------- */
/*  Animation helpers                                                         */
/* -------------------------------------------------------------------------- */

static void snap_to_idle(lv_obj_t *obj) {
    if (state.is_idle) {
        return;
    }
    state.is_idle = true;
    lv_img_set_src(obj, &raven_idle);
}

static void show_active_frame(lv_obj_t *obj) {
    state.is_idle = false;
    lv_img_set_src(obj, get_active_frame(state.wpm));
}

/* -------------------------------------------------------------------------- */
/*  Idle-check timer: periodically returns raven to idle after no key events  */
/* -------------------------------------------------------------------------- */

static void check_idle_timeout(lv_timer_t *timer) {
    if (state.key_pressed || state.obj == NULL || state.is_idle) {
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
     * state.key_pressed / last_key_event were set by the keycode getter. */

    if (new_state.key_pressed) {
        show_active_frame(widget->obj);
    }
    /* On release we don't immediately snap to idle — the timer handles it */
}

/* -------------------------------------------------------------------------- */
/*  Event: keycode state changed  (press / release)                           */
/* -------------------------------------------------------------------------- */

static struct raven_state raven_get_state_from_keycode(const zmk_event_t *eh) {
    const struct zmk_keycode_state_changed *ev = as_zmk_keycode_state_changed(eh);
    if (ev != NULL) {
        state.key_pressed = ev->state;
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
