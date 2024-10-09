// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │Bsp├───┐   ┌───┤Ent│
      *               └───┤Tab│   │Spc├───┘
      *                   └───┘   └───┘
      *                   mit leader key oder function (windows + music + enter + esc)
      *                   numpad layer o
      *                   mouse layer
      */
    [0] = LAYOUT_split_4x6_2(
        KC_GRV,            KC_1,    KC_2,    KC_3,    KC_4,      KC_5,             KC_6,       KC_7,    KC_8,       KC_9,      KC_0,       KC_MINS,
        KC_TAB,            KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,             KC_Y,       KC_U,    KC_I,       KC_O,      KC_P,       KC_BSPC,
        LCTL_T(KC_ESC),    KC_A,    KC_S,    KC_D,    KC_F,      KC_G,             KC_H,       KC_J,    KC_K,       KC_L,      KC_SCLN,    KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,             KC_N,       KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_RSFT,
                                                      KC_SPC,    KC_LALT,          KC_LGUI,    LT(1,KC_SPC)
    ),
    [1] = LAYOUT_split_4x6_2(
        KC_F1,       KC_F2,      KC_F3,      KC_F4,      KC_F5,        KC_F6,               KC_F7,        KC_F8,      KC_F9,         KC_F10,       KC_F11,        KC_F12,
        KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_UP,      KC_TRNS,      KC_MAIL,             KC_TRNS,      KC_TRNS,    KC_NUHS,       KC_TRNS,      KC_TRNS,       KC_DEL,
        KC_TRNS,     KC_TRNS,    KC_LEFT,    KC_DOWN,    KC_RGHT,      KC_MYCM,             KC_NUBS,      KC_EQL,     KC_LBRC,       KC_QUOT,      KC_RBRC,       KC_TRNS,
        KC_TRNS,     QK_BOOT,    KC_MPRV,    KC_MPLY,    KC_MNXT,      KC_CALC,             TG(2),        TG(3),      KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_CAPS,
                                                         KC_TRNS,      KC_TRNS,             KC_TRNS,      KC_TRNS
    ),
    [2] = LAYOUT_split_4x6_2(
        KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,             KC_TRNS,      KC_TRNS,    KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,
        KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,             KC_TRNS,      KC_P7,      KC_P8,         KC_P9,        KC_TRNS,       KC_TRNS,
        KC_TRNS,     KC_PSLS,    KC_PAST,    KC_PMNS,    KC_PPLS,      KC_TRNS,             KC_TRNS,      KC_P4,      KC_P5,         KC_P6,        KC_TRNS,       KC_TRNS,
        KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,             TG(2),        KC_P1,      KC_P2,         KC_P3,        KC_TRNS,       KC_TRNS,
                                                         KC_PDOT,      KC_TRNS,             KC_PENT,      KC_P0
    ),
    [3] = LAYOUT_split_4x6_2(
        KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,             KC_TRNS,      KC_TRNS,    KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,
        KC_TRNS,     KC_TRNS,    KC_TRNS,    MS_UP,      KC_TRNS,      KC_TRNS,             KC_TRNS,      MS_BTN4,    MS_BTN5,       KC_TRNS,      KC_TRNS,       KC_TRNS,
        KC_TRNS,     KC_TRNS,    MS_LEFT,    MS_DOWN,    MS_RGHT,      KC_TRNS,             MS_BTN3,      MS_BTN1,    MS_BTN2,       KC_TRNS,      KC_TRNS,       KC_TRNS,
        KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,             KC_TRNS,      TG(3),      KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,
                                                         MS_WHLD,      KC_TRNS,             KC_TRNS,      MS_WHLU
    )
};
