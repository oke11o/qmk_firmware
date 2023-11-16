/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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
#include QMK_KEYBOARD_H

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_FIRST,
    LAYER_SECOND,
    LAYER_THIRD,
    LAYER_FOURTH,
    LAYER_FIFTH,
    LAYER_SIXTH,
    LAYER_SEVENTH,
};

// TODO: quantum/action_tapping.h:32: note: this is the location of the previous definition
// #define TAPPING_TOGGLE 2

#define FIRST MO(LAYER_FIRST)
#define SECOND MO(LAYER_SECOND)
#define THIRD MO(LAYER_THIRD)
#define FOURTH MO(LAYER_FOURTH)
#define FIFTH MO(LAYER_FIFTH)
#define SIXTH MO(LAYER_SIXTH)

// TG(layer) - Toggle layer on/off
// TO(layer) - Turn on layer when pressed
// TT(layer) - Normally acts like MO unless it's tapped multple times which toggles layer on
// DF(layer) - Sets the default layer
// OSL(layer) - Switch to layer for one keypress
// LT(0,kc) - kc on tap, switch to layer 0 while held

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_BTN1, KC_BTN2, DRGSCRL, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, DRGSCRL, KC_BTN1,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RBRC,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                FIRST,  KC_LGUI,  THIRD,     FOURTH,   SECOND,
                                         TO(6),  OSL(5),     LT(6, KC_ESC)
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_FIRST] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LALT,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC,  KC_RBRC, KC_LCBR, KC_RCBR, KC_ASTR, KC_SLSH,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_COLN, KC_PEQL, KC_LPRN, KC_RPRN, KC_PIPE, KC_DQUO,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LCTL, KC_LGUI,  KC_ESC, KC_ENT, KC_SPC, KC_BSPC,     KC_MINS,  KC_LSFT, XXXXXXX, XXXXXXX, KC_QUES, KC_BSLS,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,    KC_TRNS
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_SECOND] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,    KC_PEQL,  KC_7,  KC_8,  KC_9, KC_PAST, KC_PSLS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX,    KC_0,   KC_4,  KC_5,  KC_6, KC_PPLS,  KC_MINS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, KC_LBRC,  KC_RBRC, XXXXXXX, XXXXXXX,    OSM(MOD_LGUI), KC_1,  KC_2,  KC_3, OSM(MOD_LSFT), KC_PDOT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,    KC_TRNS
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_THIRD] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_ESC,  XXXXXXX, KC_PGDN,  KC_UP,   KC_PGUP, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LALT, KC_TAB,  KC_LEFT, KC_DOWN,  KC_RGHT, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT, KC_LGUI, KC_GRV,  XXXXXXX, XXXXXXX,  KC_DEL,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,    KC_TRNS
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_FOURTH] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_SPC, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,    KC_LEFT,  KC_DOWN,  KC_UP, KC_RGHT, KC_RALT, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_TRNS, KC_F11,  KC_F12,  XXXXXXX, KC_R,    KC_DEL,    KC_BSPC,  KC_ENT,  KC_DEL, KC_GRV, KC_RGUI, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  KC_LSFT, KC_LALT, KC_LCTL,    XXXXXXX, XXXXXXX,
                                           XXXXXXX, XXXXXXX,    XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_FIFTH] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX,OSM(MOD_LCTL|MOD_LSFT|MOD_LGUI),OSM(MOD_LCTL|MOD_LALT|MOD_LGUI),OSM(MOD_LSFT|MOD_LALT|MOD_LGUI),OSM(MOD_MEH), XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX,OSM(MOD_LSFT|MOD_LALT), OSM(MOD_LSFT|MOD_LGUI), OSM(MOD_LALT|MOD_LGUI), OSM(MOD_HYPR), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX,OSM(MOD_LCTL|MOD_LSFT), OSM(MOD_LCTL|MOD_LALT), OSM(MOD_LCTL|MOD_LGUI), KC_T, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX,
                                           XXXXXXX, XXXXXXX,    XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

};
// clang-format on
