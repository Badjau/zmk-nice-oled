#include <zephyr/kernel.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/battery.h>
#include <zmk/ble.h>
#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/battery_state_changed.h>
#include <zmk/events/split_peripheral_status_changed.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/split/bluetooth/peripheral.h>
#include <zmk/usb.h>

#include "animation.h"
#include "battery.h"
#include "output.h"
#include "screen_peripheral.h"

#ifdef CONFIG_NICE_OLED_WIDGET_RAW_HID_PERIPHERAL
#include <raw_hid/hid.h>
#include <fonts.h>
#endif

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);
static void draw_canvas(lv_obj_t *widget, lv_color_t cbuf[], const struct status_state *state);

static void hid_time_peripheral_update_cb(struct time_notification time) {
    struct zmk_widget_screen *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        widget->state.is_connected = true;
        widget->state.hour = time.hour;
        widget->state.minute = time.minute;
        draw_canvas(widget->obj, widget->cbuf, &widget->state);
    }
}

/**
 * sleep status
 **/

#if IS_ENABLED(CONFIG_NICE_OLED_SHOW_SLEEP_ART_ON_IDLE) ||                                         \
    IS_ENABLED(CONFIG_NICE_OLED_SHOW_SLEEP_ART_ON_SLEEP)
#include "sleep_status.h"
static struct zmk_widget_sleep_status sleep_status_widget;
#endif

/**
 * luna
 **/

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_WPM)
#include "luna.h"
static struct zmk_widget_luna luna_widget;
#endif

/**
 * Draw canvas
 **/

/**
 * HID time (peripheral)
 **/

#ifdef CONFIG_NICE_OLED_WIDGET_RAW_HID_PERIPHERAL

static void draw_hid_time_peripheral(lv_obj_t *canvas, const struct status_state *state) {
    if (!state->is_connected) {
        return; /* No HID data available yet */
    }

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_FAMILY_JUA)
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_12)
  #define DRAW_HID_TIME_FONTS &jua_12
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_16)
  #define DRAW_HID_TIME_FONTS &jua_16
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_18)
  #define DRAW_HID_TIME_FONTS &jua_18
  #else
  #define DRAW_HID_TIME_FONTS &jua_14
  #endif
#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_FAMILY_DESIGNER)
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_16)
  #define DRAW_HID_TIME_FONTS &designer_16
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_18)
  #define DRAW_HID_TIME_FONTS &designer_18
  #else
  #define DRAW_HID_TIME_FONTS &designer_18
  #endif
#else
  //Nothing is selected, default family is Pixel Operator Mono
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_8)
  #define DRAW_HID_TIME_FONTS &pixel_operator_mono_8
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_16)
  #define DRAW_HID_TIME_FONTS &pixel_operator_mono_16
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_FONT_22)
  #define DRAW_HID_TIME_FONTS &pixel_operator_mono_22
  #else
  //nothing selected, default is 12
  #define DRAW_HID_TIME_FONTS &pixel_operator_mono_12
  #endif
#endif

    lv_draw_label_dsc_t label_dsc;
    init_label_dsc(&label_dsc, LVGL_FOREGROUND, DRAW_HID_TIME_FONTS, LV_TEXT_ALIGN_LEFT);

    // Determine if colon should be visible (toggles every 1 s)
    bool colon_visible = (k_uptime_get() / 1000) % 2;

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_TWO_ROWS)
    // Two‑row mode: hour on top, minute below, colon placed between the rows
    #define TIME_ROW_SPACING_ADJUST 3   // Adjusts how far the two rows are apart

//colon size
#ifdef CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_COLON_SIZE
    lv_coord_t dot_size = CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_COLON_SIZE;
#else
    //→ 1x1 dot, 2 → 2×2 dot, etc.
    lv_coord_t dot_size = 2;   // default
#endif

//spacing between the two dots
#ifdef CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_COLON_GAP
    lv_coord_t dot_gap = CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_COLON_GAP;
#else
    lv_coord_t dot_gap = 4;   // default gap
