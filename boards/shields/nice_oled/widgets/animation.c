#include "animation.h"
#if !IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_SMART_BATTERY)
#include <stdlib.h>
#include <zephyr/kernel.h>

LV_IMG_DECLARE(crystal_01);
LV_IMG_DECLARE(crystal_02);
LV_IMG_DECLARE(crystal_03);
LV_IMG_DECLARE(crystal_04);
LV_IMG_DECLARE(crystal_05);
LV_IMG_DECLARE(crystal_06);
LV_IMG_DECLARE(crystal_07);
LV_IMG_DECLARE(crystal_08);
LV_IMG_DECLARE(crystal_09);
LV_IMG_DECLARE(crystal_10);
LV_IMG_DECLARE(crystal_11);
LV_IMG_DECLARE(crystal_12);
LV_IMG_DECLARE(crystal_13);
LV_IMG_DECLARE(crystal_14);
LV_IMG_DECLARE(crystal_15);
LV_IMG_DECLARE(crystal_16);

const lv_img_dsc_t *crystal_imgs[] = {
    &crystal_01, &crystal_02, &crystal_03, &crystal_04, &crystal_05, &crystal_06,
    &crystal_07, &crystal_08, &crystal_09, &crystal_10, &crystal_11, &crystal_12,
    &crystal_13, &crystal_14, &crystal_15, &crystal_16,
};

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL)
#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_RAVEN)

LV_IMG_DECLARE(raven_01);
LV_IMG_DECLARE(raven_02);
LV_IMG_DECLARE(raven_03);
LV_IMG_DECLARE(raven_04);
LV_IMG_DECLARE(raven_05);
LV_IMG_DECLARE(raven_06);
LV_IMG_DECLARE(raven_07);
LV_IMG_DECLARE(raven_08);
LV_IMG_DECLARE(raven_09);
LV_IMG_DECLARE(raven_10);
LV_IMG_DECLARE(raven_11);
LV_IMG_DECLARE(raven_12);
LV_IMG_DECLARE(raven_13);
LV_IMG_DECLARE(raven_14);
LV_IMG_DECLARE(raven_15);
LV_IMG_DECLARE(raven_16);
LV_IMG_DECLARE(raven_17);
LV_IMG_DECLARE(raven_18);
LV_IMG_DECLARE(raven_19);
LV_IMG_DECLARE(raven_20);
LV_IMG_DECLARE(raven_21);
LV_IMG_DECLARE(raven_22);
LV_IMG_DECLARE(raven_23);
LV_IMG_DECLARE(raven_24);
LV_IMG_DECLARE(raven_25);

const lv_img_dsc_t *raven_imgs[] = {
    &raven_01, &raven_02, &raven_03, &raven_04, &raven_05, &raven_06,
    &raven_07, &raven_08, &raven_09, &raven_10, &raven_11, &raven_12,
    &raven_13, &raven_14, &raven_15, &raven_16, &raven_17, &raven_18,
    &raven_19, &raven_20, &raven_21, &raven_22, &raven_23, &raven_24,
    &raven_25
};


#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_HEAD)

LV_IMG_DECLARE(head_00);
LV_IMG_DECLARE(head_01);
LV_IMG_DECLARE(head_02);
LV_IMG_DECLARE(head_03);
LV_IMG_DECLARE(head_04);
LV_IMG_DECLARE(head_05);
LV_IMG_DECLARE(head_06);
LV_IMG_DECLARE(head_07);
LV_IMG_DECLARE(head_08);
LV_IMG_DECLARE(head_09);
LV_IMG_DECLARE(head_10);
LV_IMG_DECLARE(head_11);
LV_IMG_DECLARE(head_12);
LV_IMG_DECLARE(head_13);
LV_IMG_DECLARE(head_14);
LV_IMG_DECLARE(head_15);

const lv_img_dsc_t *head_imgs[] = {&head_00, &head_01, &head_02, &head_03, &head_04, &head_05,
                                   &head_06, &head_07, &head_08, &head_09, &head_10, &head_11,
                                   &head_12, &head_13, &head_14, &head_15};

#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_CAT)
LV_IMG_DECLARE(cat_0);
LV_IMG_DECLARE(cat_1);
LV_IMG_DECLARE(cat_2);
LV_IMG_DECLARE(cat_3);
LV_IMG_DECLARE(cat_4);
LV_IMG_DECLARE(cat_5);
LV_IMG_DECLARE(cat_6);
LV_IMG_DECLARE(cat_7);

