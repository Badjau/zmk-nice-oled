#include <zephyr/kernel.h>
#include "profile.h"
#if !IS_ENABLED(CONFIG_NICE_EPAPER_ON)
// use custom_fonts.h only for the draw_active_profile_text function
#include <fonts.h>
#include <stdio.h>
#endif // !IS_ENABLED(CONFIG_NICE_EPAPER_ON)

LV_IMG_DECLARE(profiles);

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_PROFILE_BIG)
#define OFFSET_X 0
#define OFFSET_Y 129

LV_IMG_DECLARE(profile);
LV_IMG_DECLARE(profile_active);
#endif

#if !IS_ENABLED(CONFIG_NICE_OLED_WIDGET_PROFILE_BIG)
static void draw_inactive_profiles(lv_obj_t *canvas, const struct status_state *state) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    lv_canvas_draw_img(canvas, CONFIG_NICE_OLED_WIDGET_PROFILE_CUSTOM_X, CONFIG_NICE_OLED_WIDGET_PROFILE_CUSTOM_Y, &profiles, &img_dsc);
}

static void draw_active_profile(lv_obj_t *canvas, const struct status_state *state) {
    lv_draw_rect_dsc_t rect_white_dsc;
    init_rect_dsc(&rect_white_dsc, LVGL_FOREGROUND);

    int offset = state->active_profile_index * 7;

    lv_canvas_draw_rect(canvas, CONFIG_NICE_OLED_WIDGET_PROFILE_CUSTOM_X + offset, CONFIG_NICE_OLED_WIDGET_PROFILE_CUSTOM_Y, 3, 3, &rect_white_dsc);
}
#endif // !IS_ENABLED(CONFIG_NICE_OLED_WIDGET_PROFILE_BIG)

#if !IS_ENABLED(CONFIG_NICE_EPAPER_ON)

// Shared widget font (battery%, layer, profile text) — family + size from Kconfig
#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_FONT_FAMILY_JUA)
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_FONT_12)
  #define DRAW_WIDGET_FONTS &jua_12
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_FONT_16)
  #define DRAW_WIDGET_FONTS &jua_16
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_FONT_18)
  #define DRAW_WIDGET_FONTS &jua_18
  #else
  #define DRAW_WIDGET_FONTS &jua_14
  #endif
#else
  // Default family: Pixel Operator Mono
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_FONT_8)
  #define DRAW_WIDGET_FONTS &pixel_operator_mono_8
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_FONT_12)
  #define DRAW_WIDGET_FONTS &pixel_operator_mono_12
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_FONT_22)
  #define DRAW_WIDGET_FONTS &pixel_operator_mono_22
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_FONT_18)
  #define DRAW_WIDGET_FONTS &pixel_operator_mono_16  // fallback: no 18px in POM, use 16
  #else
  #define DRAW_WIDGET_FONTS &pixel_operator_mono_16
  #endif
#endif

static void draw_active_profile_text(lv_obj_t *canvas, const struct status_state *state) {
    // new label_dsc
    lv_draw_label_dsc_t label_dsc;
    init_label_dsc(&label_dsc, LVGL_FOREGROUND, DRAW_WIDGET_FONTS, LV_TEXT_ALIGN_LEFT);

    char text[14] = {};
    snprintf(text, sizeof(text), "%d", state->active_profile_index + 1);

    lv_canvas_draw_text(canvas, CONFIG_NICE_OLED_WIDGET_PROFILE_TEXT_CUSTOM_X, CONFIG_NICE_OLED_WIDGET_PROFILE_TEXT_CUSTOM_Y, 35, &label_dsc, text);
}
#endif // CONFIG_NICE_EPAPER_ON

void draw_profile_status(lv_obj_t *canvas, const struct status_state *state) {
#if !IS_ENABLED(CONFIG_NICE_EPAPER_ON)
    draw_active_profile_text(canvas, state);
#endif // CONFIG_NICE_EPAPER_ON

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_PROFILE_BIG) //  && IS_ENABLED(CONFIG_NICE_EPAPER_ON)
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    for (int i = 0; i < 5; i++) {
        lv_canvas_draw_img(canvas, OFFSET_X + (i * 14), OFFSET_Y,
                           i == state->active_profile_index ? &profile_active : &profile, &img_dsc);
    }
#else
    draw_inactive_profiles(canvas, state);
    draw_active_profile(canvas, state);
#endif
}
