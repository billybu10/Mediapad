// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │🔇│⏯ │⏮ │⏭│
     * ├───┼───┼───┼───┤
     * │🔢│🌍 │📧 │⚙│
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_MUTE,   KC_MPLY,   KC_MPRV,   KC_MNXT,
        KC_CALC,   KC_WHOM, KC_MAIL, KC_CPNL
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_BRID, KC_BRIU)  },
};
#endif