const lv_img_dsc_t *cat_imgs[] = {&cat_0, &cat_1, &cat_2, &cat_3, &cat_4, &cat_5, &cat_6, &cat_7};

#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_SPACEMAN)

LV_IMG_DECLARE(spaceman_00);
LV_IMG_DECLARE(spaceman_01);
LV_IMG_DECLARE(spaceman_02);
LV_IMG_DECLARE(spaceman_03);
LV_IMG_DECLARE(spaceman_04);
LV_IMG_DECLARE(spaceman_05);
LV_IMG_DECLARE(spaceman_06);
LV_IMG_DECLARE(spaceman_07);
LV_IMG_DECLARE(spaceman_08);
LV_IMG_DECLARE(spaceman_09);
LV_IMG_DECLARE(spaceman_10);
LV_IMG_DECLARE(spaceman_11);
LV_IMG_DECLARE(spaceman_12);
LV_IMG_DECLARE(spaceman_13);
LV_IMG_DECLARE(spaceman_14);
LV_IMG_DECLARE(spaceman_15);
LV_IMG_DECLARE(spaceman_16);
LV_IMG_DECLARE(spaceman_17);
LV_IMG_DECLARE(spaceman_18);
LV_IMG_DECLARE(spaceman_19);

const lv_img_dsc_t *spaceman_imgs[] = {&spaceman_00, &spaceman_01, &spaceman_02, &spaceman_03,
                                       &spaceman_04, &spaceman_05, &spaceman_06, &spaceman_07,
                                       &spaceman_08, &spaceman_09, &spaceman_10, &spaceman_11,
                                       &spaceman_12, &spaceman_13, &spaceman_14, &spaceman_15,
                                       &spaceman_16, &spaceman_17, &spaceman_18, &spaceman_19};
#else
#endif
#else // IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL)
      // IS_ENABLED(CONFIG_NICE_OLED_WIDGET_STATIC_IMAGE_PERIPHERAL)

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_STATIC_IMAGE_PERIPHERAL_VIM)
LV_IMG_DECLARE(vim);
#define FIXED_IMAGE_VIM &vim

#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_STATIC_IMAGE_PERIPHERAL_VIP_MARCOS)
LV_IMG_DECLARE(vip_marcos);
#define FIXED_IMAGE_VIP_MARCOS &vip_marcos

#else

LV_IMG_DECLARE(vim);
#define FIXED_IMAGE_1 &vim

#endif

#endif // IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL)
       // IS_ENABLED(CONFIG_NICE_OLED_WIDGET_STATIC_IMAGE_PERIPHERAL)

void draw_animation(lv_obj_t *canvas, struct zmk_widget_screen *widget) {
    lv_obj_t *art = lv_animimg_create(canvas);

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL)
    lv_obj_center(art);
#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_RAVEN)
    lv_animimg_set_src(art, (const void **)raven_imgs, 26);
#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_HEAD)
    lv_animimg_set_src(art, (const void **)head_imgs, 16);
#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_CAT)
    lv_animimg_set_src(art, (const void **)cat_imgs, 8);
#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_SPACEMAN)
    lv_animimg_set_src(art, (const void **)spaceman_imgs, 20);
#else
    lv_animimg_set_src(art, (const void **)crystal_imgs, 16);
#endif
    lv_animimg_set_duration(art, CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);

#else // IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL)
      // IS_ENABLED(CONFIG_NICE_OLED_WIDGET_STATIC_IMAGE_PERIPHERAL)

#if IS_ENABLED(CONFIG_NICE_OLED_WIDGET_STATIC_IMAGE_PERIPHERAL_VIM)
    lv_img_set_src(art, FIXED_IMAGE_VIM);
#elif IS_ENABLED(CONFIG_NICE_OLED_WIDGET_STATIC_IMAGE_PERIPHERAL_VIP_MARCOS)
    lv_img_set_src(art, FIXED_IMAGE_VIP_MARCOS);
#else
    int length = sizeof(crystal_imgs) / sizeof(crystal_imgs[0]);
    srand(k_uptime_get_32());
    int random_index = rand() % length;

    lv_img_set_src(art, crystal_imgs[random_index]);
#endif

#endif // IS_ENABLED(CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL)
       // IS_ENABLED(CONFIG_NICE_OLED_WIDGET_STATIC_IMAGE_PERIPHERAL)

    if (art) {
        lv_obj_align(art, LV_ALIGN_TOP_LEFT, CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_CUSTOM_X, CONFIG_NICE_OLED_WIDGET_ANIMATION_PERIPHERAL_CUSTOM_Y);
    }
}
#endif
