/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --stride 1 --align 1 --font arial_narrow_7.ttf --range 32-127 --format lvgl -o arial_7_16.c
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



#ifndef ARIAL_7_16
#define ARIAL_7_16 1
#endif

#if ARIAL_7_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0xc,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x6d, 0xbf, 0xdb, 0x6d, 0xb6, 0xff, 0x6d, 0xb6,
    0xc0,

    /* U+0024 "$" */
    0x10, 0x47, 0xb7, 0xdf, 0x47, 0x8f, 0x1f, 0x7d,
    0xde, 0x10, 0x40,

    /* U+0025 "%" */
    0xcc, 0x20, 0x86, 0x10, 0xc2, 0x18, 0x41, 0xc,
    0xc0,

    /* U+0026 "&" */
    0x30, 0xf3, 0x36, 0x6c, 0xcf, 0xf8, 0x60, 0xcd,
    0x99, 0xf8,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x7c, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc7,

    /* U+0029 ")" */
    0xe1, 0x86, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0xdc,

    /* U+002A "*" */
    0x79, 0xef, 0xde, 0x78,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30, 0xc0,

    /* U+002C "," */
    0xc2, 0x20,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0xc, 0x30, 0x86, 0x10, 0xc2, 0x18, 0x61, 0xc,
    0x0,

    /* U+0030 "0" */
    0x7b, 0x1c, 0xf3, 0xff, 0xbe, 0xf3, 0xce, 0x37,
    0x80,

    /* U+0031 "1" */
    0xed, 0xb6, 0xdb, 0x6d, 0x80,

    /* U+0032 "2" */
    0x7b, 0x3c, 0xc3, 0xd, 0xec, 0x30, 0xc3, 0xf,
    0xc0,

    /* U+0033 "3" */
    0x7b, 0x3c, 0xc3, 0xc, 0xe0, 0xc3, 0xcf, 0x37,
    0x80,

    /* U+0034 "4" */
    0xcf, 0x3c, 0xf3, 0xcd, 0xf0, 0xc3, 0xc, 0x30,
    0xc0,

    /* U+0035 "5" */
    0xff, 0xc, 0x3e, 0xc, 0x30, 0xc3, 0xcf, 0x37,
    0x80,

    /* U+0036 "6" */
    0x7b, 0x3c, 0xf0, 0xc3, 0xec, 0xf3, 0xcf, 0x37,
    0x80,

    /* U+0037 "7" */
    0xfc, 0x30, 0xc6, 0x18, 0x61, 0xc, 0x30, 0xc2,
    0x0,

    /* U+0038 "8" */
    0x7b, 0xfc, 0xf3, 0x7d, 0xec, 0xf3, 0xcf, 0x37,
    0x80,

    /* U+0039 "9" */
    0x7b, 0x3c, 0xf3, 0xcd, 0xf0, 0xc3, 0xcf, 0x37,
    0x80,

    /* U+003A ":" */
    0xc0, 0xc,

    /* U+003B ";" */
    0xc0, 0x0, 0x32, 0x40,

    /* U+003C "<" */
    0x4, 0x73, 0xb8, 0x38, 0x30, 0x0,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x83, 0x87, 0x87, 0x73, 0x0, 0x0,

    /* U+003F "?" */
    0x7b, 0x3c, 0xc3, 0x8, 0xc0, 0x0, 0x0, 0x3,
    0x0,

    /* U+0040 "@" */
    0x7f, 0xf6, 0x0, 0xf0, 0x7, 0x8f, 0xbd, 0xdd,
    0xec, 0x6f, 0x63, 0x7b, 0x1b, 0xd8, 0xde, 0xee,
    0xf3, 0xff, 0x80, 0xc, 0x0, 0x3f, 0xf0,

    /* U+0041 "A" */
    0x7b, 0x3c, 0xf3, 0xcf, 0xfc, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0042 "B" */
    0xf3, 0x2c, 0xf3, 0xcb, 0xcc, 0xf3, 0xcf, 0x3f,
    0x80,

    /* U+0043 "C" */
    0x7b, 0x3c, 0xf0, 0xc3, 0xc, 0x30, 0xcf, 0x37,
    0x80,

    /* U+0044 "D" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0x80,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0x30, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0x30, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0047 "G" */
    0x7b, 0x3c, 0xf0, 0xc3, 0xd, 0xf3, 0xcf, 0x37,
    0x80,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xf3, 0xcf, 0xfc, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xcf, 0x37,
    0x80,

    /* U+004B "K" */
    0xcd, 0x93, 0x66, 0x8f, 0x1e, 0x34, 0x6c, 0xc9,
    0x9b, 0x10,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+004D "M" */
    0xcf, 0x3f, 0xff, 0xff, 0xfc, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+004E "N" */
    0xcf, 0x3e, 0xfb, 0xef, 0xfd, 0xf7, 0xdf, 0x3c,
    0xc0,

    /* U+004F "O" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0x80,

    /* U+0050 "P" */
    0xfb, 0x3c, 0xf3, 0xcf, 0xec, 0x30, 0xc3, 0xc,
    0x0,

    /* U+0051 "Q" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0xc0,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xf3, 0xcf, 0xed, 0x36, 0xdb, 0x2c,
    0xc0,

    /* U+0053 "S" */
    0x7b, 0x3c, 0xf0, 0xc1, 0xe0, 0xc3, 0xcf, 0x37,
    0x80,

    /* U+0054 "T" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+0055 "U" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0x80,

    /* U+0056 "V" */
    0xc7, 0x34, 0xd3, 0x69, 0xe7, 0x8e, 0x30, 0xc3,
    0x0,

    /* U+0057 "W" */
    0xc4, 0x79, 0xcd, 0x39, 0x27, 0x26, 0xac, 0xf5,
    0x9e, 0xf1, 0xdc, 0x33, 0x86, 0x30, 0xc6, 0x0,

    /* U+0058 "X" */
    0xcd, 0x36, 0x9e, 0x30, 0xc3, 0x1e, 0x69, 0x3c,
    0xc0,

    /* U+0059 "Y" */
    0x87, 0x34, 0x9e, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+005A "Z" */
    0xfc, 0x18, 0x20, 0xc1, 0x86, 0xc, 0x30, 0x60,
    0xc3, 0xf8,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb7,

    /* U+005C "\\" */
    0xc1, 0x6, 0x18, 0x20, 0xc1, 0x6, 0x8, 0x30,
    0xc0,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0x10, 0xc3, 0x9e, 0x4f, 0x30,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xc9, 0x80,

    /* U+0061 "a" */
    0x7f, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf,

    /* U+0062 "b" */
    0xc3, 0xc, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0x80,

    /* U+0063 "c" */
    0x7b, 0x3c, 0xf0, 0xc3, 0x3c, 0xde,

    /* U+0064 "d" */
    0xc, 0x30, 0xdf, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0xc0,

    /* U+0065 "e" */
    0x7b, 0x3c, 0xff, 0xc3, 0xe, 0x1e,

    /* U+0066 "f" */
    0x3b, 0x19, 0xe6, 0x31, 0x8c, 0x63, 0x18,

    /* U+0067 "g" */
    0x7f, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf, 0xc, 0x37,
    0x80,

    /* U+0068 "h" */
    0xc3, 0xc, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0069 "i" */
    0xc3, 0xff, 0xfc,

    /* U+006A "j" */
    0x30, 0x3, 0x33, 0x33, 0x33, 0x33, 0x7c,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x6d, 0x9a, 0x3c, 0x78, 0xd9,
    0x9b, 0x10,

    /* U+006C "l" */
    0xe3, 0x18, 0xc6, 0x31, 0x8c, 0x63, 0x3e,

    /* U+006D "m" */
    0xff, 0xb3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33,

    /* U+006E "n" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3,

    /* U+006F "o" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xde,

    /* U+0070 "p" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xfe, 0xc3, 0xc,
    0x0,

    /* U+0071 "q" */
    0x7f, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf, 0xc, 0x30,
    0xc0,

    /* U+0072 "r" */
    0xfc, 0xcc, 0xcc, 0xcc,

    /* U+0073 "s" */
    0x7f, 0xc, 0x3f, 0xc, 0x31, 0xfe,

    /* U+0074 "t" */
    0x63, 0x19, 0xe6, 0x31, 0x8c, 0x63, 0xe,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf,

    /* U+0076 "v" */
    0xc7, 0x34, 0xda, 0x78, 0xe3, 0xc,

    /* U+0077 "w" */
    0xcc, 0xf3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcd, 0xfe,

    /* U+0078 "x" */
    0xcd, 0xa7, 0x8c, 0x31, 0xe6, 0xb3,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf, 0xc, 0x37,
    0x80,

    /* U+007A "z" */
    0xfc, 0x38, 0x61, 0xc3, 0xe, 0x18, 0x7f,

    /* U+007B "{" */
    0x1c, 0xc2, 0x8, 0x21, 0x8e, 0x30, 0xc3, 0x86,
    0x8, 0x20, 0x83, 0x7,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xe0, 0xe1, 0x86, 0x18, 0x60, 0xc1, 0x4, 0x31,
    0x86, 0x18, 0x63, 0xb8,

    /* U+007E "~" */
    0x7, 0x83, 0x30, 0xcf, 0x30, 0xcc, 0x1e, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 75, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 63, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 100, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 125, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 26, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 50, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 46, .adv_w = 88, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 54, .adv_w = 88, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 64, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 68, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 73, .adv_w = 83, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 75, .adv_w = 125, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 76, .adv_w = 63, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 69, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 63, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 174, .adv_w = 83, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 178, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 184, .adv_w = 125, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 187, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 193, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 225, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 225, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 50, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 200, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 75, .box_w = 3, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 471, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 75, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 488, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 493, .adv_w = 125, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 496, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 100, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 548, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 50, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 75, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 567, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 100, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 200, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 615, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 624, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 100, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 200, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 663, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 678, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 113, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 697, .adv_w = 50, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 701, .adv_w = 113, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 713, .adv_w = 200, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
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
    .kern_dsc = NULL,
    .kern_scale = 0,
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
const lv_font_t arial_7_16 = {
#else
lv_font_t arial_7_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ARIAL_7_16*/
