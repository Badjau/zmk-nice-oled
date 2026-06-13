/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font Jua.ttf --range 32-126 --format lvgl -o jua_12.c
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
    /* U+0021 "!" */
    0xff, 0xfc, 0xb0,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x36, 0x36, 0xff, 0x24, 0x6c, 0xfe, 0x6c, 0x48,
    0x48,

    /* U+0024 "$" */
    0x10, 0x47, 0xf5, 0xf0, 0xf1, 0x65, 0xfc, 0xc1,
    0x0,

    /* U+0025 "%" */
    0xe6, 0xb4, 0xbc, 0xe8, 0x18, 0x17, 0x35, 0x25,
    0x7,

    /* U+0026 "&" */
    0x30, 0xf1, 0x22, 0x47, 0x9f, 0x73, 0xe6, 0xfe,
    0x64,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x69, 0x6d, 0xb6, 0xc9, 0x80,

    /* U+0029 ")" */
    0x99, 0x26, 0xdb, 0x5a, 0x0,

    /* U+002A "*" */
    0x53, 0xbe, 0xe5, 0x0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x10,

    /* U+002C "," */
    0x6a, 0x0,

    /* U+002D "-" */
    0x7b, 0xc0,

    /* U+002E "." */
    0x20,

    /* U+002F "/" */
    0x8, 0xc6, 0x63, 0x11, 0x88, 0x40,

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

    /* U+003B ";" */
    0x8, 0x0, 0xb4,

    /* U+003C "<" */
    0x19, 0xdc, 0xcc, 0x61, 0x8e, 0x38, 0x80,

    /* U+003D "=" */
    0xfc, 0x1, 0xef, 0x80,

    /* U+003E ">" */
    0xc7, 0x1c, 0x61, 0x8c, 0xce, 0xe2, 0x0,

    /* U+003F "?" */
    0x73, 0xec, 0xb2, 0x18, 0xc3, 0x0, 0x20, 0xc0,

    /* U+0040 "@" */
    0x0, 0x1f, 0x98, 0x59, 0xbd, 0xef, 0x37, 0x9b,
    0xbe, 0x70, 0x1e, 0x0,

    /* U+0041 "A" */
    0x18, 0x18, 0x1c, 0x3c, 0x26, 0x7e, 0x7e, 0x43,
    0x41,

    /* U+0042 "B" */
    0xfb, 0xec, 0xb6, 0xfb, 0x3c, 0xf7, 0xf8,

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
    0x7e, 0xfc, 0x30, 0xc1, 0x86, 0x18, 0x30, 0xfe,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x9c,

    /* U+005C "\\" */
    0x42, 0x18, 0x43, 0x18, 0x63, 0x8,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x3c,

    /* U+005E "^" */
    0x33, 0xb2,

    /* U+005F "_" */
    0xf8,

    /* U+0061 "a" */
    0x1, 0xc9, 0xa6, 0xd9, 0xf0,

    /* U+0062 "b" */
    0x88, 0x88, 0xfb, 0x9b, 0xe0,

    /* U+0063 "c" */
    0x77, 0xf1, 0x8f, 0xb8,

    /* U+0064 "d" */
    0x11, 0x11, 0xf9, 0x9f, 0x70,

    /* U+0065 "e" */
    0x39, 0x2f, 0xf0, 0x69, 0xe0,

    /* U+0066 "f" */
    0x6d, 0x74, 0x92,

    /* U+0067 "g" */
    0x7e, 0xf3, 0x97, 0x87, 0x6e,

    /* U+0068 "h" */
    0x88, 0x88, 0xf9, 0x99, 0x90,

    /* U+0069 "i" */
    0x9f, 0x80,

    /* U+006A "j" */
    0x10, 0x0, 0x21, 0x8, 0x42, 0x17, 0x98,

    /* U+006B "k" */
    0x88, 0x89, 0xbe, 0xea, 0x90,

    /* U+006C "l" */
    0xbf, 0xff, 0x80,

    /* U+006D "m" */
    0xab, 0xfd, 0x75, 0xd6, 0x50,

    /* U+006E "n" */
    0xef, 0x99, 0x99,

    /* U+006F "o" */
    0x73, 0xec, 0xe3, 0xf9, 0xe0,

    /* U+0070 "p" */
    0xf7, 0xf7, 0xbf, 0x63, 0x18, 0x80,

    /* U+0071 "q" */
    0x39, 0xf4, 0xd3, 0x7c, 0x70, 0xc3, 0x8,

    /* U+0072 "r" */
    0xff, 0xf1, 0x8c, 0x40,

    /* U+0073 "s" */
    0x72, 0xd8, 0x35, 0xb8,

    /* U+0074 "t" */
    0x30, 0xcf, 0xde, 0x30, 0xc3, 0xc,

    /* U+0075 "u" */
    0x8c, 0xf7, 0xbf, 0xb8,

    /* U+0076 "v" */
    0x4d, 0x37, 0x8e, 0x30, 0xc0,

    /* U+0077 "w" */
    0x43, 0x5a, 0x5a, 0x7e, 0x34, 0x24,

    /* U+0078 "x" */
    0xcd, 0xe3, 0xc, 0x79, 0x30,

    /* U+0079 "y" */
    0x45, 0x36, 0x8e, 0x38, 0xc3, 0x8, 0x60,

    /* U+007A "z" */
    0x7b, 0xcc, 0x67, 0xbc,

    /* U+007B "{" */
    0x74, 0x44, 0x8c, 0x44, 0x47,

    /* U+007C "|" */
    0xbf, 0xff, 0xf0,

    /* U+007D "}" */
    0xe2, 0x22, 0x33, 0x22, 0x2e,

    /* U+007E "~" */
    0xe6, 0xf0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 57, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 85, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 5, .adv_w = 161, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 147, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 41, .adv_w = 68, .box_w = 1, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 42, .adv_w = 65, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 47, .adv_w = 66, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 52, .adv_w = 109, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 56, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 60, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 62, .adv_w = 91, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 64, .adv_w = 38, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 65, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 79, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 45, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 144, .adv_w = 49, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 154, .adv_w = 99, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 158, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 165, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 173, .adv_w = 169, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 54, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 109, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 123, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 153, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 91, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 387, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 91, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 397, .adv_w = 90, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 399, .adv_w = 102, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 400, .adv_w = 110, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 91, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 89, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 91, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 78, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 432, .adv_w = 90, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 41, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 80, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 446, .adv_w = 81, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 41, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 94, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 473, .adv_w = 95, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 480, .adv_w = 94, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 95, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 101, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 129, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 521, .adv_w = 94, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 91, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 530, .adv_w = 70, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 94, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 538, .adv_w = 121, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 33, .range_length = 63, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 30, .glyph_id_start = 64,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    33, 39,
    33, 47,
    33, 49,
    33, 52,
    33, 54,
    33, 55,
    33, 57,
    33, 64,
    33, 67,
    33, 68,
    33, 80,
    33, 83,
    33, 85,
    33, 86,
    33, 88,
    34, 31,
    34, 40,
    34, 52,
    34, 54,
    34, 55,
    34, 56,
    34, 57,
    35, 47,
    35, 52,
    35, 54,
    35, 57,
    36, 33,
    36, 42,
    36, 52,
    36, 54,
    36, 57,
    36, 58,
    37, 47,
    37, 49,
    37, 52,
    37, 88,
    38, 33,
    38, 42,
    38, 49,
    38, 64,
    38, 68,
    38, 78,
    39, 48,
    39, 52,
    40, 34,
    40, 36,
    40, 45,
    40, 53,
    40, 72,
    41, 52,
    41, 57,
    42, 33,
    42, 35,
    42, 39,
    42, 47,
    42, 64,
    42, 68,
    42, 78,
    42, 84,
    43, 47,
    43, 54,
    43, 57,
    43, 64,
    43, 68,
    43, 78,
    43, 85,
    43, 86,
    43, 88,
    44, 35,
    44, 39,
    44, 46,
    44, 47,
    44, 49,
    44, 52,
    44, 53,
    44, 54,
    44, 55,
    44, 57,
    44, 64,
    44, 68,
    44, 78,
    44, 84,
    44, 86,
    44, 88,
    45, 34,
    45, 36,
    45, 44,
    45, 45,
    45, 48,
    45, 50,
    45, 53,
    45, 72,
    46, 37,
    46, 43,
    46, 44,
    46, 45,
    46, 48,
    46, 53,
    46, 72,
    46, 84,
    47, 33,
    47, 43,
    47, 44,
    47, 45,
    47, 48,
    47, 52,
    47, 57,
    47, 85,
    48, 33,
    48, 42,
    48, 52,
    48, 54,
    48, 56,
    48, 58,
    48, 64,
    48, 68,
    48, 73,
    48, 78,
    48, 84,
    49, 52,
    49, 57,
    50, 52,
    50, 54,
    50, 57,
    50, 64,
    50, 88,
    51, 38,
    51, 45,
    51, 48,
    51, 52,
    51, 57,
    51, 83,
    52, 33,
    52, 35,
    52, 39,
    52, 41,
    52, 47,
    52, 49,
    52, 51,
    52, 64,
    52, 68,
    52, 76,
    52, 78,
    52, 81,
    52, 82,
    52, 84,
    52, 86,
    53, 44,
    53, 46,
    53, 49,
    54, 33,
    54, 42,
    54, 64,
    54, 66,
    54, 68,
    54, 77,
    54, 78,
    54, 82,
    54, 84,
    54, 88,
    55, 33,
    55, 64,
    55, 68,
    55, 77,
    55, 78,
    55, 83,
    55, 84,
    55, 87,
    55, 88,
    56, 34,
    56, 38,
    56, 64,
    56, 68,
    56, 78,
    56, 88,
    57, 33,
    57, 35,
    57, 39,
    57, 42,
    57, 51,
    57, 64,
    57, 67,
    57, 68,
    57, 78,
    57, 79,
    57, 81,
    57, 82,
    57, 84,
    57, 85,
    57, 89,
    58, 47,
    58, 64,
    58, 68,
    58, 78,
    58, 84,
    58, 88,
    64, 69,
    64, 83,
    64, 85,
    64, 86,
    64, 88,
    65, 69,
    65, 73,
    65, 83,
    65, 85,
    65, 86,
    65, 87,
    65, 88,
    65, 89,
    66, 69,
    66, 73,
    66, 83,
    66, 87,
    66, 88,
    67, 65,
    67, 71,
    68, 64,
    68, 70,
    68, 73,
    68, 75,
    68, 83,
    68, 87,
    68, 88,
    69, 64,
    69, 66,
    69, 67,
    69, 68,
    69, 69,
    69, 70,
    69, 73,
    69, 78,
    69, 80,
    69, 87,
    69, 89,
    71, 73,
    71, 83,
    71, 85,
    71, 86,
    71, 88,
    72, 75,
    72, 77,
    73, 65,
    73, 71,
    74, 66,
    74, 78,
    74, 80,
    75, 65,
    75, 74,
    75, 75,
    75, 79,
    76, 83,
    76, 85,
    76, 88,
    77, 83,
    77, 85,
    77, 88,
    78, 69,
    78, 72,
    78, 73,
    78, 75,
    78, 83,
    78, 85,
    78, 88,
    78, 89,
    79, 69,
    79, 73,
    79, 83,
    79, 85,
    79, 86,
    79, 87,
    79, 88,
    79, 89,
    81, 64,
    81, 66,
    81, 67,
    81, 68,
    81, 73,
    81, 78,
    81, 80,
    81, 82,
    81, 83,
    81, 87,
    81, 88,
    82, 73,
    82, 83,
    83, 64,
    83, 66,
    83, 67,
    83, 68,
    83, 70,
    83, 73,
    83, 76,
    83, 78,
    83, 80,
    83, 82,
    83, 87,
    83, 88,
    84, 75,
    84, 76,
    84, 77,
    84, 83,
    85, 64,
    85, 66,
    85, 67,
    85, 68,
    85, 70,
    85, 73,
    85, 76,
    85, 78,
    85, 80,
    85, 87,
    86, 64,
    86, 66,
    86, 67,
    86, 68,
    86, 73,
    87, 66,
    87, 69,
    87, 70,
    87, 78,
    87, 80,
    87, 83,
    87, 85,
    87, 86,
    87, 87,
    87, 88,
    88, 64,
    88, 66,
    88, 67,
    88, 68,
    88, 78,
    88, 80,
    88, 82,
    88, 83,
    88, 86,
    88, 87,
    89, 66,
    89, 69,
    89, 73,
    89, 80
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -6, -10, -10, -25, -19, -15, -19, -4,
    -4, -4, -8, -18, -17, -10, -10, -8,
    4, -8, -6, -4, -4, -8, -6, -10,
    -6, -6, -10, -6, -12, -8, -13, -6,
    -4, -4, -4, -6, -19, -12, -4, -10,
    -8, -8, 4, -7, 4, 4, 4, 4,
    4, -8, -6, -19, -8, -10, -8, -16,
    -12, -12, -12, -10, -4, -6, -10, -6,
    -12, -14, -14, -14, -10, -13, -4, -13,
    -13, -29, -12, -27, -19, -31, -10, -10,
    -10, -2, -16, -17, 6, 4, 6, 4,
    4, 4, 4, 6, 4, 6, 4, 4,
    4, 4, 4, 4, -6, 6, 4, 4,
    4, -10, -8, -4, -19, -12, -8, -6,
    -10, -8, -14, -14, -35, -14, -6, -12,
    -13, -12, -4, -8, -6, -8, 4, 6,
    4, -8, -8, -10, -25, -13, -10, -8,
    -12, -12, -6, -23, -18, -14, -25, -10,
    -19, -14, -21, 4, 4, 4, -17, -8,
    -10, -12, -12, -6, -12, -12, -8, -8,
    -15, -10, -8, -6, -10, -8, -8, -6,
    -6, 6, 6, -4, -6, -4, -4, -19,
    -6, -6, -6, -6, -18, -17, -23, -22,
    -10, -10, -18, -14, -12, -12, -6, -10,
    -8, -10, -8, -12, -10, -23, -12, -12,
    -8, -8, -12, -10, -8, -6, -4, -6,
    -4, -6, -4, -6, -4, -4, 4, 4,
    -2, -4, -8, 4, -8, -6, -8, -8,
    -8, -6, -8, -6, -9, -19, -8, -8,
    -8, -4, -8, -10, -8, -8, -4, 2,
    2, 4, 5, -6, -4, -8, 2, 4,
    8, 4, -8, -4, -4, -8, -4, -4,
    -6, 2, -14, 2, -10, -6, -4, -6,
    -4, -14, -8, -4, -6, -6, -8, -6,
    -12, -12, -13, -12, -31, -8, -10, -8,
    -6, -8, -8, -10, -8, -8, -10, -12,
    -8, -10, -17, -8, -10, -8, -8, -6,
    -6, 4, 4, 4, -4, -6, -4, -5,
    -6, -8, -17, -4, -4, -4, -6, -4,
    -4, -4, -6, -19, -4, -6, -6, -6,
    -6, -6, -5, -6, -5, -6, -8, -4,
    -8, -8, -4, -4, -4, -4, -4, -6,
    -6, -2, -8, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 340,
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
    .cmap_num = 2,
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
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if JUA_12*/