#endif

    lv_point_t time_size;
    char text[8];

    // Draw hour
    snprintf(text, sizeof(text), "%02u", state->hour);
    lv_canvas_draw_text(canvas,
                        CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_CUSTOM_X,
                        CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_CUSTOM_Y,
                        60, &label_dsc, text);
    lv_txt_get_size(&time_size, text, label_dsc.font, label_dsc.letter_space,
                    label_dsc.line_space, LV_COORD_MAX, LV_TEXT_FLAG_NONE);
    lv_coord_t hour_width = time_size.x;

    // Draw minute
    snprintf(text, sizeof(text), "%02u", state->minute);
    lv_canvas_draw_text(canvas,
                        CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_CUSTOM_X,
                        CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_CUSTOM_Y + time_size.y + TIME_ROW_SPACING_ADJUST,
                        60, &label_dsc, text);

    // Draw blinking colon between the rows
    if (colon_visible) {
        lv_coord_t centre_x = CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_CUSTOM_X + hour_width / 2;
        lv_coord_t base_line = label_dsc.font->base_line;
        lv_coord_t gap_centre_y = CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_CUSTOM_Y
                                + time_size.y
                                + TIME_ROW_SPACING_ADJUST / 2
                                - base_line;

        lv_coord_t left_x = centre_x - dot_size - dot_gap / 2;
        lv_coord_t right_x = centre_x + dot_gap / 2;
        lv_coord_t top_y = gap_centre_y - dot_size / 2;

        lv_draw_rect_dsc_t rect_dsc;
        lv_draw_rect_dsc_init(&rect_dsc);
        rect_dsc.bg_color = LVGL_FOREGROUND;
        rect_dsc.bg_opa = LV_OPA_COVER;

        lv_canvas_draw_rect(canvas, left_x, top_y, dot_size, dot_size, &rect_dsc);
        lv_canvas_draw_rect(canvas, right_x, top_y, dot_size, dot_size, &rect_dsc);
    }
#else
    // Single‑row mode: hh:mm (default)
    char text[8];
    snprintf(text, sizeof(text), "%02u%s%02u", state->hour,
             colon_visible ? ":" : " ", state->minute);
    lv_canvas_draw_text(canvas,
                        CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_CUSTOM_X,
                        CONFIG_NICE_OLED_WIDGET_RAW_HID_TIME_CUSTOM_Y,
                        60, &label_dsc, text);
#endif
}

#endif /* CONFIG_NICE_OLED_WIDGET_RAW_HID_PERIPHERAL */

static void screen_refresh_lv_timer_cb(lv_timer_t *t) {
    struct zmk_widget_screen *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        draw_canvas(widget->obj, widget->cbuf, &widget->state);
    }
}

static void draw_canvas(lv_obj_t *widget, lv_color_t cbuf[], const struct status_state *state) {
    lv_obj_t *canvas = lv_obj_get_child(widget, 0);

    // Draw widgets
    draw_background(canvas);
    draw_output_status(canvas, state);
    draw_battery_status(canvas, state);

#ifdef CONFIG_NICE_OLED_WIDGET_RAW_HID_PERIPHERAL
    draw_hid_time_peripheral(canvas, state);
#endif

    // Rotate for horizontal display
    //rotate_canvas(canvas, cbuf);
}

/**
 * Battery status
 **/

static void set_battery_status(struct zmk_widget_screen *widget,
                               struct battery_status_state state) {

#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
    widget->state.charging = state.usb_present;
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

    widget->state.battery = state.level;

    draw_canvas(widget->obj, widget->cbuf, &widget->state);

    // draw_animation(widget->obj, widget);

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_SMART_BATTERY)
    if (widget->state.charging) {
        // mostrar
        // lv_obj_clear_flag(widget->obj, LV_OBJ_FLAG_HIDDEN);
        animation_smart_battery_on(widget->obj);

    } else {
        // quitar
        // lv_obj_add_flag(widget->art, LV_OBJ_FLAG_HIDDEN);
        animation_smart_battery_off(widget->obj);
    }
#endif
}

static void battery_status_update_cb(struct battery_status_state state) {
    struct zmk_widget_screen *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_battery_status(widget, state); }
}

static struct battery_status_state battery_status_get_state(const zmk_event_t *eh) {
    const struct zmk_battery_state_changed *ev = as_zmk_battery_state_changed(eh);

