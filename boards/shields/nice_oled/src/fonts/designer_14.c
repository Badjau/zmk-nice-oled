/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --stride 1 --align 1 --font Designer.otf --range 32-127 --format lvgl -o designer_14.c
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



#ifndef DESIGNER_14
#define DESIGNER_14 1
#endif

#if DESIGNER_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x3b, 0x9c, 0xe7, 0x38, 0x1c, 0xe7, 0x0,

    /* U+0022 "\"" */
    0xef, 0x3d, 0x80,

    /* U+0023 "#" */
    0x12, 0x9, 0x1f, 0xe2, 0x83, 0x47, 0xf8, 0x90,
    0x48, 0x20, 0x0,

    /* U+0024 "$" */
    0x7, 0x7, 0xfd, 0xff, 0xb8, 0x7, 0x0, 0xff,
    0x8f, 0xf8, 0x7, 0x0, 0xdf, 0xfb, 0xfe, 0xe,
    0x0, 0xc0,

    /* U+0025 "%" */
    0x7c, 0x68, 0x99, 0x36, 0x3d, 0x80, 0x60, 0x18,
    0x6, 0xf8, 0x93, 0x22, 0x68, 0x78,

    /* U+0026 "&" */
    0x3f, 0x1f, 0xe7, 0x1, 0xc0, 0x7f, 0xff, 0xfc,
    0x73, 0x1c, 0xff, 0x3f, 0x80,

    /* U+0027 "'" */
    0xfb, 0x0,

    /* U+0028 "(" */
    0x3b, 0x9c, 0xee, 0x73, 0x9c, 0xe7, 0x0,

    /* U+0029 ")" */
    0x39, 0xce, 0x73, 0x9d, 0xce, 0x77, 0x0,

    /* U+002A "*" */
    0x53, 0xbe, 0xe5, 0x0,

    /* U+002B "+" */
    0x18, 0x30, 0x63, 0xff, 0xe7, 0xc, 0x0,

    /* U+002C "," */
    0x6f, 0x0,

    /* U+002D "-" */
    0xff, 0xe0,

    /* U+002E "." */
    0xd8,

    /* U+002F "/" */
    0x3, 0xc1, 0xe0, 0x70, 0x3c, 0xe, 0x7, 0x3,
    0xc0, 0xe0, 0x78, 0x3c, 0x0,

    /* U+0030 "0" */
    0x1f, 0xc7, 0xfd, 0xc3, 0xb8, 0x77, 0xe, 0xe3,
    0xb8, 0x77, 0xe, 0xff, 0xcf, 0xf0,

    /* U+0031 "1" */
    0xff, 0xdc, 0xe7, 0x39, 0xce, 0xe7, 0x0,

    /* U+0032 "2" */
    0x3f, 0xe7, 0xfc, 0x3, 0x80, 0x73, 0xfe, 0xff,
    0xb8, 0x7, 0x0, 0xff, 0xcf, 0xf8,

    /* U+0033 "3" */
    0x7f, 0xcf, 0xfc, 0x3, 0x80, 0x71, 0xfc, 0x3f,
    0x80, 0x70, 0xe, 0xff, 0x9f, 0xe0,

    /* U+0034 "4" */
    0x7, 0x1, 0xfc, 0x7b, 0x9e, 0x77, 0x9c, 0xf3,
    0xbf, 0xff, 0xfe, 0x1, 0xc0, 0x30,

    /* U+0035 "5" */
    0x3f, 0xe7, 0xfd, 0xc0, 0x38, 0x7, 0xfc, 0xff,
    0xc0, 0x38, 0x6, 0xff, 0xdf, 0xf0,

    /* U+0036 "6" */
    0x1f, 0xe7, 0xfd, 0xc0, 0x38, 0x7, 0xfc, 0xff,
    0xf8, 0x3f, 0x6, 0xff, 0xcf, 0xf0,

    /* U+0037 "7" */
    0xff, 0xff, 0xe0, 0xf0, 0x3c, 0x1e, 0x7, 0x83,
    0xc1, 0xe0, 0x78, 0x3c, 0x0,

    /* U+0038 "8" */
    0x1f, 0xc7, 0xfd, 0xc3, 0xb8, 0x77, 0xfc, 0xff,
    0xf8, 0x3f, 0xe, 0xff, 0xcf, 0xf0,

    /* U+0039 "9" */
    0x3f, 0xef, 0xfd, 0xc3, 0xb8, 0x77, 0xfe, 0x7f,
    0xc0, 0x38, 0x6, 0x7f, 0xdf, 0xf0,

    /* U+003A ":" */
    0x77, 0x0, 0xe, 0xe0,

    /* U+003B ";" */
    0x77, 0x0, 0xe, 0xcc,

    /* U+003C "<" */
    0x1, 0x7, 0x1f, 0x7e, 0xf8, 0x3e, 0xe, 0x2,

    /* U+003D "=" */
    0x7e, 0xfc, 0x0, 0xf, 0xdf, 0x80,

    /* U+003E ">" */
    0x40, 0x70, 0x7c, 0x3f, 0x3f, 0xfc, 0xf0, 0xc0,

    /* U+003F "?" */
    0xfe, 0xff, 0x7, 0x7, 0x3f, 0x7e, 0x0, 0x70,
    0x70, 0x70,

    /* U+0040 "@" */
    0x3f, 0xcc, 0xd, 0x7d, 0xa8, 0xa5, 0x15, 0xbf,
    0xa0, 0x6, 0x0, 0x7f, 0x80,

    /* U+0041 "A" */
    0x3, 0x80, 0x7c, 0x7, 0xc0, 0xfc, 0x1f, 0xc1,
    0xee, 0x3c, 0xe7, 0xfe, 0x7f, 0xff, 0x7,

    /* U+0042 "B" */
    0x3f, 0xe7, 0xfe, 0x70, 0xe7, 0xe, 0x7f, 0xe7,
    0xfe, 0x60, 0xee, 0xe, 0xff, 0xcf, 0xf8,

    /* U+0043 "C" */
    0x3f, 0xdf, 0xf7, 0x1, 0xc0, 0x70, 0x1c, 0xe,
    0x3, 0x80, 0xff, 0x9f, 0xc0,

    /* U+0044 "D" */
    0x3f, 0xcf, 0xfd, 0xc3, 0xb8, 0x77, 0xe, 0xe3,
    0x9c, 0x77, 0xe, 0xff, 0xdf, 0xf0,

    /* U+0045 "E" */
    0x3f, 0xef, 0xf9, 0xc0, 0x38, 0x7, 0xf8, 0xff,
    0x18, 0x7, 0x0, 0xff, 0x9f, 0xf0,

    /* U+0046 "F" */
    0x3f, 0xef, 0xf9, 0xc0, 0x38, 0x7, 0xf8, 0xff,
    0x18, 0x7, 0x0, 0xe0, 0x1c, 0x0,

    /* U+0047 "G" */
    0x3f, 0xf3, 0xfe, 0x70, 0x7, 0x0, 0x73, 0xe7,
    0x7e, 0xe0, 0xee, 0xc, 0xff, 0xc7, 0xfc,

    /* U+0048 "H" */
    0x38, 0xee, 0x1d, 0xc3, 0xb8, 0x77, 0xfe, 0xff,
    0xb8, 0x77, 0xe, 0xe1, 0xdc, 0x38,

    /* U+0049 "I" */
    0x3b, 0x9c, 0xe7, 0x3b, 0x9c, 0xe7, 0x0,

    /* U+004A "J" */
    0x1, 0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0xe0,
    0x38, 0xe, 0x7f, 0xbf, 0xc0,

    /* U+004B "K" */
    0x38, 0xe7, 0x1c, 0x73, 0x87, 0x70, 0x7e, 0x7,
    0xe0, 0x7f, 0xf, 0x70, 0xe7, 0x8e, 0x3c,

    /* U+004C "L" */
    0x38, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x83, 0xc1,
    0xc0, 0xff, 0xff, 0x80,

    /* U+004D "M" */
    0x38, 0x1d, 0xe0, 0xf7, 0x87, 0xdf, 0x1e, 0x7c,
    0xf9, 0xf7, 0xee, 0xff, 0xbb, 0xee, 0xef, 0xbb,
    0xbc, 0xc0,

    /* U+004E "N" */
    0x38, 0x77, 0xc7, 0x7c, 0xe7, 0xee, 0x7e, 0xe7,
    0x7e, 0x67, 0xee, 0x3e, 0xe3, 0xce, 0x1c,

    /* U+004F "O" */
    0x3f, 0xe7, 0xff, 0x70, 0x77, 0x7, 0x70, 0x77,
    0xe, 0xe0, 0xee, 0xe, 0xff, 0xe7, 0xfc,

    /* U+0050 "P" */
    0x3f, 0xe7, 0xfe, 0x70, 0xe7, 0xe, 0x70, 0xe7,
    0xfe, 0x7f, 0xce, 0x0, 0xe0, 0xe, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xe7, 0xff, 0x70, 0x77, 0x7, 0x70, 0x77,
    0xe, 0xe0, 0xee, 0xe, 0xff, 0xe7, 0xfc, 0x3,
    0xc0, 0x10,

    /* U+0052 "R" */
    0x7f, 0xe7, 0xfe, 0x70, 0xe7, 0xe, 0x70, 0xe7,
    0xfc, 0xff, 0xce, 0x38, 0xe3, 0xce, 0x1c,

    /* U+0053 "S" */
    0x3f, 0xef, 0xfd, 0xc0, 0x38, 0x7, 0xfc, 0xff,
    0x80, 0x30, 0xe, 0xff, 0xdf, 0xf0,

    /* U+0054 "T" */
    0xff, 0xff, 0xe1, 0xc0, 0x70, 0x38, 0xe, 0x3,
    0x80, 0xe0, 0x38, 0xe, 0x0,

    /* U+0055 "U" */
    0x30, 0x77, 0x7, 0x70, 0x67, 0xe, 0x70, 0xe7,
    0xe, 0xe0, 0xee, 0xe, 0xff, 0xc7, 0xf8,

    /* U+0056 "V" */
    0xe0, 0xfc, 0x3b, 0x8f, 0x79, 0xc7, 0x78, 0xee,
    0x1f, 0x83, 0xf0, 0x7c, 0xf, 0x80,

    /* U+0057 "W" */
    0xe1, 0x87, 0xe3, 0xcf, 0xe7, 0xce, 0xf7, 0xdc,
    0x7f, 0xdc, 0x7f, 0xf8, 0x7c, 0xf8, 0x7c, 0xf0,
    0x78, 0xf0, 0x38, 0xe0,

    /* U+0058 "X" */
    0x3c, 0xf1, 0xde, 0x1f, 0xc0, 0xf8, 0xf, 0x80,
    0xf0, 0x1f, 0x83, 0xfc, 0x7b, 0xcf, 0x1e,

    /* U+0059 "Y" */
    0xe1, 0xfc, 0xe7, 0x71, 0xf8, 0x7e, 0xf, 0x3,
    0x80, 0xe0, 0x38, 0xe, 0x0,

    /* U+005A "Z" */
    0x7f, 0xef, 0xfc, 0x1f, 0x7, 0xe1, 0xf0, 0x7c,
    0x1f, 0x7, 0xc0, 0xff, 0xdf, 0xf0,

    /* U+005B "[" */
    0x1e, 0x79, 0xc3, 0x87, 0xe, 0x1c, 0x70, 0xe1,
    0xc3, 0xe3, 0xc0,

    /* U+005C "\\" */
    0xe3, 0x8f, 0x1c, 0x71, 0xc3, 0x8e, 0x38, 0x70,

    /* U+005D "]" */
    0x3c, 0x7c, 0x38, 0x70, 0xc3, 0x87, 0xe, 0x1c,
    0x39, 0xe7, 0x80,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0061 "a" */
    0x3, 0x80, 0xf0, 0x3e, 0x7, 0xe1, 0xdc, 0x7b,
    0x8f, 0xfb, 0xff, 0xf0, 0xe0,

    /* U+0062 "b" */
    0x7f, 0xcf, 0xf9, 0xc3, 0x3f, 0xe7, 0xfc, 0xc3,
    0xb8, 0x77, 0xfe, 0xff, 0x80,

    /* U+0063 "c" */
    0x3f, 0xbf, 0xdc, 0xe, 0x6, 0x7, 0x3, 0x81,
    0xfe, 0x7f, 0x0,

    /* U+0064 "d" */
    0x3f, 0x9f, 0xf7, 0x1d, 0xc7, 0x71, 0xd8, 0x7e,
    0x1b, 0xfe, 0xff, 0x0,

    /* U+0065 "e" */
    0x7f, 0xdf, 0xf7, 0x1, 0xfc, 0x7f, 0x18, 0xe,
    0x3, 0xfe, 0xff, 0x0,

    /* U+0066 "f" */
    0x7f, 0xdf, 0xf7, 0x1, 0xc0, 0x7f, 0x1f, 0xce,
    0x3, 0x80, 0xe0, 0x0,

    /* U+0067 "g" */
    0x3f, 0xef, 0xfd, 0xc0, 0x3b, 0xe6, 0x7d, 0xc3,
    0xb8, 0x77, 0xfe, 0x7f, 0x80,

    /* U+0068 "h" */
    0x70, 0xdc, 0x77, 0x1d, 0xff, 0x7f, 0xd8, 0x7e,
    0x3b, 0x8e, 0xe3, 0x80,

    /* U+0069 "i" */
    0x77, 0x77, 0x76, 0xee, 0xe0,

    /* U+006A "j" */
    0x1, 0xc0, 0x60, 0x38, 0xe, 0x3, 0x80, 0xe0,
    0x31, 0xfc, 0xfe, 0x0,

    /* U+006B "k" */
    0x71, 0xce, 0x71, 0xdc, 0x3f, 0x7, 0xc0, 0xfc,
    0x3f, 0xc7, 0x38, 0xe3, 0x80,

    /* U+006C "l" */
    0x70, 0x70, 0x70, 0x70, 0x70, 0x60, 0xe0, 0xff,
    0xff,

    /* U+006D "m" */
    0x78, 0x3b, 0xc3, 0xde, 0x3c, 0xf1, 0xe7, 0xdf,
    0x3f, 0xfb, 0xff, 0xdd, 0xee, 0xee, 0x60,

    /* U+006E "n" */
    0x78, 0xef, 0x1d, 0xf3, 0x3f, 0xe7, 0xfc, 0xcf,
    0xb9, 0xf7, 0x1e, 0xe3, 0x80,

    /* U+006F "o" */
    0x3f, 0xcf, 0xfd, 0xc3, 0xb8, 0x76, 0xf, 0xc1,
    0xb8, 0x77, 0xfe, 0x7f, 0x80,

    /* U+0070 "p" */
    0x7f, 0xcf, 0xf9, 0xc3, 0x38, 0xe7, 0x1c, 0xff,
    0xbf, 0xe7, 0x0, 0xe0, 0x0,

    /* U+0071 "q" */
    0x3f, 0xcf, 0xfd, 0xc3, 0xb8, 0x76, 0xf, 0xc1,
    0xb8, 0x77, 0xfe, 0x7f, 0x80, 0x70, 0x0, 0x0,

    /* U+0072 "r" */
    0x7f, 0xcf, 0xf9, 0xc3, 0x38, 0xe7, 0x1c, 0xff,
    0xbf, 0xe7, 0x1c, 0xe3, 0x80,

    /* U+0073 "s" */
    0x3f, 0xdf, 0xf7, 0x1, 0x80, 0x7f, 0x9f, 0xf0,
    0x1f, 0xfe, 0xff, 0x0,

    /* U+0074 "t" */
    0xff, 0xff, 0xce, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x60, 0x70, 0x0,

    /* U+0075 "u" */
    0x70, 0xee, 0x1d, 0xc3, 0x38, 0x66, 0x1c, 0xc3,
    0xb8, 0x77, 0xfc, 0x7f, 0x0,

    /* U+0076 "v" */
    0xe1, 0xf8, 0xee, 0x3b, 0x9c, 0x77, 0x1f, 0x87,
    0xe1, 0xf0, 0x78, 0x0,

    /* U+0077 "w" */
    0xe3, 0x8f, 0xcf, 0x3b, 0x9e, 0xe7, 0x7d, 0xc7,
    0xff, 0xf, 0xbe, 0x1e, 0x78, 0x3c, 0xf0, 0x71,
    0xc0,

    /* U+0078 "x" */
    0x3c, 0xe3, 0xb8, 0x7e, 0x7, 0xc0, 0xf0, 0x3e,
    0xf, 0xe3, 0xdc, 0x73, 0xc0,

    /* U+0079 "y" */
    0xe3, 0xf3, 0x9f, 0x8f, 0xc7, 0xc1, 0xc0, 0xe0,
    0x70, 0x30, 0x0,

    /* U+007A "z" */
    0x7f, 0xdf, 0xf0, 0x7c, 0x3e, 0x3e, 0x1f, 0xf,
    0x83, 0xfe, 0xff, 0x80,

    /* U+007B "{" */
    0xe, 0x3c, 0xe1, 0xc7, 0xc, 0x1c, 0x38, 0x70,
    0xe1, 0xf3, 0xc0,

    /* U+007C "|" */
    0x39, 0xdc, 0xe7, 0x39, 0xce, 0xe7, 0x39, 0xce,
    0x0,

    /* U+007D "}" */
    0x3c, 0x7c, 0x38, 0x70, 0xe1, 0xc3, 0x8e, 0x1c,
    0x31, 0xe7, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 100, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 72, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 98, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 11, .adv_w = 144, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 183, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 40, .adv_w = 185, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 176, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 47, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 69, .adv_w = 77, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 76, .adv_w = 77, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 83, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 87, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 94, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 95, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 98, .adv_w = 54, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 128, .box_w = 10, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 178, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 92, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 183, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 176, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 183, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 184, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 185, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 184, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 184, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 62, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 248, .adv_w = 62, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 134, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 260, .adv_w = 114, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 266, .adv_w = 134, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 274, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 174, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 190, .box_w = 12, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 187, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 154, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 178, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 167, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 162, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 186, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 180, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 72, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 147, .box_w = 10, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 173, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 223, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 187, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 194, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 181, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 194, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 539, .adv_w = 185, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 178, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 159, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 187, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 175, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 262, .box_w = 16, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 170, .box_w = 12, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 161, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 169, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 95, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 683, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 95, .box_w = 7, .box_h = 12, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 702, .adv_w = 108, .box_w = 8, .box_h = 2, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 704, .adv_w = 175, .box_w = 11, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 144, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 165, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 150, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 172, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 167, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 70, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 137, .box_w = 10, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 160, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 138, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 206, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 179, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 168, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 179, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 911, .adv_w = 172, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 165, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 147, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 162, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 972, .adv_w = 240, .box_w = 15, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 989, .adv_w = 158, .box_w = 11, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 149, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1013, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1025, .adv_w = 107, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1036, .adv_w = 72, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1045, .adv_w = 107, .box_w = 7, .box_h = 12, .ofs_x = -1, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 62, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 95, .range_length = 1, .glyph_id_start = 63,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 29, .glyph_id_start = 64,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    17, 18,
    17, 20,
    17, 22,
    17, 24,
    19, 20,
    19, 21,
    19, 22,
    19, 25,
    20, 18,
    20, 20,
    20, 22,
    20, 24,
    21, 18,
    21, 20,
    21, 22,
    21, 24,
    21, 26,
    22, 18,
    22, 20,
    22, 24,
    22, 26,
    23, 18,
    23, 20,
    23, 24,
    23, 26,
    25, 18,
    25, 20,
    25, 22,
    25, 24,
    25, 26,
    26, 18,
    26, 20,
    26, 22,
    26, 24,
    34, 3,
    34, 8,
    34, 9,
    34, 11,
    34, 14,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 61,
    34, 66,
    34, 70,
    34, 78,
    34, 80,
    34, 83,
    34, 84,
    34, 85,
    34, 86,
    34, 88,
    34, 90,
    35, 8,
    35, 16,
    35, 34,
    35, 55,
    35, 56,
    35, 57,
    35, 58,
    35, 61,
    35, 62,
    35, 64,
    35, 87,
    35, 92,
    36, 14,
    36, 90,
    37, 8,
    37, 16,
    37, 34,
    37, 55,
    37, 56,
    37, 57,
    37, 58,
    37, 61,
    37, 62,
    37, 64,
    37, 87,
    37, 92,
    38, 14,
    38, 90,
    39, 13,
    39, 14,
    39, 15,
    39, 16,
    39, 34,
    39, 43,
    39, 64,
    39, 66,
    39, 70,
    39, 73,
    39, 78,
    39, 80,
    39, 90,
    40, 8,
    40, 90,
    41, 8,
    41, 65,
    41, 67,
    41, 68,
    41, 69,
    41, 71,
    41, 72,
    41, 74,
    41, 75,
    41, 76,
    41, 77,
    41, 79,
    41, 81,
    41, 90,
    42, 8,
    42, 65,
    42, 67,
    42, 68,
    42, 69,
    42, 71,
    42, 72,
    42, 74,
    42, 75,
    42, 76,
    42, 77,
    42, 79,
    42, 81,
    42, 90,
    43, 8,
    43, 16,
    43, 34,
    43, 64,
    43, 87,
    44, 9,
    44, 14,
    44, 27,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 66,
    44, 70,
    44, 78,
    44, 80,
    44, 82,
    44, 84,
    44, 90,
    45, 3,
    45, 8,
    45, 11,
    45, 14,
    45, 32,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 61,
    45, 83,
    45, 85,
    45, 86,
    45, 88,
    45, 90,
    46, 8,
    46, 65,
    46, 67,
    46, 68,
    46, 69,
    46, 71,
    46, 72,
    46, 74,
    46, 75,
    46, 76,
    46, 77,
    46, 79,
    46, 81,
    46, 90,
    47, 8,
    47, 65,
    47, 67,
    47, 68,
    47, 69,
    47, 71,
    47, 72,
    47, 74,
    47, 75,
    47, 76,
    47, 77,
    47, 79,
    47, 81,
    47, 90,
    48, 8,
    48, 16,
    48, 34,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    48, 61,
    48, 62,
    48, 64,
    48, 87,
    48, 92,
    49, 13,
    49, 15,
    49, 16,
    49, 34,
    49, 43,
    49, 57,
    49, 62,
    49, 64,
    49, 73,
    49, 92,
    50, 8,
    50, 16,
    50, 34,
    50, 55,
    50, 56,
    50, 57,
    50, 58,
    50, 61,
    50, 62,
    50, 64,
    50, 87,
    50, 92,
    51, 8,
    51, 55,
    51, 56,
    51, 58,
    51, 61,
    52, 3,
    52, 8,
    52, 11,
    52, 16,
    52, 32,
    52, 61,
    52, 62,
    52, 82,
    52, 83,
    52, 85,
    52, 86,
    52, 87,
    52, 90,
    52, 92,
    53, 13,
    53, 14,
    53, 15,
    53, 16,
    53, 34,
    53, 43,
    53, 64,
    53, 73,
    53, 90,
    54, 8,
    54, 16,
    54, 34,
    54, 64,
    54, 87,
    55, 9,
    55, 13,
    55, 14,
    55, 15,
    55, 16,
    55, 27,
    55, 28,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 64,
    55, 65,
    55, 66,
    55, 67,
    55, 68,
    55, 69,
    55, 70,
    55, 71,
    55, 72,
    55, 73,
    55, 74,
    55, 75,
    55, 76,
    55, 77,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 84,
    55, 90,
    56, 9,
    56, 13,
    56, 14,
    56, 15,
    56, 16,
    56, 27,
    56, 28,
    56, 34,
    56, 36,
    56, 40,
    56, 43,
    56, 48,
    56, 50,
    56, 64,
    56, 65,
    56, 66,
    56, 67,
    56, 68,
    56, 69,
    56, 70,
    56, 71,
    56, 72,
    56, 73,
    56, 74,
    56, 75,
    56, 76,
    56, 77,
    56, 78,
    56, 79,
    56, 80,
    56, 81,
    56, 82,
    56, 84,
    56, 90,
    57, 9,
    57, 14,
    57, 27,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 66,
    57, 70,
    57, 78,
    57, 80,
    57, 84,
    57, 90,
    58, 9,
    58, 13,
    58, 14,
    58, 15,
    58, 16,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 64,
    58, 65,
    58, 66,
    58, 67,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 73,
    58, 74,
    58, 75,
    58, 76,
    58, 77,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 84,
    58, 90,
    59, 14,
    59, 90,
    64, 3,
    64, 8,
    64, 11,
    64, 14,
    64, 32,
    64, 61,
    64, 66,
    64, 70,
    64, 78,
    64, 80,
    64, 83,
    64, 84,
    64, 85,
    64, 86,
    64, 88,
    64, 90,
    65, 3,
    65, 8,
    65, 11,
    65, 16,
    65, 32,
    65, 61,
    65, 62,
    65, 64,
    65, 87,
    65, 88,
    65, 92,
    66, 14,
    66, 90,
    67, 3,
    67, 8,
    67, 11,
    67, 16,
    67, 32,
    67, 61,
    67, 62,
    67, 64,
    67, 87,
    67, 88,
    67, 92,
    68, 14,
    68, 90,
    69, 13,
    69, 14,
    69, 15,
    69, 16,
    69, 64,
    69, 73,
    69, 90,
    70, 61,
    71, 8,
    71, 61,
    72, 8,
    72, 61,
    73, 16,
    73, 61,
    73, 62,
    73, 64,
    73, 92,
    74, 14,
    74, 66,
    74, 70,
    74, 78,
    74, 80,
    74, 90,
    75, 3,
    75, 8,
    75, 11,
    75, 14,
    75, 32,
    75, 61,
    75, 83,
    75, 85,
    75, 86,
    75, 88,
    75, 90,
    76, 8,
    76, 61,
    77, 8,
    77, 61,
    78, 3,
    78, 8,
    78, 11,
    78, 16,
    78, 32,
    78, 61,
    78, 62,
    78, 64,
    78, 87,
    78, 88,
    78, 92,
    79, 13,
    79, 15,
    79, 16,
    79, 61,
    79, 62,
    79, 64,
    79, 73,
    79, 87,
    79, 92,
    80, 3,
    80, 8,
    80, 11,
    80, 16,
    80, 32,
    80, 61,
    80, 62,
    80, 64,
    80, 87,
    80, 88,
    80, 92,
    81, 3,
    81, 8,
    81, 11,
    81, 32,
    81, 61,
    81, 85,
    81, 86,
    81, 88,
    82, 3,
    82, 8,
    82, 11,
    82, 61,
    82, 62,
    82, 90,
    82, 92,
    83, 13,
    83, 14,
    83, 15,
    83, 16,
    83, 64,
    83, 73,
    83, 90,
    84, 16,
    84, 61,
    84, 62,
    84, 64,
    84, 92,
    85, 13,
    85, 14,
    85, 15,
    85, 16,
    85, 64,
    85, 73,
    85, 90,
    86, 13,
    86, 14,
    86, 15,
    86, 16,
    86, 64,
    86, 73,
    86, 90,
    87, 14,
    87, 66,
    87, 70,
    87, 78,
    87, 80,
    87, 90,
    88, 13,
    88, 14,
    88, 15,
    88, 16,
    88, 64,
    88, 66,
    88, 70,
    88, 73,
    88, 78,
    88, 80,
    88, 82,
    88, 90,
    89, 14,
    89, 90
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -1, -2, -2, -1, -1, -4, -2, -2,
    -1, -2, -2, -1, -7, -2, -2, -7,
    -5, -2, -2, -2, -5, -2, -2, -2,
    -5, -3, -2, -2, -3, -3, -1, -2,
    -2, -1, -26, -27, -2, -21, -9, -11,
    -3, -3, -3, -3, -22, -4, -19, -19,
    -22, -12, -2, -2, -2, -2, -20, -3,
    -17, -17, -20, -10, -2, -4, -2, -1,
    -1, -3, -4, -4, -5, -3, -2, -5,
    -10, -8, -2, -4, -2, -1, -1, -3,
    -4, -4, -5, -3, -2, -5, -8, -7,
    -11, -7, -11, -11, -17, -20, -18, -1,
    -1, -22, -1, -1, -6, -2, -1, -2,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -2, -2, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -2, -1, -5, -3, -6, -2,
    -2, -10, -5, -5, -5, -5, -5, -7,
    -7, -7, -7, -1, -6, -9, -27, -28,
    -23, -9, -12, -26, -23, -23, -26, -13,
    -24, -22, -22, -24, -9, -2, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -2, -2, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -2, -2, -4, -2, -1, -1, -3, -4,
    -4, -5, -3, -2, -5, -9, -9, -10,
    -13, -12, -4, -4, -15, -14, -4, -2,
    -4, -2, -1, -1, -3, -4, -4, -5,
    -3, -2, -5, -2, -1, -1, -4, -4,
    -3, -5, -3, -2, -1, -1, -2, -2,
    -1, -2, -2, -2, -4, -2, -11, -12,
    -11, -12, -21, -26, -22, -25, -6, -1,
    -5, -3, -6, -2, -2, -10, -10, -10,
    -11, -2, -2, -19, -2, -2, -23, -2,
    -2, -19, -3, -6, -3, -3, -3, -6,
    -3, -3, -23, -3, -3, -3, -3, -6,
    -3, -6, -3, -6, -2, -8, -2, -10,
    -10, -10, -11, -2, -2, -19, -2, -2,
    -23, -2, -2, -19, -3, -6, -3, -3,
    -3, -6, -3, -3, -23, -3, -3, -3,
    -3, -6, -3, -6, -3, -6, -2, -8,
    -2, -10, -3, -4, -4, -4, -4, -5,
    -5, -5, -5, -4, -9, -2, -11, -12,
    -11, -12, -3, -3, -21, -4, -4, -26,
    -4, -4, -2, -22, -4, -10, -4, -4,
    -4, -10, -4, -4, -25, -4, -4, -4,
    -4, -10, -4, -10, -4, -9, -2, -9,
    -9, -8, -27, -28, -21, -9, -11, -11,
    -2, -2, -2, -2, -20, -3, -17, -17,
    -20, -9, -2, -4, -2, -2, -1, -7,
    -5, -1, -2, -3, -5, -8, -5, -2,
    -4, -2, -2, -1, -7, -5, -1, -2,
    -3, -5, -6, -5, -10, -4, -10, -10,
    -16, -17, -2, -2, -1, -2, -1, -2,
    -3, -2, -3, -2, -3, -10, -3, -3,
    -3, -3, -7, -27, -28, -23, -10, -12,
    -13, -24, -21, -21, -24, -8, -1, -2,
    -1, -2, -2, -4, -2, -2, -1, -7,
    -5, -1, -2, -3, -5, -7, -7, -9,
    -4, -9, -12, -10, -3, -9, -2, -4,
    -2, -2, -1, -7, -5, -1, -2, -3,
    -5, -3, -4, -3, -2, -7, -1, -1,
    -3, -2, -3, -1, -4, -2, -4, -2,
    -11, -3, -11, -11, -19, -24, -2, -3,
    -2, -3, -2, -3, -9, -5, -9, -10,
    -17, -21, -4, -9, -5, -9, -10, -17,
    -21, -4, -9, -2, -2, -2, -2, -8,
    -11, -11, -11, -11, -19, -2, -2, -24,
    -2, -2, -1, -7, -5, -3
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 550,
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
const lv_font_t designer_14 = {
#else
lv_font_t designer_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if DESIGNER_14*/
