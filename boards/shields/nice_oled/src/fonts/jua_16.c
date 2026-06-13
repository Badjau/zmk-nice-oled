/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --stride 1 --align 1 --font Jua.ttf --range 32-126 --format lvgl -o jua_16.c
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



#ifndef JUA_16
#define JUA_16 1
#endif

#if JUA_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0021 "!" */
    0xff, 0xff, 0xd3, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x8, 0x83, 0x30, 0x66, 0x3f, 0xe7, 0xfc, 0x66,
    0xc, 0xc7, 0xfc, 0xff, 0xce, 0xe1, 0x98, 0x33,
    0x0,

    /* U+0024 "$" */
    0xc, 0x1f, 0x1f, 0xed, 0xb6, 0xc3, 0xe0, 0x7c,
    0x1f, 0xd, 0xf6, 0xdf, 0xc3, 0xc0, 0xc0,

    /* U+0025 "%" */
    0x71, 0x9b, 0x33, 0x6c, 0x6d, 0x8f, 0xe0, 0xc,
    0x3, 0x0, 0x4e, 0x1b, 0x66, 0x6c, 0xcd, 0x80,
    0xe0,

    /* U+0026 "&" */
    0x3c, 0x1f, 0x86, 0x61, 0x98, 0x66, 0x1f, 0x87,
    0xe3, 0x1a, 0xc3, 0xb0, 0xce, 0x71, 0xf6, 0x10,
    0x0,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x36, 0x66, 0xcc, 0xcc, 0xcc, 0xc6, 0x62,

    /* U+0029 ")" */
    0x46, 0x63, 0x33, 0x33, 0x33, 0x37, 0x64,

    /* U+002A "*" */
    0x44, 0xd8, 0xe7, 0xf3, 0x8d, 0x9b, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0x7e, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x2d, 0x40,

    /* U+002D "-" */
    0xff, 0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0xc, 0x31, 0xc6, 0x38, 0xc7, 0x18, 0x63, 0xc,
    0x20,

    /* U+0030 "0" */
    0x3c, 0x7e, 0x66, 0xe3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xe3, 0x66, 0x7e, 0x3c,

    /* U+0031 "1" */
    0x3b, 0xde, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x30,

    /* U+0032 "2" */
    0x3c, 0x7e, 0xe7, 0xc3, 0x3, 0x7, 0x6, 0x1c,
    0x38, 0x70, 0xff, 0xff,

    /* U+0033 "3" */
    0xfe, 0xfe, 0xc, 0x1c, 0x38, 0x3c, 0x3e, 0x6,
    0x6, 0xc6, 0xfe, 0x7c,

    /* U+0034 "4" */
    0x6, 0x7, 0x7, 0x83, 0xc3, 0x63, 0xb1, 0x99,
    0xfe, 0xff, 0x83, 0x1, 0x80, 0xc0,

    /* U+0035 "5" */
    0x7f, 0x7f, 0x60, 0x60, 0x7c, 0x7e, 0x3, 0x3,
    0x3, 0xc7, 0xfe, 0x7c,

    /* U+0036 "6" */
    0x1e, 0x3f, 0x98, 0x58, 0xd, 0xe7, 0xfb, 0x8d,
    0x87, 0xc3, 0xb3, 0x9f, 0xc7, 0xc0,

    /* U+0037 "7" */
    0xff, 0xff, 0x7, 0x6, 0xe, 0xc, 0x1c, 0x18,
    0x38, 0x30, 0x60, 0x60,

    /* U+0038 "8" */
    0x3c, 0x7e, 0xe3, 0xc3, 0x63, 0x7e, 0x7e, 0xe7,
    0xc3, 0xc3, 0x7e, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xe7, 0x7f, 0x1b,
    0x3, 0x46, 0x7e, 0x7c,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0x6c, 0x0, 0x3, 0xd0,

    /* U+003C "<" */
    0xc, 0x38, 0xf1, 0xc7, 0x1c, 0x38, 0x70, 0x70,
    0x60, 0xe0, 0xe0, 0xc0,

    /* U+003D "=" */
    0xff, 0xf0, 0x0, 0xff, 0xf0,

    /* U+003E ">" */
    0xc1, 0xc1, 0xc1, 0xc1, 0xc3, 0x83, 0x86, 0x1c,
    0x71, 0xc7, 0xc, 0x0,

    /* U+003F "?" */
    0x18, 0x7e, 0x7e, 0x46, 0x62, 0x6, 0xe, 0xc,
    0x18, 0x18, 0x0, 0x0, 0x18, 0x18,

    /* U+0040 "@" */
    0xf, 0x83, 0xfc, 0x70, 0xe6, 0x13, 0xef, 0xbc,
    0xfb, 0xd9, 0xbd, 0x9b, 0xc9, 0xb6, 0xee, 0x70,
    0x3, 0xf0, 0x1f, 0x0,

    /* U+0041 "A" */
    0xc, 0x7, 0x1, 0xc0, 0xf8, 0x36, 0xd, 0xc6,
    0x31, 0xfc, 0xff, 0xb0, 0x6c, 0x1e, 0x2,

    /* U+0042 "B" */
    0xfc, 0xfe, 0xc6, 0xc7, 0xce, 0xfc, 0xfe, 0xc7,
    0xc3, 0xc7, 0xff, 0xfc,

    /* U+0043 "C" */
    0x1e, 0x1f, 0x9c, 0xdc, 0x2e, 0x6, 0x3, 0x1,
    0x80, 0xe0, 0x39, 0xdf, 0xc3, 0xc0,

    /* U+0044 "D" */
    0xfc, 0xfe, 0xcf, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc7, 0xcf, 0xfe, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xff, 0xe0, 0xc1,
    0x83, 0xff, 0xf0,

    /* U+0046 "F" */
    0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0x1c, 0x3f, 0x9d, 0xdc, 0x6c, 0x16, 0x3, 0x1d,
    0x8f, 0xc3, 0x71, 0x9f, 0xc7, 0xc0,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x3f, 0x8f, 0xe0, 0x60, 0x18, 0x6, 0x1, 0x80,
    0x60, 0x18, 0x6, 0x33, 0x8f, 0xe1, 0xf0,

    /* U+004B "K" */
    0xc2, 0xc6, 0xcc, 0xdc, 0xf8, 0xf0, 0xf0, 0xf8,
    0xdc, 0xce, 0xc7, 0xc2,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xff, 0xf0,

    /* U+004D "M" */
    0xc0, 0xf8, 0x7f, 0x1f, 0xcf, 0xff, 0xf7, 0xbc,
    0xcf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+004E "N" */
    0xc1, 0xf0, 0xfc, 0x7e, 0x3f, 0x9e, 0xef, 0x77,
    0x9f, 0xc7, 0xe3, 0xf0, 0xf8, 0x30,

    /* U+004F "O" */
    0x1e, 0x3f, 0x98, 0xdc, 0x7c, 0x1e, 0xf, 0x7,
    0x83, 0xe3, 0xbb, 0x9f, 0xc3, 0xc0,

    /* U+0050 "P" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc3, 0xff, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1c, 0x3f, 0x19, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x9e, 0xcf, 0x33, 0x9f, 0xe7, 0xb0,

    /* U+0052 "R" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc7, 0xff, 0xfc, 0xce,
    0xc6, 0xc6, 0xc3, 0xc3,

    /* U+0053 "S" */
    0x7c, 0xfe, 0xc3, 0xc0, 0xe0, 0x7e, 0x1f, 0x3,
    0xc3, 0xe7, 0xfe, 0x3c,

    /* U+0054 "T" */
    0xff, 0x7f, 0x86, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xe3, 0xbf, 0x9f, 0xc7, 0x80,

    /* U+0056 "V" */
    0xc1, 0xe0, 0xf0, 0x7c, 0x7e, 0x33, 0x19, 0xdc,
    0xec, 0x36, 0x1f, 0x7, 0x3, 0x80,

    /* U+0057 "W" */
    0x80, 0x78, 0xf, 0x1, 0xe2, 0x7c, 0xcc, 0xdd,
    0x9b, 0xb3, 0xf6, 0x7b, 0x87, 0x70, 0xce, 0x18,
    0xc0,

    /* U+0058 "X" */
    0xc3, 0xc3, 0xe7, 0x7e, 0x3c, 0x3c, 0x3c, 0x3c,
    0x7e, 0xe7, 0xc3, 0xc1,

    /* U+0059 "Y" */
    0xc3, 0xc3, 0x67, 0x7e, 0x3c, 0x1c, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xff, 0x6, 0xe, 0xc, 0x18, 0x38, 0x30,
    0x70, 0xe0, 0xff, 0xff,

    /* U+005B "[" */
    0x77, 0xb1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8f,
    0x38,

    /* U+005C "\\" */
    0xc3, 0xc, 0x18, 0x61, 0xc3, 0xe, 0x18, 0x70,
    0xc3,

    /* U+005D "]" */
    0xf3, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x37,
    0xb8,

    /* U+005E "^" */
    0x0, 0x30, 0xf3, 0x6c, 0x60,

    /* U+005F "_" */
    0xfd, 0xfc,

    /* U+0061 "a" */
    0x7c, 0xfc, 0xc6, 0xc6, 0xc6, 0xff, 0x7b,

    /* U+0062 "b" */
    0x83, 0xc, 0x30, 0xc3, 0xef, 0xf3, 0xcf, 0x3f,
    0xfe,

    /* U+0063 "c" */
    0x11, 0xfe, 0xf0, 0xc3, 0x7, 0xce,

    /* U+0064 "d" */
    0xc, 0x30, 0xc3, 0xd, 0xff, 0xf3, 0xcf, 0x3f,
    0xdf,

    /* U+0065 "e" */
    0x7b, 0xfc, 0xff, 0xff, 0xf, 0xde,

    /* U+0066 "f" */
    0x3, 0x9c, 0xcf, 0x79, 0x8c, 0x63, 0x18, 0x0,

    /* U+0067 "g" */
    0x8, 0xff, 0xfe, 0x3c, 0x7c, 0xdf, 0x9f, 0x7,
    0x99, 0xf0, 0x80,

    /* U+0068 "h" */
    0xc3, 0xc, 0x30, 0xc3, 0xef, 0xf3, 0xcf, 0x3c,
    0xf3,

    /* U+0069 "i" */
    0xf0, 0xff, 0xff,

    /* U+006A "j" */
    0xc, 0x30, 0x0, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0x79, 0xe0,

    /* U+006B "k" */
    0xc3, 0xc, 0x30, 0xcb, 0x6f, 0xbc, 0xf3, 0xed,
    0xb2,

    /* U+006C "l" */
    0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xd2, 0x7f, 0xbf, 0xf9, 0xbc, 0xde, 0x6f, 0x37,
    0x9b,

    /* U+006E "n" */
    0xfd, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+006F "o" */
    0x3c, 0x7e, 0x63, 0x63, 0x63, 0x67, 0x7e, 0x3e,

    /* U+0070 "p" */
    0xf1, 0xf3, 0xf6, 0x6c, 0xf9, 0xbf, 0x7c, 0xc1,
    0x83, 0x6, 0x0,

    /* U+0071 "q" */
    0x1e, 0xfd, 0xdb, 0x36, 0x6e, 0xdf, 0x87, 0x6,
    0xc, 0x18, 0x30,

    /* U+0072 "r" */
    0xfd, 0xfb, 0x86, 0xc, 0x18, 0x30, 0x60,

    /* U+0073 "s" */
    0x7b, 0xfc, 0x3c, 0x3e, 0x3f, 0xde,

    /* U+0074 "t" */
    0x30, 0x60, 0xc7, 0xef, 0xc6, 0xc, 0x18, 0x30,
    0x60, 0xc0,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xbe,

    /* U+0076 "v" */
    0x87, 0x9f, 0x37, 0x67, 0x8f, 0xe, 0x18,

    /* U+0077 "w" */
    0x81, 0xec, 0xf7, 0x7b, 0xe7, 0x73, 0xb9, 0xd8,
    0x44,

    /* U+0078 "x" */
    0x85, 0x9b, 0xf3, 0xc7, 0x8f, 0xb3, 0x63,

    /* U+0079 "y" */
    0x87, 0x8f, 0x3b, 0x67, 0xcf, 0xe, 0x18, 0x30,
    0xe1, 0x83, 0x0,

    /* U+007A "z" */
    0xff, 0xf1, 0x8e, 0x71, 0x8f, 0xff,

    /* U+007B "{" */
    0x39, 0xe6, 0x18, 0x61, 0xc, 0x30, 0x61, 0x86,
    0x18, 0x78, 0xe0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xf1, 0xe1, 0x86, 0x18, 0x60, 0xc3, 0x18, 0x61,
    0x86, 0x79, 0xc0,

    /* U+007E "~" */
    0x70, 0xf9, 0x8f, 0x6
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 76, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 113, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 7, .adv_w = 215, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 39, .adv_w = 198, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 196, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 73, .adv_w = 90, .box_w = 2, .box_h = 4, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 74, .adv_w = 87, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 81, .adv_w = 89, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 88, .adv_w = 146, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 95, .adv_w = 140, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 103, .adv_w = 73, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 105, .adv_w = 121, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 107, .adv_w = 51, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 108, .adv_w = 123, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 105, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 150, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 141, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 155, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 60, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 239, .adv_w = 65, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 132, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 260, .adv_w = 139, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 144, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 286, .adv_w = 226, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 179, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 143, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 156, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 156, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 72, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 177, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 150, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 153, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 156, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 173, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 204, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 161, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 158, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 156, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 121, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 646, .adv_w = 123, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 121, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 664, .adv_w = 120, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 669, .adv_w = 136, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 671, .adv_w = 147, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 122, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 130, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 104, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 727, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 55, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 106, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 750, .adv_w = 109, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 55, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 142, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 797, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 808, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 135, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 172, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 132, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 872, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 121, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 889, .adv_w = 93, .box_w = 2, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 125, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 904, .adv_w = 162, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 5}
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
    -8, -13, -13, -33, -26, -20, -26, -5,
    -5, -5, -11, -25, -22, -14, -14, -10,
    5, -10, -8, -5, -5, -10, -8, -13,
    -8, -8, -13, -8, -15, -10, -18, -8,
    -5, -5, -5, -8, -26, -15, -5, -14,
    -11, -11, 5, -9, 5, 5, 5, 5,
    5, -10, -8, -26, -10, -13, -10, -22,
    -16, -16, -16, -13, -5, -8, -14, -8,
    -16, -19, -19, -19, -13, -18, -5, -18,
    -18, -38, -15, -36, -26, -41, -14, -14,
    -14, -3, -22, -22, 8, 5, 8, 5,
    5, 5, 5, 8, 5, 8, 5, 5,
    5, 5, 6, 6, -8, 8, 5, 5,
    5, -13, -10, -5, -26, -15, -10, -8,
    -13, -10, -19, -19, -47, -19, -8, -15,
    -18, -17, -5, -10, -8, -11, 5, 8,
    5, -10, -10, -14, -33, -18, -13, -10,
    -15, -15, -8, -30, -25, -19, -33, -14,
    -25, -19, -27, 5, 6, 6, -23, -10,
    -14, -16, -16, -8, -16, -16, -11, -11,
    -20, -14, -11, -8, -14, -11, -11, -8,
    -8, 8, 8, -5, -8, -5, -5, -26,
    -8, -8, -8, -8, -25, -22, -30, -30,
    -14, -14, -25, -19, -16, -16, -8, -14,
    -11, -14, -11, -17, -13, -30, -15, -15,
    -10, -10, -15, -13, -10, -8, -5, -8,
    -5, -8, -6, -8, -5, -5, 5, 5,
    -3, -5, -10, 5, -10, -8, -10, -10,
    -10, -8, -11, -8, -12, -26, -10, -11,
    -11, -5, -11, -13, -10, -10, -5, 3,
    3, 5, 6, -8, -5, -10, 3, 6,
    11, 5, -10, -5, -5, -10, -5, -5,
    -8, 3, -19, 3, -14, -8, -5, -8,
    -5, -19, -11, -6, -8, -8, -11, -8,
    -15, -15, -18, -15, -41, -11, -14, -11,
    -8, -10, -11, -14, -11, -11, -13, -15,
    -10, -14, -23, -10, -14, -11, -11, -8,
    -8, 5, 5, 5, -5, -8, -5, -6,
    -8, -11, -23, -5, -6, -5, -8, -5,
    -5, -5, -8, -26, -5, -8, -8, -8,
    -8, -8, -6, -8, -6, -8, -11, -5,
    -10, -10, -5, -5, -5, -5, -5, -8,
    -8, -3, -11, -3
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
const lv_font_t jua_16 = {
#else
lv_font_t jua_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if JUA_16*/
