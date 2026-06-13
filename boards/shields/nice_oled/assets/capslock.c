/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CAPSLOCK
#define LV_ATTRIBUTE_IMG_CAPSLOCK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CAPSLOCK uint8_t
    capslock_map[] = {
#if CONFIG_NICE_OLED_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

        /* 16x12 padlock icon */
        0x3f, 0xfc, /*  ..##########..  */
        0x7f, 0xfe, /*  .############.  */
        0x7f, 0xfe, /*  .############.  */
        0x7f, 0xfe, /*  .############.  */
        0x0f, 0xf0, /*  ....######....  */
        0x0f, 0xf0, /*  ....######....  */
        0x0f, 0xf0, /*  ....######....  */
        0xff, 0xff, /*  ##############  */
        0xff, 0xff, /*  ##############  */
        0xff, 0xff, /*  ##############  */
        0x7f, 0xfe, /*  .############.  */
        0x3f, 0xfc, /*  ..##########..  */
};

const lv_img_dsc_t capslock = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 16,
    .header.h = 12,
    .data_size = 32,
    .data = capslock_map,
};
