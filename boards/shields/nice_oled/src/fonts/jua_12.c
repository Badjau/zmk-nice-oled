/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font co3KmW9ljjAjc-DZCsKgsg.ttf --symbols QWERTYUIOPASDFGHJKLZXCVNM1234567890: --format lvgl -o jua_12.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef JUA_12
#define JUA_12 1
#endif

#if JUA_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x38, 0xfb, 0x16, 0x2c, 0x78, 0xb1, 0x3e, 0x38,

    /* U+0031 "1" */
    0x7f, 0x33, 0x33, 0x33, 0x30,

    /* U+0032 "2" */
    0x7b, 0xfc, 0x41, 0xc, 0x63, 0x18, 0xfc,

    /* U+0033 "3" */
    0xfd, 0xe1, 0x8c, 0x38, 0x30, 0xff, 0x78,

    /* U+0034 "4" */
    0x8, 0x63, 0x8a, 0x6b, 0x2f, 0xc2, 0x8,

    /* U+0035 "5" */
    0x7d, 0x4, 0x1e, 0x5c, 0x10, 0x7f, 0x78,

    /* U+0036 "6" */
    0x39, 0xfc, 0x3e, 0xff, 0x1c, 0x5f, 0x38,

    /* U+0037 "7" */
    0xfe, 0xc, 0x30, 0x61, 0x83, 0xc, 0x18, 0x20,

    /* U+0038 "8" */
    0x78, 0xf9, 0x12, 0x27, 0x8f, 0xb1, 0x62, 0x78,

    /* U+0039 "9" */
    0x7b, 0xfc, 0xf3, 0xfd, 0xf0, 0xf6, 0x70,

    /* U+003A ":" */
    0x80, 0x20,

    /* U+0041 "A" */
    0x18, 0x18, 0x1c, 0x3c, 0x26, 0x7e, 0x7e, 0x43,
    0x41,

    /* U+0043 "C" */
    0x38, 0xfb, 0x16, 0xc, 0x18, 0x31, 0x3e, 0x38,

    /* U+0044 "D" */
    0xf3, 0xec, 0xf3, 0xcf, 0x3c, 0xfe, 0xf0,

    /* U+0045 "E" */
    0xff, 0xc, 0x30, 0xfb, 0xc, 0x3e, 0xf8,

    /* U+0046 "F" */
    0xff, 0xc, 0x30, 0xfb, 0xc, 0x30, 0xc0,

    /* U+0047 "G" */
    0x0, 0xf9, 0x92, 0x2c, 0x19, 0x91, 0xb6, 0x3c,

    /* U+0048 "H" */
    0xc7, 0x3c, 0xf3, 0xff, 0x3c, 0xf3, 0xcc,

    /* U+0049 "I" */
    0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x7e, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x7c, 0x78,

    /* U+004B "K" */
    0xcb, 0x6f, 0x38, 0xe3, 0xcd, 0xb6, 0xcc,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x3e, 0xf8,

    /* U+004D "M" */
    0xc7, 0x8f, 0xbf, 0x7d, 0xfa, 0xf1, 0xe3, 0xc6,

    /* U+004E "N" */
    0xc7, 0x8f, 0x9f, 0xbf, 0x7b, 0xf3, 0xe7, 0xc6,

    /* U+004F "O" */
    0x38, 0xfb, 0x16, 0x2c, 0x78, 0xf1, 0x3e, 0x38,

    /* U+0050 "P" */
    0xfb, 0xfc, 0xf3, 0xfb, 0xc, 0x30, 0xc0,

    /* U+0051 "Q" */
    0x71, 0xf3, 0x34, 0x28, 0x52, 0xb7, 0x7e, 0x7e,

    /* U+0052 "R" */
    0xfb, 0xfc, 0xf3, 0xfb, 0x6c, 0xb3, 0x84,

    /* U+0053 "S" */
    0x78, 0xdb, 0x3, 0x7, 0xc0, 0xf1, 0xbe, 0x78,

    /* U+0054 "T" */
    0xfe, 0xf0, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x10,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe, 0x38,

    /* U+0056 "V" */
    0x42, 0x43, 0x66, 0x66, 0x66, 0x3c, 0x3c, 0x1c,
    0x18,

    /* U+0057 "W" */
    0x40, 0xa0, 0xd0, 0x6d, 0xa6, 0xd3, 0xf8, 0xdc,
    0x6e, 0x32, 0x0,

    /* U+0058 "X" */
    0x46, 0xcc, 0xb1, 0xc1, 0x87, 0x1b, 0x33, 0x42,

    /* U+0059 "Y" */
    0x8f, 0x37, 0x9c, 0x30, 0xc3, 0xc, 0x20,

    /* U+005A "Z" */
    0x7e, 0xfc, 0x30, 0xc1, 0x86, 0x18, 0x30, 0xfe
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 79, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 45, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 73, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 54, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 109, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 123, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 153, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65, .range_length = 1, .glyph_id_start = 12,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 67, .range_length = 24, .glyph_id_start = 13,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    12, 17,
    12, 25,
    12, 27,
    12, 30,
    12, 32,
    12, 33,
    12, 35,
    13, 25,
    13, 30,
    13, 32,
    13, 35,
    14, 12,
    14, 20,
    14, 30,
    14, 32,
    14, 35,
    14, 36,
    15, 25,
    15, 27,
    15, 30,
    16, 12,
    16, 20,
    16, 27,
    17, 26,
    17, 30,
    18, 14,
    18, 23,
    18, 31,
    19, 30,
    19, 35,
    20, 12,
    20, 13,
    20, 17,
    20, 25,
    21, 25,
    21, 32,
    21, 35,
    22, 13,
    22, 17,
    22, 24,
    22, 25,
    22, 27,
    22, 30,
    22, 31,
    22, 32,
    22, 33,
    22, 35,
    23, 14,
    23, 22,
    23, 23,
    23, 26,
    23, 28,
    23, 31,
    24, 15,
    24, 21,
    24, 22,
    24, 23,
    24, 26,
    24, 31,
    25, 12,
    25, 21,
    25, 22,
    25, 23,
    25, 26,
    25, 30,
    25, 35,
    26, 12,
    26, 20,
    26, 30,
    26, 32,
    26, 34,
    26, 36,
    27, 30,
    27, 35,
    28, 30,
    28, 32,
    28, 35,
    29, 16,
    29, 23,
    29, 26,
    29, 30,
    29, 35,
    30, 12,
    30, 13,
    30, 17,
    30, 19,
    30, 25,
    30, 27,
    30, 29,
    31, 22,
    31, 24,
    31, 27,
    32, 12,
    32, 20,
    33, 12,
    34, 16,
    35, 12,
    35, 13,
    35, 17,
    35, 20,
    35, 29,
    36, 25
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -6, -10, -10, -25, -19, -15, -19, -6,
    -10, -6, -6, -10, -6, -12, -8, -13,
    -6, -4, -4, -4, -19, -12, -4, 4,
    -7, 4, 4, 4, -8, -6, -19, -8,
    -10, -8, -10, -4, -6, -10, -13, -4,
    -13, -13, -29, -12, -27, -19, -31, 4,
    6, 4, 4, 4, 4, 4, 6, 4,
    4, 4, 4, -6, 6, 4, 4, 4,
    -10, -8, -19, -12, -8, -6, -10, -8,
    -12, -13, -12, -4, -8, 4, 6, 4,
    -8, -8, -25, -13, -10, -8, -12, -12,
    -6, 4, 4, 4, -17, -8, -15, 6,
    -19, -6, -6, -6, -6, -6
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 102,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t jua_12 = {
#else
lv_font_t jua_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .static_bitmap = 0,
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if JUA_12*/
