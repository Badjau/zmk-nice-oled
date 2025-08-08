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

static void set_modifiers_text(lv_obj_t *label,
                               struct modifiers_state state) {
  uint8_t mods = state.modifiers;
  
  if (mods == 0) {
    lv_label_set_text(label, "");
    return;
  }
  
  char mod_text[64] = {0}; // Larger buffer for safety
  int pos = 0;
  bool first = true;
  
  // Check each modifier and build string using sprintf
  if (mods & (MOD_LGUI | MOD_RGUI)) {
    pos += sprintf(mod_text + pos, "%sGUI", first ? "" : "+");
    first = false;
  }
  if (mods & (MOD_LALT | MOD_RALT)) {
    pos += sprintf(mod_text + pos, "%sALT", first ? "" : "+");
    first = false;
  }
  if (mods & (MOD_LCTL | MOD_RCTL)) {
    pos += sprintf(mod_text + pos, "%sCTL", first ? "" : "+");
    first = false;
  }
  if (mods & (MOD_LSFT | MOD_RSFT)) {
    pos += sprintf(mod_text + pos, "%sSFT", first ? "" : "+");
    first = false;
  }
  
  lv_label_set_text(label, mod_text);
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
  
  // Set initial empty text
  lv_label_set_text(widget->obj, "");
  
  // Set position/alignment for the widget
  lv_obj_align(widget->obj, LV_ALIGN_TOP_LEFT, 36, 0);
  
  sys_slist_append(&widgets, &widget->node);
  
  // Initialize with current state
  struct modifiers_state current_state = {.modifiers = zmk_hid_get_explicit_mods()};
  set_modifiers_text(widget->obj, current_state);
  
  widget_modifiers_init();
  return 0;
}