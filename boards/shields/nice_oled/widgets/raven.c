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
#include <zmk/events/wpm_state_changed.h>
#include <zmk/wpm.h>

#include "raven.h"

#define SRC(array) (const void **)array, sizeof(array) / sizeof(lv_img_dsc_t *)

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

LV_IMG_DECLARE(raven_idle);
LV_IMG_DECLARE(raven_mouth_open);
LV_IMG_DECLARE(raven_eyes_closed);
LV_IMG_DECLARE(raven_wings_open);

/*
 * Animation speed definitions (milliseconds per frame cycle).
 * Lower = faster animation. Tune these to match your desired feel.
 */
#define ANIMATION_SPEED_IDLE 10000  /* Very slow when not typing */
const lv_img_dsc_t *idle_imgs[] = {
    &raven_idle,
};

#define ANIMATION_SPEED_SLOW 2000   /* Slow typing: cycle idle + mouth_open */
const lv_img_dsc_t *slow_imgs[] = {
    &raven_idle,
    &raven_mouth_open,
};

#define ANIMATION_SPEED_MID 500     /* Medium typing: eyes closed  <-> mouth open */
const lv_img_dsc_t *mid_imgs[] = {
    &raven_eyes_closed,
    &raven_mouth_open,
};

#define ANIMATION_SPEED_FAST 200    /* Fast typing: rapid wings + mouth */
const lv_img_dsc_t *fast_imgs[] = {
    &raven_eyes_closed,
    &raven_wings_open,
};

struct wpm_raven_status_state {
    uint8_t wpm;
};

enum anim_state {
    anim_state_none,
    anim_state_idle,
    anim_state_slow,
    anim_state_mid,
    anim_state_fast
} current_anim_state;

static void set_animation(lv_obj_t *animing, struct wpm_raven_status_state state) {
    if (state.wpm < 5) {
        if (current_anim_state != anim_state_idle) {
            lv_animimg_set_src(animing, SRC(idle_imgs));
            lv_animimg_set_duration(animing, ANIMATION_SPEED_IDLE);
            lv_animimg_set_repeat_count(animing, LV_ANIM_REPEAT_INFINITE);
            lv_animimg_start(animing);
            current_anim_state = anim_state_idle;
        }
    } else if (state.wpm < 30) {
        if (current_anim_state != anim_state_slow) {
            lv_animimg_set_src(animing, SRC(slow_imgs));
            lv_animimg_set_duration(animing, ANIMATION_SPEED_SLOW);
            lv_animimg_set_repeat_count(animing, LV_ANIM_REPEAT_INFINITE);
            lv_animimg_start(animing);
            current_anim_state = anim_state_slow;
        }
    } else if (state.wpm < 70) {
        if (current_anim_state != anim_state_mid) {
            lv_animimg_set_src(animing, SRC(mid_imgs));
            lv_animimg_set_duration(animing, ANIMATION_SPEED_MID);
            lv_animimg_set_repeat_count(animing, LV_ANIM_REPEAT_INFINITE);
            lv_animimg_start(animing);
            current_anim_state = anim_state_mid;
        }
    } else {
        if (current_anim_state != anim_state_fast) {
            lv_animimg_set_src(animing, SRC(fast_imgs));
            lv_animimg_set_duration(animing, ANIMATION_SPEED_FAST);
            lv_animimg_set_repeat_count(animing, LV_ANIM_REPEAT_INFINITE);
            lv_animimg_start(animing);
            current_anim_state = anim_state_fast;
        }
    }
}

struct wpm_raven_status_state wpm_raven_status_get_state(const zmk_event_t *eh) {
    struct zmk_wpm_state_changed *ev = as_zmk_wpm_state_changed(eh);
    return (struct wpm_raven_status_state){.wpm = ev->state};
};

void wpm_raven_status_update_cb(struct wpm_raven_status_state state) {
    struct zmk_widget_wpm_raven *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_animation(widget->obj, state); }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_wpm_raven, struct wpm_raven_status_state,
                            wpm_raven_status_update_cb, wpm_raven_status_get_state)

ZMK_SUBSCRIPTION(widget_wpm_raven, zmk_wpm_state_changed);

int zmk_widget_wpm_raven_init(struct zmk_widget_wpm_raven *widget, lv_obj_t *parent) {
    widget->obj = lv_animimg_create(parent);
    lv_obj_center(widget->obj);

    sys_slist_append(&widgets, &widget->node);

    widget_wpm_raven_init();

    return 0;
}

lv_obj_t *zmk_widget_wpm_raven_obj(struct zmk_widget_wpm_raven *widget) {
    return widget->obj;
}
