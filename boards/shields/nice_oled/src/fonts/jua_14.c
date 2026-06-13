/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --stride 1 --align 1 --font Jua.ttf --range 32-126 --format lvgl -o jua_14.c
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



#ifndef JUA_14
#define JUA_14 1
#endif

#if JUA_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0021 "!" */
    0xff, 0xff, 0x3c,

    /* U+0022 "\"" */
    0xf, 0xff,

    /* U+0023 "#" */
    0x19, 0xd, 0x84, 0xcf, 0xf3, 0x21, 0xb0, 0xd9,
    0xff, 0x66, 0x32, 0x19, 0x0,

    /* U+0024 "$" */
    0x18, 0x38, 0x7e, 0xda, 0xf8, 0x7c, 0x1e, 0x1a,
    0xde, 0xfe, 0x38, 0x18,

    /* U+0025 "%" */
    0x1, 0x39, 0xa5, 0x9a, 0xcf, 0xc3, 0x60, 0x6e,
    0x3d, 0x34, 0x92, 0x40, 0xe0,

    /* U+0026 "&" */
    0x10, 0x3e, 0x1b, 0x8, 0x86, 0x43, 0xe3, 0xf3,
    0x8e, 0xc7, 0x63, 0x9f, 0xc6, 0x20,

    /* U+0027 "'" */
    0x3f,

    /* U+0028 "(" */
    0x2d, 0xad, 0xb6, 0xdb, 0x32,

    /* U+0029 ")" */
    0x9b, 0x26, 0xdb, 0x6d, 0x68,

    /* U+002A "*" */
    0x79, 0xef, 0xcc, 0x79, 0x20,

    /* U+002B "+" */
    0x30, 0xcf, 0xff, 0x30, 0xc2, 0x0,

    /* U+002C "," */
    0x6a, 0x0,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x0, 0xc6, 0x63, 0x31, 0x8c, 0xc6, 0x20,

    /* U+0030 "0" */
    0x3c, 0x7e, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0x46,
    0x7e, 0x3c,

    /* U+0031 "1" */
    0x7f, 0x33, 0x33, 0x33, 0x33,

    /* U+0032 "2" */
    0x39, 0xfb, 0x1c, 0x30, 0x61, 0x86, 0x38, 0xff,
    0xfc,

    /* U+0033 "3" */
    0x7c, 0xfc, 0x30, 0xc3, 0x83, 0xc1, 0xa3, 0x7e,
    0xf0,

    /* U+0034 "4" */
    0x8, 0x38, 0xf1, 0x66, 0xd9, 0xbf, 0xff, 0xc,
    0x18,

    /* U+0035 "5" */
    0x7d, 0xfb, 0x7, 0xc7, 0xc0, 0xc1, 0xc3, 0xfc,
    0xf0,

    /* U+0036 "6" */
    0x3c, 0x7e, 0xc0, 0xfc, 0xfe, 0xc6, 0xc7, 0xc6,
    0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xfc, 0x30, 0x61, 0x83, 0xc, 0x18, 0x60,
    0xc0,

    /* U+0038 "8" */
    0x3c, 0x66, 0x63, 0x67, 0x3e, 0x7e, 0x63, 0x43,
    0x7e, 0x3c,

    /* U+0039 "9" */
    0x38, 0xfb, 0x1e, 0x3c, 0x6f, 0xc1, 0x83, 0xfc,
    0xf0,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0x6c, 0x0, 0x1e, 0x80,

    /* U+003C "<" */
    0xc, 0x73, 0x9c, 0xe3, 0xc, 0x18, 0x30, 0xe1,
    0x80,

    /* U+003D "=" */
    0xfb, 0xe0, 0x0, 0xfb, 0xe0,

    /* U+003E ">" */
    0xc3, 0x87, 0xe, 0x1c, 0x30, 0xc6, 0x31, 0xc6,
    0x0,

    /* U+003F "?" */
    0x7b, 0xfc, 0xf3, 0xc, 0x61, 0xc, 0x30, 0x3,
    0xc,

    /* U+0040 "@" */
    0x1f, 0xf, 0xf1, 0x83, 0x67, 0xad, 0xf7, 0xa6,
    0xf4, 0xd6, 0xfe, 0x61, 0x87, 0x80, 0x78, 0x0,

    /* U+0041 "A" */
    0x18, 0x18, 0x3c, 0x3c, 0x6c, 0x66, 0x7e, 0xff,
    0xc3, 0x83,

    /* U+0042 "B" */
    0xf9, 0xfb, 0x16, 0x2f, 0xdb, 0xb1, 0xe3, 0xff,
    0xf8,

    /* U+0043 "C" */
    0x8, 0x3e, 0x7e, 0xe2, 0xc0, 0xc0, 0xc0, 0xc0,
    0xe2, 0x7e, 0x3c,

    /* U+0044 "D" */
    0xf9, 0xfb, 0x3e, 0x3c, 0x78, 0xf1, 0xe7, 0xfd,
    0xf0,

    /* U+0045 "E" */
    0xfd, 0xfb, 0x6, 0xf, 0xdf, 0xb0, 0x60, 0xfd,
    0xf8,

    /* U+0046 "F" */
    0xff, 0xfb, 0x6, 0xf, 0xdf, 0xb0, 0x60, 0xc1,
    0x80,

    /* U+0047 "G" */
    0x1c, 0x7e, 0x66, 0xc2, 0xc0, 0xce, 0xce, 0xc3,
    0x66, 0x7e, 0x3c,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xff, 0xf1, 0xe3, 0xc7,
    0x8c,

    /* U+0049 "I" */
    0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x7f, 0x7f, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc,
    0xdc, 0xf8, 0x20,

    /* U+004B "K" */
    0x1, 0x9f, 0x77, 0xcf, 0x1c, 0x3c, 0x7c, 0xdd,
    0x9f, 0x18,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xff, 0xf0,

    /* U+004D "M" */
    0xc1, 0xf1, 0xf8, 0xfe, 0xfd, 0xde, 0xef, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+004E "N" */
    0x0, 0xc3, 0xe3, 0xf3, 0xf3, 0xdb, 0xdf, 0xcf,
    0xcf, 0xc7, 0xc3,

    /* U+004F "O" */
    0x3c, 0x7e, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc6,
    0x7e, 0x3c,

    /* U+0050 "P" */
    0xfd, 0xff, 0x1e, 0x3f, 0xff, 0x30, 0x60, 0xc1,
    0x80,

    /* U+0051 "Q" */
    0x0, 0x7c, 0x6e, 0xc6, 0xc2, 0xc2, 0xc2, 0xce,
    0xee, 0x7f, 0x3f,

    /* U+0052 "R" */
    0xfd, 0xff, 0x1e, 0x3f, 0xff, 0xb3, 0x66, 0xc7,
    0x84,

    /* U+0053 "S" */
    0x79, 0xfa, 0x16, 0xf, 0xc7, 0xc1, 0xc3, 0xfe,
    0xf8,

    /* U+0054 "T" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7,
    0x7e, 0x3c,

    /* U+0056 "V" */
    0xc3, 0xc3, 0xc6, 0xe6, 0x66, 0x6e, 0x7c, 0x3c,
    0x38, 0x18,

    /* U+0057 "W" */
    0x80, 0xe0, 0x3c, 0x1b, 0x26, 0xdd, 0x97, 0x67,
    0x51, 0xdc, 0x77, 0x8, 0xc2, 0x0,

    /* U+0058 "X" */
    0x87, 0x8d, 0xb3, 0xe3, 0x87, 0x1e, 0x36, 0xcf,
    0x8c,

    /* U+0059 "Y" */
    0xc3, 0xe6, 0x6e, 0x3c, 0x38, 0x18, 0x18, 0x18,
    0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xfc, 0x30, 0xc3, 0x86, 0x18, 0x70, 0xfd,
    0xfc,

    /* U+005B "[" */
    0x2f, 0xcc, 0xcc, 0xcc, 0xcc, 0xce, 0x70,

    /* U+005C "\\" */
    0x86, 0x31, 0x86, 0x30, 0xc6, 0x18, 0xc6,

    /* U+005D "]" */
    0x4e, 0x33, 0x33, 0x33, 0x33, 0x37, 0xe0,

    /* U+005E "^" */
    0x10, 0xe6, 0xb3,

    /* U+005F "_" */
    0x7b, 0xf0,

    /* U+0061 "a" */
    0x79, 0x9b, 0x36, 0x6f, 0xef, 0x40,

    /* U+0062 "b" */
    0xc3, 0xc, 0x30, 0xf3, 0xec, 0xb3, 0xfb, 0xc0,

    /* U+0063 "c" */
    0x3, 0xf3, 0x8c, 0x7d, 0xe0,

    /* U+0064 "d" */
    0xc, 0x30, 0xc3, 0x7f, 0xfc, 0xf3, 0xfd, 0xf0,

    /* U+0065 "e" */
    0x38, 0xf9, 0x13, 0xe4, 0xf, 0x8f, 0x0,

    /* U+0066 "f" */
    0x76, 0x6f, 0x66, 0x66, 0x60,

    /* U+0067 "g" */
    0x11, 0xec, 0xe3, 0xcd, 0xf0, 0xe2, 0xf9, 0xc0,

    /* U+0068 "h" */
    0xc3, 0xc, 0x3c, 0xfb, 0x3c, 0xf3, 0xcf, 0x20,

    /* U+0069 "i" */
    0xa3, 0xff, 0xf0,

    /* U+006A "j" */
    0x10, 0x80, 0x21, 0x8c, 0x63, 0x18, 0xfc, 0xe0,

    /* U+006B "k" */
    0xc6, 0x31, 0x8d, 0xfb, 0x9c, 0xf6, 0xc0,

    /* U+006C "l" */
    0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0x94, 0xfe, 0xdb, 0xcb, 0xcb, 0xcb, 0xca,

    /* U+006E "n" */
    0xfb, 0xec, 0xf3, 0xcf, 0x38, 0x80,

    /* U+006F "o" */
    0x38, 0xfb, 0x1e, 0x3c, 0x6f, 0x8e, 0x0,

    /* U+0070 "p" */
    0xf3, 0xec, 0xf3, 0xff, 0xec, 0x30, 0xc3, 0x0,

    /* U+0071 "q" */
    0x3d, 0xfc, 0xf3, 0xed, 0xf0, 0xc3, 0xc, 0x30,

    /* U+0072 "r" */
    0xfb, 0xfc, 0x30, 0xc3, 0xc, 0x0,

    /* U+0073 "s" */
    0xf7, 0xb0, 0xe1, 0xff, 0xc0,

    /* U+0074 "t" */
    0x0, 0xc3, 0x3f, 0xfc, 0xc3, 0xc, 0x30, 0xc0,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0xf7, 0x80,

    /* U+0076 "v" */
    0x8f, 0x3d, 0xbe, 0x71, 0xc2, 0x0,

    /* U+0077 "w" */
    0x83, 0x9b, 0xfa, 0xfe, 0x6e, 0x6c, 0x64,

    /* U+0078 "x" */
    0x8b, 0x67, 0x1c, 0x73, 0x68, 0xc0,

    /* U+0079 "y" */
    0x8f, 0x3d, 0xde, 0x78, 0xc3, 0x18, 0x61, 0x0,

    /* U+007A "z" */
    0xff, 0xcc, 0xe6, 0x7f, 0xe0,

    /* U+007B "{" */
    0x13, 0xd8, 0xc6, 0x23, 0x18, 0x63, 0x18, 0xe3,
    0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0x47, 0xc, 0x63, 0x18, 0x66, 0x31, 0x8c, 0xee,
    0x0,

    /* U+007E "~" */
    0x63, 0xfc, 0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 66, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 99, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 5, .adv_w = 188, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 140, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 30, .adv_w = 173, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 172, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 57, .adv_w = 79, .box_w = 2, .box_h = 4, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 58, .adv_w = 76, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 63, .adv_w = 78, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 68, .adv_w = 127, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 73, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 79, .adv_w = 64, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 81, .adv_w = 106, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 83, .adv_w = 45, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 84, .adv_w = 107, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 92, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 138, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 132, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 52, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 182, .adv_w = 57, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 123, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 115, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 200, .adv_w = 121, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 126, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 218, .adv_w = 198, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 157, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 63, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 314, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 325, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 122, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 155, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 142, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 144, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 142, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 179, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 458, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 139, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 106, .box_w = 4, .box_h = 13, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 493, .adv_w = 107, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 106, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 507, .adv_w = 105, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 510, .adv_w = 119, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 512, .adv_w = 129, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 103, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 106, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 91, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 559, .adv_w = 106, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 48, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 93, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 578, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 48, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 140, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 616, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 624, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 102, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 115, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 118, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 150, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 115, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 123, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 676, .adv_w = 109, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 106, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 690, .adv_w = 82, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 110, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 702, .adv_w = 142, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
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
    -7, -11, -11, -29, -22, -18, -22, -4,
    -4, -4, -10, -22, -19, -12, -12, -9,
    4, -9, -7, -4, -4, -9, -7, -11,
    -7, -7, -11, -7, -13, -9, -16, -7,
    -4, -4, -4, -7, -22, -13, -4, -12,
    -10, -10, 4, -8, 4, 4, 4, 4,
    5, -9, -7, -22, -9, -11, -9, -19,
    -14, -14, -14, -11, -4, -7, -12, -7,
    -14, -17, -17, -17, -11, -16, -4, -16,
    -16, -34, -13, -31, -22, -36, -12, -12,
    -12, -2, -19, -19, 7, 4, 7, 4,
    4, 4, 4, 7, 4, 7, 4, 4,
    4, 4, 5, 5, -7, 7, 4, 4,
    4, -11, -9, -5, -22, -13, -9, -7,
    -11, -9, -17, -17, -41, -17, -7, -13,
    -16, -15, -4, -9, -7, -10, 4, 7,
    4, -9, -9, -12, -29, -16, -11, -9,
    -13, -13, -7, -26, -22, -17, -29, -12,
    -22, -17, -24, 4, 5, 5, -20, -9,
    -12, -14, -14, -7, -14, -14, -10, -10,
    -18, -12, -10, -7, -12, -10, -10, -7,
    -7, 7, 7, -5, -7, -5, -5, -22,
    -7, -7, -7, -7, -22, -19, -26, -26,
    -12, -12, -22, -17, -14, -14, -7, -12,
    -10, -12, -10, -15, -11, -26, -13, -13,
    -9, -9, -13, -11, -9, -7, -4, -7,
    -5, -7, -5, -7, -4, -4, 4, 4,
    -2, -4, -9, 5, -9, -7, -9, -9,
    -9, -7, -10, -7, -10, -22, -9, -10,
    -10, -5, -10, -11, -9, -9, -4, 2,
    2, 5, 6, -7, -4, -9, 2, 5,
    10, 5, -9, -4, -4, -9, -4, -4,
    -7, 2, -17, 2, -12, -7, -5, -7,
    -5, -17, -10, -5, -7, -7, -9, -7,
    -13, -13, -16, -13, -36, -10, -12, -10,
    -7, -9, -10, -12, -10, -10, -11, -13,
    -9, -12, -20, -9, -12, -10, -9, -7,
    -7, 5, 5, 5, -5, -7, -4, -6,
    -7, -10, -20, -4, -5, -5, -7, -4,
    -4, -4, -7, -22, -4, -7, -7, -7,
    -7, -7, -6, -7, -6, -7, -10, -4,
    -9, -9, -5, -5, -4, -5, -5, -7,
    -7, -2, -10, -2
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
const lv_font_t jua_14 = {
#else
lv_font_t jua_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
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



#endif /*#if JUA_14*/
