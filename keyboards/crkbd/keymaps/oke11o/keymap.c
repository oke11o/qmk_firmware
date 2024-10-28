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
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      KC_LSFT, LT(4,KC_A), LT(3,KC_S), LT(2,KC_D), LT(1,KC_F),  KC_G,             KC_H,    KC_J,    KC_K,    LT(7,KC_L), LT(6,KC_SCLN), KC_QUOT,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
    LCTL_T(KC_MINS),  LALT_T(KC_Z),   KC_X,    KC_C,    KC_V,    KC_B,            KC_N,   LSFT_T(KC_M), LALT_T(KC_COMM),  LCTL_T(KC_DOT), LGUI_T(KC_SLSH),  KC_BSLS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
                                    KC_ESC,  LT(5,KC_ENT),  KC_LGUI,     KC_SPC, XXXXXXX, KC_BSPC //MO(7) TODO: надо подумать, чтобы на эту клавишу добавить
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [1] = LAYOUT_split_3x6_3(
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      XXXXXXX, KC_EXLM, KC_AT,  KC_HASH, XXXXXXX,  XXXXXXX,                      KC_CIRC, KC_AMPR, KC_LCBR, KC_RCBR, KC_ASTR, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      KC_LSFT, XXXXXXX, KC_LALT, KC_LGUI, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_MINS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      KC_LCTL, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_COLN, KC_PEQL, KC_LBRC, KC_RBRC, KC_GRV, KC_PPLS,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                         KC_ESC, KC_ENT,  KC_LGUI,      KC_SPC,  XXXXXXX, KC_DEL
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [2] = LAYOUT_split_3x6_3(
      // DESC: Только для цифр. 
      // KC_DLR,  KC_PERC - чтобы продолжить ряд для указательного пальца
      // Надо подумать, а что еще сюда можно
      // KC_LPRN, KC_RPRN - специально дублирую, чтобы было как на LT_1. Часто надо в круглые скобки цифру написать, почему-то
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DLR,  KC_PERC,                      KC_PEQL, KC_7, KC_8, KC_9, KC_PAST, KC_PSLS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         KC_0, KC_4, KC_5, KC_6, KC_PPLS, KC_MINS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
     XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_1, KC_2, KC_3, KC_DOT, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                          KC_ESC, KC_ENT,  KC_LGUI,      KC_SPC,  XXXXXXX, KC_DEL
                                      //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [3] = LAYOUT_split_3x6_3(
      //TODO: Добавить увеличение звука и яркости
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX
                                      //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [4] = LAYOUT_split_3x6_3(
      // DESC: Для стрелок только левой рукой
      // Так же важно нажимать SPC и BSPC. Заметил часто надо, когда одной рукой что-то делаю
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      XXXXXXX, KC_EXLM, KC_AT,  KC_HASH, KC_DLR,  KC_PERC,                      KC_PEQL, KC_7, KC_8, KC_9, KC_PAST, KC_PSLS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, KC_LALT, KC_LEFT, KC_UP,  KC_DOWN, KC_RGHT,                         KC_0, KC_4, KC_5, KC_6, KC_PPLS, KC_MINS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,   KC_DEL, KC_BSPC,                     XXXXXXX, KC_1, KC_2, KC_3, KC_DOT,  XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                         KC_ESC, KC_LALT,  KC_LGUI,      KC_SPC,  XXXXXXX, XXXXXXX
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

   [5] = LAYOUT_split_3x6_3(
      // TODO: Для zmk пока пропускаю
      // Так же сами стрелки тут похоже не нужны. Правые стрелки с левым указ пальцем удобнее. Но вот эти нужны для навигации курсора мыши - KC_P4,   KC_P2, KC_P8,   KC_P6, KC_BTN1, KC_BTN2
  //╭──────────────────────────────────────────────────────────────────────╮     ╭──────────────────────────────────────────────────────╮
     XXXXXXX, XXXXXXX, XXXXXXX, OSM(MOD_HYPR), KC_ENT,  KC_SPC,                      KC_P4,   KC_P2, KC_P8,   KC_P6, KC_BTN1, KC_BTN2,
  //├──────────────────────────────────────────────────────────────────────┤     ├──────────────────────────────────────────────────────┤
     KC_GRV,                           OSM(MOD_LGUI|MOD_LSFT),
     OSM(MOD_LCTL|MOD_LSFT|MOD_LGUI),  OSM(MOD_LCTL|MOD_LALT|MOD_LGUI),
     OSM(MOD_LSFT|MOD_LALT|MOD_LGUI),  OSM(MOD_MEH),                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS,
  //├──────────────────────────────────────────────────────────────────────┤     ├──────────────────────────────────────────────────────┤
    KC_LGUI,                OSM(MOD_LCTL|MOD_LALT), OSM(MOD_LCTL|MOD_LGUI),
    OSM(MOD_LCTL|MOD_LSFT), OSM(MOD_LALT|MOD_LSFT), OSM(MOD_LALT|MOD_LGUI),       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //╰───────────────────────────────────────────────────────────────────────┤    ├─────────────────────────────────────────╯
                                         XXXXXXX, XXXXXXX,  MO(8),       XXXXXXX, XXXXXXX, XXXXXXX
                                     //╰────────+────────+─────────╯    ╰────────+─────────+────────╯
 ),

    [6] = LAYOUT_split_3x6_3(
      //TODO: Надо проверить, нужна ли данная. По сути она для того, чтобы одной рукой стрелки нажимать
      // Хотя вродя частенько ей занимаюсь
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

    [7] = LAYOUT_split_3x6_3(
      // TODO: По сути довольно бестолковая. И ее легко можно на правый безымянный добавить
      //  Ну и переключение на MO(8)
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      KC_TAB,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      KC_LSFT, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      KC_LCTL, KC_F11,  KC_F12,  KC_ENT,  KC_SPC,  KC_BSPC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                          KC_TRNS, KC_TRNS,  MO(8),     XXXXXXX,  XXXXXXX, XXXXXXX
                                      //╰───────────────────────────╯   ╰───────────────────────────╯
  ),

    [8] = LAYOUT_split_3x6_3(
      // TODO: По сути просто эксперимент/пример перехода на другой слой из слоя
  //╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
      XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_ENT,  KC_SPC,                      KC_PEQL, KC_7, KC_8, KC_9, KC_PAST, KC_PSLS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, KC_LEFT, KC_UP,  KC_DOWN, KC_RGHT,                       KC_0, KC_4, KC_5, KC_6, KC_PPLS, KC_MINS,
  //├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL, KC_BSPC,                       XXXXXXX, KC_1, KC_2, KC_3, KC_DOT, XXXXXXX,
  //╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                    XXXXXXX, XXXXXXX,  XXXXXXX,      KC_SPC,  KC_LGUI, KC_BSPC
                                   //╰───────────────────────────╯   ╰───────────────────────────╯
  )

};
