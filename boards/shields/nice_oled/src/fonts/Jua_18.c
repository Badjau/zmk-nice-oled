/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --no-compress --stride 1 --align 1 --font Jua.ttf --range 32-126 --format lvgl -o jua_18.c
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
    /* U+0021 "!" */
    0xdf, 0xff, 0xff, 0xff, 0x1, 0xd8,

    /* U+0022 "\"" */
    0x6, 0xf7, 0xbd, 0x80,

    /* U+0023 "#" */
    0xc, 0x40, 0xcc, 0x1c, 0xc7, 0xff, 0x7f, 0xf1,
    0x9c, 0x19, 0x83, 0x98, 0xff, 0xef, 0xfe, 0x33,
    0x87, 0x30, 0x73, 0x2, 0x30,

    /* U+0024 "$" */
    0xc, 0x3, 0x3, 0xf1, 0xfe, 0xec, 0xbb, 0x7,
    0xc0, 0xfc, 0xf, 0x83, 0x68, 0xdb, 0xf6, 0xff,
    0x8f, 0x80, 0xc0, 0x0,

    /* U+0025 "%" */
    0x0, 0x47, 0x8c, 0xc9, 0x8c, 0x98, 0xdb, 0xf,
    0xb0, 0x7e, 0x0, 0x60, 0xd, 0xe0, 0xdf, 0x1b,
    0x33, 0xb3, 0x31, 0xf0, 0x1e,

    /* U+0026 "&" */
    0x1c, 0xf, 0xc1, 0xdc, 0x31, 0x86, 0x30, 0xc6,
    0x1f, 0xc3, 0xf0, 0xe7, 0x78, 0x7b, 0x7, 0x60,
    0xcf, 0xfc, 0xfd, 0x80, 0x0,

    /* U+0027 "'" */
    0x3f, 0xc0,

    /* U+0028 "(" */
    0x33, 0x66, 0x6e, 0xec, 0xcc, 0xee, 0xe6, 0x73,

    /* U+0029 ")" */
    0xc6, 0x67, 0x33, 0x33, 0x33, 0x33, 0x37, 0x6e,

    /* U+002A "*" */
    0x0, 0x66, 0x3c, 0xff, 0xff, 0x3c, 0x3e, 0x66,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,
    0x18,

    /* U+002C "," */
    0x7b, 0x40,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0xc, 0x38, 0x61, 0xc3, 0xe, 0x18, 0x70,
    0xe1, 0x87, 0xc, 0x18, 0x0,

    /* U+0030 "0" */
    0x1e, 0x3f, 0x9f, 0xdc, 0x7e, 0x1e, 0xf, 0x7,
    0x83, 0xe1, 0xb0, 0xdc, 0xe7, 0xe1, 0xe0,

    /* U+0031 "1" */
    0x3f, 0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x80,

    /* U+0032 "2" */
    0x1e, 0x3f, 0x9f, 0xfc, 0x34, 0x18, 0xc, 0xe,
    0xe, 0xe, 0x1e, 0x1c, 0xf, 0xff, 0xf8,

    /* U+0033 "3" */
    0xff, 0x7f, 0x81, 0xc1, 0xc1, 0xc1, 0xe0, 0xfc,
    0x1e, 0x3, 0x1, 0xb9, 0xdf, 0xe3, 0xc0,

    /* U+0034 "4" */
    0x3, 0x1, 0xc0, 0xf0, 0x3c, 0x1b, 0xe, 0xc3,
    0x31, 0x8c, 0xff, 0xdf, 0xf0, 0x30, 0xc, 0x3,
    0x0,

    /* U+0035 "5" */
    0x7f, 0xbf, 0xd8, 0xc, 0x7, 0xe3, 0xf8, 0xe,
    0x3, 0x1, 0x80, 0xf8, 0xef, 0xe3, 0xc0,

    /* U+0036 "6" */
    0x1e, 0xf, 0xe7, 0x19, 0x80, 0xde, 0x3f, 0xef,
    0x3b, 0x7, 0xc1, 0xf8, 0x77, 0x79, 0xfe, 0x1e,
    0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xc0, 0xe0, 0x60, 0x70, 0x30, 0x38,
    0x18, 0x1c, 0xc, 0xe, 0x6, 0x7, 0x0,

    /* U+0038 "8" */
    0x3e, 0x3b, 0x98, 0x7c, 0x36, 0x3b, 0xfd, 0xf9,
    0xe7, 0xe1, 0xe0, 0xf8, 0xef, 0xf3, 0xe0,

    /* U+0039 "9" */
    0x3e, 0x3f, 0xb9, 0xf8, 0x7c, 0x1e, 0x1d, 0xde,
    0xff, 0x1, 0x81, 0xf9, 0xcf, 0xe3, 0xc0,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0x6c, 0x0, 0x3, 0x7a, 0x0,

    /* U+003C "<" */
    0x6, 0xe, 0x1e, 0x3c, 0x78, 0x70, 0xe0, 0xe0,
    0xe0, 0x70, 0x38, 0x3c, 0x1e, 0xe, 0x4,

    /* U+003D "=" */
    0xff, 0x7e, 0x0, 0x0, 0x0, 0xff, 0xfe,

    /* U+003E ">" */
    0x60, 0x70, 0x78, 0x3c, 0x1c, 0xe, 0x7, 0x7,
    0x7, 0xe, 0x1c, 0x38, 0x78, 0x70, 0x60,

    /* U+003F "?" */
    0x3e, 0x7e, 0x67, 0x43, 0x63, 0x7, 0xe, 0xc,
    0x18, 0x18, 0x8, 0x0, 0x8, 0x1c, 0x18,

    /* U+0040 "@" */
    0x2, 0x0, 0x7f, 0x3, 0xff, 0x1e, 0x1e, 0x70,
    0xbb, 0x9f, 0x6e, 0xfd, 0xb3, 0x77, 0xc8, 0xdf,
    0xa3, 0x66, 0xff, 0x9c, 0x9c, 0x78, 0x20, 0xff,
    0x0, 0xf8, 0x0,

    /* U+0041 "A" */
    0xc, 0x1, 0xc0, 0x78, 0xf, 0x81, 0xf0, 0x76,
    0xc, 0xe3, 0x8c, 0x7f, 0xcf, 0xfb, 0xff, 0x60,
    0x7c, 0x6,

    /* U+0042 "B" */
    0xfe, 0x7f, 0xb9, 0xd8, 0x6c, 0x37, 0xfb, 0xfd,
    0x8e, 0xc3, 0xe1, 0xf8, 0xff, 0xef, 0xe0,

    /* U+0043 "C" */
    0x4, 0xf, 0xc7, 0xf9, 0xc6, 0xe0, 0xb8, 0xe,
    0x3, 0x80, 0xe0, 0x38, 0xe, 0x9, 0xff, 0x3f,
    0x87, 0xc0,

    /* U+0044 "D" */
    0xfc, 0x3f, 0xcf, 0xfb, 0xe, 0xc1, 0xf0, 0x7c,
    0x1f, 0x7, 0xc1, 0xb0, 0xef, 0xfb, 0xfc, 0xfc,
    0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0x7f, 0xb0, 0x18, 0xc, 0x7, 0xfb, 0xfd,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0047 "G" */
    0xc, 0x1f, 0x9f, 0xfc, 0x7e, 0x1e, 0x3, 0x1,
    0x8f, 0xc7, 0xe0, 0xf8, 0xfe, 0xf7, 0xf1, 0xf0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1f, 0xff, 0xff,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x7f, 0xdf, 0xf0, 0x70, 0x1c, 0x7, 0x1, 0xc0,
    0x70, 0x1c, 0x7, 0x1, 0xcc, 0xe3, 0xf8, 0xfc,
    0x4, 0x0,

    /* U+004B "K" */
    0x40, 0x61, 0xb1, 0xd9, 0xcd, 0xc7, 0xc3, 0xc1,
    0xe0, 0xf8, 0x6e, 0x33, 0x98, 0xec, 0x3e, 0x8,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff, 0xff,

    /* U+004D "M" */
    0xc0, 0x7c, 0x1f, 0xc7, 0xf8, 0xfd, 0xbf, 0xbe,
    0xf3, 0x9e, 0x33, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x6,

    /* U+004E "N" */
    0x0, 0x70, 0xf8, 0x7e, 0x3f, 0x1f, 0xcf, 0x77,
    0xbb, 0xcf, 0xe3, 0xf1, 0xf8, 0x7c, 0x3e, 0xc,

    /* U+004F "O" */
    0x1e, 0xf, 0xc7, 0xb9, 0x86, 0xe1, 0xf0, 0x3c,
    0xf, 0x3, 0xe1, 0xf8, 0x77, 0x38, 0xfe, 0x1e,
    0x0,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb1, 0xf8, 0x7c, 0x3e, 0x1f, 0xfd,
    0xfc, 0xe0, 0x70, 0x38, 0x1c, 0xc, 0x0,

    /* U+0051 "Q" */
    0x0, 0xf, 0x87, 0xf1, 0x8e, 0xe1, 0xb0, 0x6c,
    0x1b, 0x6, 0xc5, 0xf1, 0xee, 0x79, 0xde, 0x3f,
    0xc7, 0xb0,

    /* U+0052 "R" */
    0xfe, 0x7f, 0xb1, 0xf8, 0x7c, 0x3f, 0xff, 0xfd,
    0x8c, 0xc7, 0x61, 0xb0, 0xd8, 0x34, 0x18,

    /* U+0053 "S" */
    0x3e, 0x3f, 0xf8, 0xf8, 0xe, 0x7, 0xf1, 0xfe,
    0x7, 0x1, 0xe0, 0xf8, 0xef, 0xf3, 0xe0,

    /* U+0054 "T" */
    0xff, 0xff, 0xf0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+0055 "U" */
    0xc1, 0xb8, 0x7e, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xb8, 0x67, 0x79, 0xfc, 0x1e,
    0x0,

    /* U+0056 "V" */
    0xc0, 0xf8, 0x3e, 0x1f, 0x87, 0x71, 0xdc, 0xe7,
    0x38, 0xee, 0x3f, 0xf, 0xc1, 0xf0, 0x78, 0xc,
    0x0,

    /* U+0057 "W" */
    0xc0, 0x16, 0x1, 0xf0, 0xd, 0x80, 0x6e, 0x63,
    0x33, 0x39, 0xbd, 0x8d, 0xec, 0x7f, 0xe1, 0xef,
    0xe, 0x78, 0x73, 0x83, 0x8c, 0x8, 0x0,

    /* U+0058 "X" */
    0xc1, 0xb8, 0x6e, 0x39, 0xdc, 0x3f, 0xf, 0x81,
    0xc0, 0x78, 0x3e, 0x1d, 0xc7, 0x3b, 0x8e, 0xc1,
    0xc0,

    /* U+0059 "Y" */
    0xc0, 0xf8, 0x77, 0x38, 0xee, 0x3f, 0x7, 0x80,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

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

    /* U+005E "^" */
    0x18, 0x1c, 0x3c, 0x66, 0xe6,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0061 "a" */
    0x3c, 0x3f, 0x39, 0x98, 0xec, 0x77, 0x39, 0xfe,
    0xfb,

    /* U+0062 "b" */
    0xc1, 0x83, 0x6, 0xc, 0x1f, 0x3f, 0x67, 0xc7,
    0x8f, 0x3f, 0xef, 0x80,

    /* U+0063 "c" */
    0x3c, 0xff, 0x96, 0xc, 0x1c, 0x1f, 0x9e,

    /* U+0064 "d" */
    0x6, 0xc, 0x18, 0x30, 0x67, 0xdf, 0xf3, 0xc7,
    0x8f, 0x9b, 0xf3, 0xe0,

    /* U+0065 "e" */
    0x3c, 0x7e, 0x63, 0xe3, 0xff, 0xfe, 0x60, 0x7f,
    0x3e,

    /* U+0066 "f" */
    0x1c, 0xf3, 0xc, 0x7f, 0xf3, 0xc, 0x30, 0xc3,
    0xc,

    /* U+0067 "g" */
    0x3e, 0x7f, 0x63, 0xe3, 0x63, 0x63, 0x7f, 0x1f,
    0x3, 0x63, 0x7e, 0x3e,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xc, 0x1f, 0xbf, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x60,

    /* U+0069 "i" */
    0xf0, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x8, 0x30, 0x0, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xf, 0xf7, 0x80,

    /* U+006B "k" */
    0xc3, 0xc, 0x30, 0xc3, 0x3d, 0xfe, 0xf3, 0xcf,
    0xb7, 0xcc,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xc0, 0x3f, 0xef, 0xff, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0xcc, 0xc0,

    /* U+006E "n" */
    0xdd, 0xff, 0xbe, 0x3c, 0x78, 0xf1, 0xe3, 0x46,

    /* U+006F "o" */
    0x3c, 0x3f, 0x3f, 0xd8, 0x6c, 0x36, 0x1b, 0xfc,
    0xfc, 0x3c, 0x0,

    /* U+0070 "p" */
    0xf8, 0xfc, 0xde, 0xc6, 0xc7, 0xce, 0xfe, 0xf8,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x1e, 0xff, 0xfe, 0x3c, 0x7c, 0xdf, 0x9f, 0x6,
    0xc, 0x18, 0x30, 0x60,

    /* U+0072 "r" */
    0xdd, 0xff, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc0,

    /* U+0073 "s" */
    0x79, 0xfb, 0x17, 0x7, 0xc1, 0xf3, 0xfe, 0x7c,

    /* U+0074 "t" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xfb, 0xbf, 0x3c,

    /* U+0076 "v" */
    0xc3, 0xc7, 0xe6, 0xee, 0x7e, 0x7c, 0x3c, 0x38,
    0x18,

    /* U+0077 "w" */
    0xc0, 0xf3, 0x3c, 0xcf, 0xfb, 0x7f, 0x9f, 0xe7,
    0x38, 0xcc, 0x33, 0x0,

    /* U+0078 "x" */
    0xc6, 0xe6, 0xee, 0x7c, 0x38, 0x7c, 0x6e, 0xe6,
    0xc7,

    /* U+0079 "y" */
    0xc3, 0xc7, 0xe7, 0x66, 0x6e, 0x7c, 0x3c, 0x38,
    0x38, 0x30, 0x70, 0x70, 0x60,

    /* U+007A "z" */
    0xff, 0xfc, 0x30, 0xe3, 0x8e, 0x38, 0x7f, 0xfe,

    /* U+007B "{" */
    0x3d, 0xf6, 0x18, 0x61, 0x8e, 0x30, 0xc1, 0x86,
    0x18, 0x61, 0x87, 0xcf,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xf3, 0xe1, 0x86, 0x18, 0x60, 0xc3, 0xc, 0x71,
    0x86, 0x18, 0x6f, 0xbc,

    /* U+007E "~" */
    0x70, 0x3f, 0x2c, 0xf8, 0x1c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 85, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 10, .adv_w = 241, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 31, .adv_w = 180, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 51, .adv_w = 223, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 221, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 93, .adv_w = 102, .box_w = 2, .box_h = 5, .ofs_x = 2, .ofs_y = 12},
    {.bitmap_index = 95, .adv_w = 98, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 103, .adv_w = 100, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 111, .adv_w = 164, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 119, .adv_w = 157, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 128, .adv_w = 82, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 130, .adv_w = 137, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 132, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 133, .adv_w = 138, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 176, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 118, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 168, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 158, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 166, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 178, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 67, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 297, .adv_w = 73, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 158, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 317, .adv_w = 148, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 324, .adv_w = 156, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 339, .adv_w = 162, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 354, .adv_w = 254, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 201, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 178, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 175, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 158, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 157, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 175, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 81, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 512, .adv_w = 180, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 530, .adv_w = 164, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 157, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 199, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 180, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 182, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 168, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 172, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 185, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 183, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 194, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 230, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 747, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 178, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 136, .box_w = 5, .box_h = 16, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 806, .adv_w = 138, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 136, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 829, .adv_w = 135, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 834, .adv_w = 153, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 836, .adv_w = 166, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 137, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 117, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 894, .adv_w = 143, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 906, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 62, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 120, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 934, .adv_w = 122, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 62, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 948, .adv_w = 180, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 141, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 968, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 142, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 992, .adv_w = 142, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1004, .adv_w = 141, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 147, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1049, .adv_w = 193, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 148, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1070, .adv_w = 158, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1083, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 136, .box_w = 6, .box_h = 16, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1103, .adv_w = 105, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1107, .adv_w = 141, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1119, .adv_w = 182, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 6}
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
    -9, -14, -14, -37, -29, -23, -29, -6,
    -6, -6, -12, -28, -25, -15, -15, -12,
    6, -12, -9, -6, -6, -12, -9, -14,
    -9, -9, -14, -9, -17, -12, -20, -9,
    -6, -6, -6, -9, -29, -17, -6, -15,
    -12, -12, 6, -10, 6, 6, 6, 6,
    6, -12, -9, -29, -12, -14, -12, -24,
    -18, -18, -18, -14, -6, -9, -16, -10,
    -18, -22, -22, -22, -14, -20, -6, -20,
    -20, -43, -17, -40, -29, -46, -15, -16,
    -15, -3, -24, -25, 9, 6, 9, 6,
    6, 6, 6, 9, 6, 9, 6, 6,
    6, 6, 6, 6, -9, 9, 6, 6,
    6, -14, -12, -6, -29, -17, -12, -9,
    -14, -12, -22, -22, -52, -22, -9, -17,
    -20, -19, -6, -12, -9, -12, 6, 9,
    6, -12, -12, -16, -37, -20, -14, -12,
    -17, -17, -9, -34, -28, -22, -37, -15,
    -28, -22, -31, 6, 6, 6, -26, -12,
    -16, -18, -18, -9, -18, -18, -12, -12,
    -23, -16, -12, -9, -15, -12, -12, -9,
    -10, 9, 9, -6, -9, -6, -6, -29,
    -9, -9, -9, -9, -28, -25, -34, -34,
    -15, -15, -28, -22, -18, -18, -9, -16,
    -12, -16, -12, -19, -14, -34, -17, -17,
    -12, -12, -17, -14, -12, -9, -6, -9,
    -6, -9, -6, -9, -6, -6, 6, 6,
    -3, -6, -12, 6, -12, -9, -12, -12,
    -12, -9, -12, -10, -13, -29, -12, -12,
    -12, -6, -12, -14, -12, -12, -6, 3,
    3, 6, 7, -9, -6, -12, 3, 6,
    12, 6, -12, -6, -6, -12, -6, -6,
    -9, 3, -22, 3, -15, -10, -6, -9,
    -6, -22, -12, -6, -9, -9, -12, -9,
    -17, -17, -20, -17, -46, -12, -16, -12,
    -9, -12, -12, -16, -12, -12, -14, -17,
    -12, -15, -26, -12, -16, -12, -12, -9,
    -9, 6, 6, 6, -6, -9, -6, -7,
    -9, -12, -26, -6, -6, -6, -9, -6,
    -6, -6, -9, -29, -6, -10, -9, -9,
    -10, -9, -7, -9, -7, -9, -12, -6,
    -12, -12, -6, -6, -6, -6, -6, -9,
    -9, -3, -12, -3
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
const lv_font_t jua_18 = {
#else
lv_font_t jua_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
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



#endif /*#if JUA_18*/
