/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <dt-bindings/zmk/modifiers.h>
#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/keycode_state_changed.h>
#include <zmk/hid.h>
#include <stdio.h>
#include <string.h>

#include "modifiers.h"

// Defines the state to be tracked, which is just the modifier bits.
struct modifiers_state {
    uint8_t modifiers;
};

// A list to hold all instances of this widget.
static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

/**
 * @brief Sets the text of the label object based on the active modifiers.
 *
 * This function checks the explicit modifier state from the HID system
 * and constructs a string representing the active modifiers.
 *
 * @param label The lv_label object to update.
 * @param state The current modifier state (unused in this implementation,
 * as we fetch the latest state directly).
 */
static void set_modifiers_text(lv_obj_t *label, struct modifiers_state ignored) {
    // Get the current modifier state.
    uint8_t mods = zmk_hid_get_explicit_mods();

    // Buffer to build the modifier string. e.g., "CTL+ALT+SFT"
    char text[20] = {0};

    // Check for Control modifier.
    if (mods & (MOD_LCTL | MOD_RCTL)) {
        strcat(text, "CTL");
    }

    // Check for Alt modifier.
    if (mods & (MOD_LALT | MOD_RALT)) {
        if (strlen(text) > 0) {
            strcat(text, "+");
        }
        strcat(text, "ALT");
    }

    // Check for Shift modifier.
    if (mods & (MOD_LSFT | MOD_RSFT)) {
        if (strlen(text) > 0) {
            strcat(text, "+");
        }
        strcat(text, "SFT");
    }

    // Check for Gui (Super/Windows/Command) modifier.
    if (mods & (MOD_LGUI | MOD_RGUI)) {
        if (strlen(text) > 0) {
            strcat(text, "+");
        }
        strcat(text, "GUI");
    }

    // Update the label with the composed text.
    lv_label_set_text(label, text);
}

// Callback function that gets triggered when the modifier state changes.
static void modifiers_update_cb(struct modifiers_state state) {
    struct zmk_widget_modifiers *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        set_modifiers_text(widget->obj, state);
    }
}

// Function to fetch the current state for the event listener.
static struct modifiers_state modifiers_get_state(const zmk_event_t *eh) {
    return (struct modifiers_state){.modifiers = zmk_hid_get_explicit_mods()};
}

// ZMK boilerplate to set up the event listener for the widget.
ZMK_DISPLAY_WIDGET_LISTENER(widget_modifiers, struct modifiers_state,
                            modifiers_update_cb, modifiers_get_state)

// ZMK boilerplate to subscribe the listener to keycode state changes.
ZMK_SUBSCRIPTION(widget_modifiers, zmk_keycode_state_changed);

// Initialization function for the widget.
int zmk_widget_modifiers_init(struct zmk_widget_modifiers *widget,
                              lv_obj_t *parent) {
    // Create a simple LVGL label object.
    widget->obj = lv_label_create(parent);
    
    // Add this widget instance to the list of widgets.
    sys_slist_append(&widgets, &widget->node);
    
    // Initialize the listener.
    widget_modifiers_init();
    
    return 0;
}