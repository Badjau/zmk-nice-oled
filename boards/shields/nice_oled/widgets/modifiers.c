/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/bluetooth/services/bas.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <dt-bindings/zmk/modifiers.h>
#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/keycode_state_changed.h>
#include <zmk/hid.h>

#include "modifiers.h"

struct modifiers_state {
  uint8_t modifiers;
};

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

static lv_obj_t *modifier_label = NULL;

static void set_modifiers_text(lv_obj_t *label,
                               struct modifiers_state ignored) {
  uint8_t mods = zmk_hid_get_explicit_mods();

  if (modifier_label) {
    lv_obj_del(modifier_label);
    modifier_label = NULL;
  }

  if (mods == 0) {
    return;
  }

  modifier_label = lv_label_create(label);
  lv_obj_center(modifier_label);
  
  char mod_text[20] = {0};
  
  if (mods & (MOD_LGUI | MOD_RGUI)) {
    strcat(mod_text, "GUI");
  }
  if (mods & (MOD_LALT | MOD_RALT)) {
    if (mod_text[0] != '\0') strcat(mod_text, "+");
    strcat(mod_text, "ALT");
  }
  if (mods & (MOD_LCTL | MOD_RCTL)) {
    if (mod_text[0] != '\0') strcat(mod_text, "+");
    strcat(mod_text, "CTL");
  }
  if (mods & (MOD_LSFT | MOD_RSFT)) {
    if (mod_text[0] != '\0') strcat(mod_text, "+");
    strcat(mod_text, "SFT");
  }

  lv_label_set_text(modifier_label, mod_text);
  lv_obj_align(modifier_label, LV_ALIGN_TOP_LEFT, 36, 0);
}

static void modifiers_update_cb(struct modifiers_state state) {
  struct zmk_widget_modifiers *widget;
  SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
    set_modifiers_text(widget->obj, state);
  }
}

static struct modifiers_state modifiers_get_state(const zmk_event_t *eh) {
  return (struct modifiers_state){.modifiers = zmk_hid_get_explicit_mods()};
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_modifiers, struct modifiers_state,
                            modifiers_update_cb, modifiers_get_state)
ZMK_SUBSCRIPTION(widget_modifiers, zmk_keycode_state_changed);

int zmk_widget_modifiers_init(struct zmk_widget_modifiers *widget,
                              lv_obj_t *parent) {
  widget->obj = lv_label_create(parent);
  sys_slist_append(&widgets, &widget->node);
  widget_modifiers_init();
  return 0;
}