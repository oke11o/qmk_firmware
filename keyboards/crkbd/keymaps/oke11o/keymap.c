/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, LT(9,KC_A),  KC_S, LT(3,KC_D), LT(1,KC_F),  KC_G,                    KC_H,    KC_J,    KC_K,    KC_L, LT(8,KC_SCLN), KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LCTL,  LALT_T(KC_Z),   KC_X,    KC_C,    KC_V,    KC_B,                   KC_N,   KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_ESC,  LT(5,KC_ENT),  KC_LGUI,     KC_SPC, MO(4), KC_BSPC
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [1] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
       KC_TAB, KC_EXLM, KC_AT,  KC_HASH, XXXXXXX,  XXXXXXX,                      KC_CIRC, KC_AMPR, KC_LCBR, KC_RCBR, KC_ASTR, XXXXXXX,
 //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, KC_LSFT, KC_LALT,    KC_F, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_MINS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, KC_LCTL, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX,                      KC_COLN, KC_PEQL, KC_LBRC, KC_RBRC, KC_GRV, KC_PPLS,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                         KC_ESC, KC_ENT,  KC_LGUI,      KC_SPC,  KC_LSFT, KC_DEL
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [3] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PEQL, KC_7, KC_8, KC_9, KC_PAST, KC_PSLS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
     XXXXXXX, KC_LSFT, KC_LALT, XXXXXXX,    KC_D, XXXXXXX,                         KC_0, KC_4, KC_5, KC_6, KC_PPLS, KC_MINS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
     XXXXXXX, KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_1, KC_2, KC_3, KC_PDOT, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                             KC_ESC, KC_ENT,  KC_LGUI,      KC_SPC,  KC_LSFT, KC_BSPC
                                      //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [4] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      KC_TAB,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_PEQL, KC_7, KC_8, KC_9, KC_PAST, KC_PSLS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      KC_LSFT, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                       KC_0, KC_4, KC_5, KC_6, KC_PPLS, KC_MINS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      KC_LCTL, KC_F11,  KC_F12,  KC_ENT,  KC_SPC,  KC_BSPC,                      XXXXXXX, KC_1, KC_2, KC_3, KC_PDOT, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                          KC_TRNS, KC_TRNS,  MO(10),     KC_SPC,  KC_LSFT, KC_BSPC
                                      //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

   [5] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────────────────────╮     ╭──────────────────────────────────────────────────────╮
     XXXXXXX, XXXXXXX, XXXXXXX, OSM(MOD_HYPR), KC_ENT,  KC_SPC,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────────────────────┤     ├──────────────────────────────────────────────────────┤
     KC_GRV,                           OSM(MOD_LGUI|MOD_LSFT),
     OSM(MOD_LCTL|MOD_LSFT|MOD_LGUI),  OSM(MOD_LCTL|MOD_LALT|MOD_LGUI),
     OSM(MOD_LSFT|MOD_LALT|MOD_LGUI),  OSM(MOD_MEH),                               KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_MINS,
  //├──────────────────────────────────────────────────────────────────────┤     ├──────────────────────────────────────────────────────┤
    KC_LGUI,                OSM(MOD_LCTL|MOD_LALT), OSM(MOD_LCTL|MOD_LGUI),
    OSM(MOD_LCTL|MOD_LSFT), OSM(MOD_LALT|MOD_LSFT), OSM(MOD_LALT|MOD_LGUI),       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //╰───────────────────────────────────────────────────────────────────────┤    ├─────────────────────────────────────────╯
                                         KC_TRNS, KC_TRNS,  KC_TRNS,     KC_SPC, XXXXXXX, KC_BSPC
                                     //╰────────+────────+─────────╯    ╰────────+─────────+────────╯
 ),

    [8] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_CIRC, KC_AMPR, KC_LCBR, KC_RCBR, KC_ASTR, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_COLN, KC_PEQL, XXXXXXX, KC_SCLN, XXXXXXX, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                    KC_ESC, LT(4,KC_ENT),  KC_LGUI,      KC_LGUI,  KC_LALT, KC_DEL
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [9] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      XXXXXXX, KC_EXLM, KC_AT,  KC_HASH, KC_DLR,  KC_PERC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, KC_LALT, KC_LEFT, KC_UP,  KC_DOWN, KC_RGHT,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, KC_A, KC_LCBR, KC_RCBR, KC_BSPC,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                         KC_ESC, KC_ENT,  KC_LGUI,      KC_SPC,  KC_LSFT, KC_DEL
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [10] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      XXXXXXX, XXXXXXX, XXXXXXX, KC_3, XXXXXXX, KC_7,                           XXXXXXX, XXXXXXX, KC_1, KC_0, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, KC_5, XXXXXXX, XXXXXXX, KC_6,                           KC_4, KC_9, KC_PPLS, KC_MINS, KC_PAST, KC_PSLS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, KC_2, XXXXXXX, XXXXXXX, XXXXXXX, KC_8,                           KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                    XXXXXXX, XXXXXXX,  XXXXXXX,      KC_SPC,  KC_LGUI, XXXXXXX
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  )

};
