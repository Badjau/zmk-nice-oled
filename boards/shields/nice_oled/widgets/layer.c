#include "layer.h"
#include <fonts.h>
#include <zephyr/kernel.h>

// Layer widget gets its own configurable font (family + size), independent of other widgets
// Layer widget gets its own configurable font (family + size), independent of other widgets
#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_FAMILY_JUA)
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_12)
    #define DRAW_LAYER_FONTS &jua_12
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_16)
    #define DRAW_LAYER_FONTS &jua_16
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_18)
    #define DRAW_LAYER_FONTS &jua_18
  #else
    #define DRAW_LAYER_FONTS &jua_14
  #endif

#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_FAMILY_DESIGNER)
  #define DRAW_LAYER_FONTS &designer_16   

#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_FAMILY_ARIAL7)
  #define DRAW_LAYER_FONTS &arial7_16    

#else   // Default family: Pixel Operator Mono
  #if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_8)
    #define DRAW_LAYER_FONTS &pixel_operator_mono_8
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_12)
    #define DRAW_LAYER_FONTS &pixel_operator_mono_12
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_22)
    #define DRAW_LAYER_FONTS &pixel_operator_mono_22
  #elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_LAYER_FONT_18)
    #define DRAW_LAYER_FONTS &pixel_operator_mono_16  // fallback: no 18px in POM, use 16
  #else
    #define DRAW_LAYER_FONTS &pixel_operator_mono_16
  #endif
#endif

void draw_layer_status(lv_obj_t *canvas, const struct status_state *state) {
    lv_draw_label_dsc_t label_dsc;
#if IS_ENABLED(CONFIG_NICE_EPAPER_ON)
    init_label_dsc(&label_dsc, LVGL_FOREGROUND, DRAW_LAYER_FONTS, LV_TEXT_ALIGN_CENTER);
#else
    init_label_dsc(&label_dsc, LVGL_FOREGROUND, DRAW_LAYER_FONTS, LV_TEXT_ALIGN_LEFT);
#endif // CONFIG_NICE_EPAPER_ON

    char text[10] = {};

    if (state->layer_label == NULL) {
        sprintf(text, "Layer %i", state->layer_index);
    } else {
        strncpy(text, state->layer_label, 9);
        to_uppercase(text);
    }

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_RESPONSIVE_BONGO_CAT)
    lv_canvas_fill_bg(canvas, LVGL_BACKGROUND, LV_OPA_COVER);
#endif
    lv_canvas_draw_text(canvas, CONFIG_NICE_OLED_WIDGET_LAYER_CUSTOM_X, CONFIG_NICE_OLED_WIDGET_LAYER_CUSTOM_Y, 68, &label_dsc, text);
}
