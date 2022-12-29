/* Copyright 2017 Andreas Lindhé
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_SECT KC_GRV  // §
#define SE_N1 N1        // 1
#define SE_N2 N2        // 2
#define SE_N3 N3        // 3
#define SE_N4 N4        // 4
#define SE_N5 N5        // 5
#define SE_N6 N6        // 6
#define SE_N7 N7        // 7
#define SE_N8 N8        // 8
#define SE_N9 N9        // 9
#define SE_N0 N0        // 0
#define SE_PLUS EQUAL   // +
#define SE_ACUT RA(SE_N9)   // ´ (dead)
// Row 2
#define SE_Q    Q    // Q
#define SE_W    W    // W
#define SE_E    E    // E
#define SE_R    R    // R
#define SE_T    T    // T
#define SE_Y    Y    // Y
#define SE_U    U    // U
#define SE_I    I    // I
#define SE_O    O    // O
#define SE_P    P    // P
#define SE_ARNG LBKT // Å
#define SE_DIAE RBKT // ¨ (dead)
// Row 3
#define SE_A    A    // A
#define SE_S    S    // S
#define SE_D    D    // D
#define SE_F    F    // F
#define SE_G    G    // G
#define SE_H    H    // H
#define SE_J    J    // J
#define SE_K    K    // K
#define SE_L    L    // L
#define SE_ODIA SEMI // Ö
#define SE_ADIA SQT // Ä
#define SE_QUOT NUHS // '
// Row 4
#define SE_LABK NUBS // <
#define SE_Z    Z    // Z
#define SE_X    X    // X
#define SE_C    C    // C
#define SE_V    V    // V
#define SE_B    B    // B
#define SE_N    N    // N
#define SE_M    M    // M
#define SE_COMM COMM // ,
#define SE_DOT  DOT  // .
#define SE_MINS FSLH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ½ │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_HALF S(SE_SECT) // ½
#define SE_EXLM S(SE_1)    // !
#define SE_DQUO S(SE_2)    // "
#define SE_HASH S(SE_3)    // #
#define SE_CURR S(SE_4)    // ¤
#define SE_PERC S(SE_5)    // %
#define SE_AMPR S(SE_6)    // &
#define SE_SLSH S(SE_7)    // /
#define SE_LPRN S(SE_8)    // (
#define SE_RPRN S(SE_9)    // )
#define SE_EQL  S(SE_0)    // =
#define SE_QUES S(SE_PLUS) // ?
#define SE_GRV  S(SE_ACUT) // ` (dead)
// Row 2
#define SE_CIRC S(SE_DIAE) // ^ (dead)
// Row 3
#define SE_ASTR S(SE_QUOT) // *
// Row 4
#define SE_RABK S(SE_LABK) // >
#define SE_SCLN S(SE_COMM) // ;
#define SE_COLN S(SE_DOT)  // :
#define SE_UNDS S(SE_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_AT   ALGR(SE_2)    // @
#define SE_PND  ALGR(SE_3)    // £
#define SE_DLR  ALGR(SE_4)    // $
#define SE_EURO ALGR(SE_5)    // €
#define SE_LCBR ALGR(SE_7)    // {
#define SE_LBRC ALGR(SE_8)    // [
#define SE_RBRC ALGR(SE_9)    // ]
#define SE_RCBR ALGR(SE_0)    // }
#define SE_BSLS ALGR(SE_PLUS) // (backslash)
// Row 2
#define SE_TILD ALGR(SE_DIAE) // ~ (dead)
// Row 4
#define SE_PIPE ALGR(SE_LABK) // |
#define SE_MICR ALGR(SE_M)    // µ