    return (struct battery_status_state){
        .level = (ev != NULL) ? ev->state_of_charge : zmk_battery_state_of_charge(),
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
        .usb_present = zmk_usb_is_powered(),
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_battery_status, struct battery_status_state,
                            battery_status_update_cb, battery_status_get_state);

ZMK_SUBSCRIPTION(widget_battery_status, zmk_battery_state_changed);
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
ZMK_SUBSCRIPTION(widget_battery_status, zmk_usb_conn_state_changed);
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

/**
 * Peripheral status
 **/

static struct peripheral_status_state get_state(const zmk_event_t *_eh) {
    return (struct peripheral_status_state){.connected = zmk_split_bt_peripheral_is_connected()};
}

static void set_connection_status(struct zmk_widget_screen *widget,
                                  struct peripheral_status_state state) {
    widget->state.connected = state.connected;

    draw_canvas(widget->obj, widget->cbuf, &widget->state);
}

static void output_status_update_cb(struct peripheral_status_state state) {
    struct zmk_widget_screen *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_connection_status(widget, state); }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_peripheral_status, struct peripheral_status_state,
                            output_status_update_cb, get_state)
ZMK_SUBSCRIPTION(widget_peripheral_status, zmk_split_peripheral_status_changed);

/**
 * HID time (peripheral) – event subscriptions
 **/

#ifdef CONFIG_NICE_OLED_WIDGET_RAW_HID_PERIPHERAL

static struct time_notification hid_time_peripheral_get_state(const zmk_event_t *eh) {
    const struct time_notification *ev = as_time_notification(eh);
    if (ev == NULL) {
        return (struct time_notification){.hour = 0, .minute = 0};
    }
    return *ev;
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_hid_time_peripheral, struct time_notification,
                            hid_time_peripheral_update_cb, hid_time_peripheral_get_state);
ZMK_SUBSCRIPTION(widget_hid_time_peripheral, time_notification);

#endif /* CONFIG_NICE_OLED_WIDGET_RAW_HID_PERIPHERAL */

/**
 * Initialization
 **/

int zmk_widget_screen_init(struct zmk_widget_screen *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, CANVAS_WIDTH, CANVAS_HEIGHT);

    lv_obj_t *canvas = lv_canvas_create(widget->obj);
    lv_obj_align(canvas, LV_ALIGN_TOP_LEFT, 0, 0);
    lv_canvas_set_buffer(canvas, widget->cbuf, CANVAS_WIDTH, CANVAS_HEIGHT, LV_IMG_CF_TRUE_COLOR);
    lv_timer_create(screen_refresh_lv_timer_cb, 500, NULL);

    sys_slist_append(&widgets, &widget->node);

#if !IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_SMART_BATTERY)
    draw_animation(canvas, widget);
#endif
    widget_battery_status_init();
    widget_peripheral_status_init();

#ifdef CONFIG_NICE_OLED_WIDGET_RAW_HID_PERIPHERAL
    widget_hid_time_peripheral_init();
#endif

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_WPM)
    zmk_widget_luna_init(&luna_widget, canvas);
    lv_obj_align(zmk_widget_luna_obj(&luna_widget), LV_ALIGN_TOP_LEFT, CONFIG_NICE_OLED_WIDGET_LUNA_CUSTOM_X, CONFIG_NICE_OLED_WIDGET_LUNA_CUSTOM_Y);
#endif

#if IS_ENABLED(CONFIG_NICE_OLED_SHOW_SLEEP_ART_ON_IDLE) ||                                         \
    IS_ENABLED(CONFIG_NICE_OLED_SHOW_SLEEP_ART_ON_SLEEP)
    zmk_widget_sleep_status_init(&sleep_status_widget, canvas);
    lv_obj_align(zmk_widget_sleep_status_obj(&sleep_status_widget), LV_ALIGN_TOP_LEFT, CONFIG_NICE_OLED_WIDGET_SLEEP_STATUS_CUSTOM_X, CONFIG_NICE_OLED_WIDGET_SLEEP_STATUS_CUSTOM_Y);
#endif


    return 0;
}

lv_obj_t *zmk_widget_screen_obj(struct zmk_widget_screen *widget) { return widget->obj; }
