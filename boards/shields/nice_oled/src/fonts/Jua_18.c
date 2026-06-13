/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --no-compress --stride 1 --align 1 --font jua.ttf --symbols [A-Za-z0-9\W_]+ --format lvgl -o jua_18.c
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



#ifndef JUA_18
#define JUA_18 1
#endif

#if JUA_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,
    0x18,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+0030 "0" */
    0x1e, 0x3f, 0x9f, 0xdc, 0x7e, 0x1e, 0xf, 0x7,
    0x83, 0xe1, 0xb0, 0xdc, 0xe7, 0xe1, 0xe0,

    /* U+0039 "9" */
    0x3e, 0x3f, 0xb9, 0xf8, 0x7c, 0x1e, 0x1d, 0xde,
    0xff, 0x1, 0x81, 0xf9, 0xcf, 0xe3, 0xc0,

    /* U+0041 "A" */
    0xc, 0x1, 0xc0, 0x78, 0xf, 0x81, 0xf0, 0x76,
    0xc, 0xe3, 0x8c, 0x7f, 0xcf, 0xfb, 0xff, 0x60,
    0x7c, 0x6,

    /* U+0057 "W" */
    0xc0, 0x16, 0x1, 0xf0, 0xd, 0x80, 0x6e, 0x63,
    0x33, 0x39, 0xbd, 0x8d, 0xec, 0x7f, 0xe1, 0xef,
    0xe, 0x78, 0x73, 0x83, 0x8c, 0x8, 0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xc0, 0xe0, 0xe0, 0xe0, 0x70, 0x70,
    0x70, 0x38, 0x38, 0x38, 0x1f, 0xff, 0xf8,

    /* U+005B "[" */
    0x7f, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0xef,

    /* U+005C "\\" */
    0x1, 0x83, 0x87, 0x6, 0xe, 0xc, 0x1c, 0x18,
    0x38, 0x70, 0x60, 0xe0, 0xc0,

    /* U+005D "]" */
    0xf7, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8f, 0xfe,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0061 "a" */
    0x3c, 0x3f, 0x39, 0x98, 0xec, 0x77, 0x39, 0xfe,
    0xfb,

    /* U+007A "z" */
    0xff, 0xfc, 0x30, 0xe3, 0x8e, 0x38, 0x7f, 0xfe
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 157, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 9, .adv_w = 137, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 11, .adv_w = 176, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 201, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 230, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 82, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 136, .box_w = 5, .box_h = 16, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 107, .adv_w = 138, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 136, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 130, .adv_w = 153, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 132, .adv_w = 166, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x2, 0x5, 0xe, 0x16, 0x2c, 0x2f, 0x30,
    0x31, 0x32, 0x34, 0x36, 0x4f
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 43, .range_length = 80, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 13, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    5, 6,
    5, 12,
    6, 5,
    6, 12,
    7, 12
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -23, -6, -23, -16, -16
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 5,
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
    .cmap_num = 1,
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
const lv_font_t jua_18 = {
#else
lv_font_t jua_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if JUA_18*/
