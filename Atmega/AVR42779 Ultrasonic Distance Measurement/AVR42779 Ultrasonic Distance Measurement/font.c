/**
 * \file
 *
 * \brief SSD1306 fonts.
 *
 * Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

//#include "compiler.h"
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "font.h"
#include "stddef.h"
/*===================================*/
/*========= Characters data =========*/
/*===================================*/

/**  0x30 - 48  - '0'  **/
const __flash uint8_t Font08px_N0[6] = {5,
                                        bits2bytes(0, 1, 1, 1, 1, 1, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 1, 0),
                                        bits2bytes(0, 1, 1, 1, 1, 1, 0, 0)};

/**  0x31 - 49  - '1'  **/
const __flash uint8_t Font08px_N1[6] = {5,
                                        bits2bytes(0, 0, 0, 0, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 0, 1, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 1, 1, 1, 0),
                                        bits2bytes(1, 0, 0, 0, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 0, 0, 0, 0, 0, 0)};

/**  0x32 - 50  - '2'  **/
const __flash uint8_t Font08px_N2[6] = {5,
                                        bits2bytes(1, 0, 0, 0, 0, 1, 0, 0),
                                        bits2bytes(1, 1, 0, 0, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 1, 0, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 1, 0, 0)};

/**  0x33 - 51  - '3'  **/
const __flash uint8_t Font08px_N3[6] = {5,
                                        bits2bytes(0, 1, 0, 0, 0, 1, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(0, 1, 1, 0, 1, 1, 0, 0)};

/**  0x34 - 52  - '4'  **/
const __flash uint8_t Font08px_N4[6] = {5,
                                        bits2bytes(0, 0, 1, 1, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 0, 0, 1, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 1, 1, 1, 0),
                                        bits2bytes(0, 0, 1, 0, 0, 0, 0, 0)};

/**  0x35 - 53  - '5'  **/
const __flash uint8_t Font08px_N5[6] = {5,
                                        bits2bytes(0, 1, 0, 1, 1, 1, 1, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 1, 0),
                                        bits2bytes(0, 1, 1, 1, 0, 0, 1, 0)};

/**  0x36 - 54  - '6'  **/
const __flash uint8_t Font08px_N6[6] = {5,
                                        bits2bytes(0, 1, 1, 1, 1, 1, 0, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(0, 1, 1, 0, 0, 1, 0, 0)};

/**  0x37 - 55  - '7'  **/
const __flash uint8_t Font08px_N7[6] = {5,
                                        bits2bytes(0, 0, 0, 0, 0, 0, 1, 0),
                                        bits2bytes(0, 0, 0, 0, 0, 0, 1, 0),
                                        bits2bytes(1, 1, 1, 1, 0, 0, 1, 0),
                                        bits2bytes(0, 0, 0, 0, 1, 0, 1, 0),
                                        bits2bytes(0, 0, 0, 0, 0, 1, 1, 0)};

/**  0x38 - 56  - '8'  **/
const __flash uint8_t Font08px_N8[6] = {5,
                                        bits2bytes(0, 1, 1, 0, 1, 1, 0, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(0, 1, 1, 0, 1, 1, 0, 0)};

/**  0x39 - 57  - '9'  **/
const __flash uint8_t Font08px_N9[6] = {5,
                                        bits2bytes(0, 1, 0, 0, 1, 1, 0, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(1, 0, 0, 1, 0, 0, 1, 0),
                                        bits2bytes(0, 1, 1, 1, 1, 1, 0, 0)};

/**  0x61 - 97  - 'a'  **/
const __flash uint8_t Font08px_la[5] = {4,
                                        bits2bytes(0, 1, 1, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 1, 0, 0, 0)};

/**  0x62 - 98  - 'b'  **/
const __flash uint8_t Font08px_lb[5] = {4,
                                        bits2bytes(1, 1, 1, 1, 1, 1, 1, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 1, 1, 1, 0, 0, 0, 0)};

/**  0x63 - 99  - 'c'  **/
const __flash uint8_t Font08px_lc[5] = {4,
                                        bits2bytes(0, 1, 1, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0)};

/**  0x64 - 100 - 'd'  **/
const __flash uint8_t Font08px_ld[5] = {4,
                                        bits2bytes(0, 1, 1, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 1, 1, 1, 0)};

/**  0x65 - 101 - 'e'  **/
const __flash uint8_t Font08px_le[5] = {4,
                                        bits2bytes(0, 1, 1, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 1, 0, 0, 0, 0)};

/**  0x66 - 102 - 'f'  **/
const __flash uint8_t Font08px_lf[4]
    = {3, bits2bytes(1, 1, 1, 1, 1, 1, 0, 0), bits2bytes(0, 0, 0, 1, 0, 0, 1, 0), bits2bytes(0, 0, 0, 0, 0, 0, 1, 0)};

/**  0x67 - 103 - 'g'  **/
const __flash uint8_t Font08px_lg[5] = {4,
                                        bits2bytes(0, 0, 0, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 1, 1, 1, 1, 0, 0, 0)};

/**  0x68 - 104 - 'h'  **/
const __flash uint8_t Font08px_lh[5] = {4,
                                        bits2bytes(1, 1, 1, 1, 1, 1, 1, 0),
                                        bits2bytes(0, 0, 0, 1, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 0, 0, 0, 0)};

/**  0x69 - 105 - 'i'  **/
const __flash uint8_t Font08px_li[2] = {1, bits2bytes(1, 1, 1, 1, 1, 0, 1, 0)};

/**  0x6A - 106 - 'j'  **/
const __flash uint8_t Font08px_lj[3] = {2, bits2bytes(1, 0, 0, 0, 0, 0, 0, 0), bits2bytes(0, 1, 1, 1, 1, 0, 1, 0)};

/**  0x6B - 107 - 'k'  **/
const __flash uint8_t Font08px_lk[5] = {4,
                                        bits2bytes(1, 1, 1, 1, 1, 1, 1, 0),
                                        bits2bytes(0, 0, 1, 0, 0, 0, 0, 0),
                                        bits2bytes(0, 1, 0, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0)};

/**  0x6C - 108 - 'l'  **/
const __flash uint8_t Font08px_ll[2] = {1, bits2bytes(1, 1, 1, 1, 1, 1, 1, 0)};

/**  0x6D - 109 - 'm'  **/
const __flash uint8_t Font08px_lm[6] = {5,
                                        bits2bytes(1, 1, 1, 1, 1, 0, 0, 0),
                                        bits2bytes(0, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 0, 0, 0, 0)};

/**  0x6E - 110 - 'n'  **/
const __flash uint8_t Font08px_ln[5] = {4,
                                        bits2bytes(1, 1, 1, 1, 1, 0, 0, 0),
                                        bits2bytes(0, 0, 0, 1, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 0, 0, 0, 0)};

/**  0x6F - 111 - 'o'  **/
const __flash uint8_t Font08px_lo[5] = {4,
                                        bits2bytes(0, 1, 1, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 1, 1, 1, 0, 0, 0, 0)};

/**  0x70 - 112 - 'p'  **/
const __flash uint8_t Font08px_lp[5] = {4,
                                        bits2bytes(1, 1, 1, 1, 1, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 0, 0, 1, 0, 0, 0, 0)};

/**  0x71 - 113 - 'q'  **/
const __flash uint8_t Font08px_lq[5] = {4,
                                        bits2bytes(0, 0, 0, 1, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 1, 0, 0, 0)};

/**  0x72 - 114 - 'r'  **/
const __flash uint8_t Font08px_lr[4]
    = {3, bits2bytes(1, 1, 1, 1, 1, 0, 0, 0), bits2bytes(0, 0, 0, 1, 0, 0, 0, 0), bits2bytes(0, 0, 0, 0, 1, 0, 0, 0)};

/**  0x73 - 115 - 's'  **/
const __flash uint8_t Font08px_ls[5] = {4,
                                        bits2bytes(1, 0, 0, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 1, 0, 0, 1, 0, 0, 0)};

/**  0x74 - 116 - 't'  **/
const __flash uint8_t Font08px_lt[4]
    = {3, bits2bytes(0, 0, 0, 0, 1, 0, 0, 0), bits2bytes(0, 1, 1, 1, 1, 1, 0, 0), bits2bytes(1, 0, 0, 0, 1, 0, 0, 0)};

/**  0x75 - 117 - 'u'  **/
const __flash uint8_t Font08px_lu[5] = {4,
                                        bits2bytes(0, 1, 1, 1, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 0, 0, 0, 0),
                                        bits2bytes(1, 1, 1, 1, 1, 0, 0, 0)};

/**  0x76 - 118 - 'v'  **/
const __flash uint8_t Font08px_lv[6] = {5,
                                        bits2bytes(0, 0, 0, 1, 1, 0, 0, 0),
                                        bits2bytes(0, 1, 1, 0, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 0, 0, 0, 0),
                                        bits2bytes(0, 1, 1, 0, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 0, 1, 1, 0, 0, 0)};

/**  0x77 - 119 - 'w'  **/
const __flash uint8_t Font08px_lw[6] = {5,
                                        bits2bytes(0, 0, 1, 1, 1, 0, 0, 0),
                                        bits2bytes(1, 1, 0, 0, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 1, 0, 0, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 1, 1, 0, 0, 0)};

/**  0x78 - 120 - 'x'  **/
const __flash uint8_t Font08px_lx[6] = {5,
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0),
                                        bits2bytes(0, 1, 0, 1, 0, 0, 0, 0),
                                        bits2bytes(0, 0, 1, 0, 0, 0, 0, 0),
                                        bits2bytes(0, 1, 0, 1, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 0, 0, 1, 0, 0, 0)};

/**  0x79 - 121 - 'y'  **/
const __flash uint8_t Font08px_ly[5] = {4,
                                        bits2bytes(0, 0, 0, 1, 1, 0, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 0, 0, 0, 0),
                                        bits2bytes(1, 0, 1, 0, 0, 0, 0, 0),
                                        bits2bytes(0, 1, 1, 1, 1, 0, 0, 0)};

/**  0x7A - 122 - 'z'  **/
const __flash uint8_t Font08px_lz[4]
    = {3, bits2bytes(1, 1, 0, 0, 1, 0, 0, 0), bits2bytes(1, 0, 1, 0, 1, 0, 0, 0), bits2bytes(1, 0, 0, 1, 1, 0, 0, 0)};

const __flash uint8_t Font08px_DASH[4]
    = {3, bits2bytes(0, 0, 1, 0, 0, 0, 0, 0), bits2bytes(0, 0, 1, 0, 0, 0, 0, 0), bits2bytes(0, 0, 1, 0, 0, 0, 0, 0)};

const __flash uint8_t Font08px_dot[4]
    = {3, bits2bytes(0, 0, 0, 0, 0, 0, 0, 0), bits2bytes(1, 0, 0, 0, 0, 0, 0, 0), bits2bytes(0, 0, 0, 0, 0, 0, 0, 0)};

const __flash uint8_t Font08px_rpar[4]
    = {3, bits2bytes(0, 0, 0, 0, 0, 0, 0, 0), bits2bytes(1, 0, 0, 0, 0, 0, 0, 1), bits2bytes(0, 1, 1, 1, 1, 1, 1, 0)};

const __flash uint8_t Font08px_lpar[4]
    = {3, bits2bytes(0, 1, 1, 1, 1, 1, 1, 0), bits2bytes(1, 0, 0, 0, 0, 0, 0, 1), bits2bytes(0, 0, 0, 0, 0, 0, 0, 0)};

/*============================================*/
/*========= Character pointers table =========*/
/*============================================*/

const __flash uint8_t *font_table[] = {
    Font08px_lpar,
    Font08px_rpar,
    NULL,
    NULL,
    NULL,
    Font08px_DASH,
    Font08px_dot,
    NULL,
    Font08px_N0,
    Font08px_N1,
    Font08px_N2,
    Font08px_N3,
    Font08px_N4,
    Font08px_N5,
    Font08px_N6,
    Font08px_N7,
    Font08px_N8,
    Font08px_N9,
    // Font08px_58,
    // Font08px_59,
    // Font08px_60,
    // Font08px_61,
    // Font08px_62,
    // Font08px_63,
    // Font08px_64,
    // Font08px_UA,
    // Font08px_UB,
    // Font08px_UC,
    // Font08px_UD,
    // Font08px_UE,
    // Font08px_UF,
    // Font08px_UG,
    // Font08px_UH,
    // Font08px_UI,
    // Font08px_UJ,
    // Font08px_UK,
    // Font08px_UL,
    // Font08px_UM,
    // Font08px_UN,
    // Font08px_UO,
    // Font08px_UP,
    // Font08px_UQ,
    // Font08px_UR,
    // Font08px_US,
    // Font08px_UT,
    // Font08px_UU,
    // Font08px_UV,
    // Font08px_UW,
    // Font08px_UX,
    // Font08px_UY,
    // Font08px_UZ,
    // Font08px_91,
    // Font08px_92,
    // Font08px_93,
    // Font08px_94,
    // Font08px_95,
    // Font08px_96,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Font08px_la,
    Font08px_lb,
    Font08px_lc,
    Font08px_ld,
    Font08px_le,
    Font08px_lf,
    Font08px_lg,
    Font08px_lh,
    Font08px_li,
    Font08px_lj,
    Font08px_lk,
    Font08px_ll,
    Font08px_lm,
    Font08px_ln,
    Font08px_lo,
    Font08px_lp,
    Font08px_lq,
    Font08px_lr,
    Font08px_ls,
    Font08px_lt,
    Font08px_lu,
    Font08px_lv,
    Font08px_lw,
    Font08px_lx,
    Font08px_ly,
    Font08px_lz,
};
