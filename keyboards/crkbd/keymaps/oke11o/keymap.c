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
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RBRC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(3),  KC_LGUI, MO(1),      MO(4),  MO(2),  MO(5)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_LALT,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      KC_LBRC,  KC_RBRC, KC_LCBR, KC_RCBR, KC_ASTR, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_LSFT,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_COLN, KC_PEQL, KC_LPRN, KC_RPRN, KC_PIPE, KC_DQUO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LGUI,  KC_ESC, KC_ENT,  KC_SPC,  KC_BSPC,                      KC_MINS,  KC_LSFT, KC_LCTL, KC_LGUI, KC_QUES, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_PEQL,  KC_7,  KC_8,  KC_9, KC_PAST, KC_PSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                       KC_0,   KC_4,  KC_5,  KC_6, KC_PPLS,  KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_F11,  KC_F12,  KC_LGUI, XXXXXXX,  KC_DEL,                      KC_BSPC, KC_1,  KC_2,  KC_3, OSM(MOD_LSFT), KC_PDOT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, KC_PGDN,  KC_UP,   KC_PGUP, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LALT, KC_LEFT, KC_DOWN,  KC_RGHT, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_GRV,  XXXXXXX, XXXXXXX,  KC_DEL,                      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,                     KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_SPC, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX,                     KC_LEFT,  KC_DOWN,  KC_UP, KC_RGHT, KC_RALT, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, KC_LBRC,  KC_RBRC, XXXXXXX, OSL(5),                     KC_DEL,  KC_SPC,  KC_ENT, KC_ESC, KC_RGUI, KC_GRV,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS
                                      //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,OSM(MOD_LCTL|MOD_LSFT|MOD_LGUI), OSM(MOD_LCTL|MOD_LALT|MOD_LGUI),OSM(MOD_LSFT|MOD_LALT|MOD_LGUI),OSM(MOD_MEH), XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+-------------------------------+--------------------------------+-------------------------------+------------+---------|  |--------+--------+--------+--------+--------+--------|
      XXXXXXX,OSM(MOD_LSFT|MOD_LALT), OSM(MOD_LSFT|MOD_LGUI), OSM(MOD_LALT|MOD_LGUI), OSM(MOD_HYPR), XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+----------------------+-----------------------+-----------------------+--------------+--------|                |--------+--------+--------+--------+--------+--------|
      KC_A,   OSM(MOD_LCTL|MOD_LSFT), OSM(MOD_LCTL|MOD_LALT), OSM(MOD_LCTL|MOD_LGUI), KC_T, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+----------------------+-----------------------+-----------------------+-----+--------|                        |--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS
                                      //╰────────+────────+─────────╯    ╰────────+─────────+────────╯
  )
};
