#include QMK_KEYBOARD_H
#include "../../lib/rdr_lib/rdr_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
    [0] = LAYOUT_tkl_ansi(
        KC_ESC,         KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,         KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS,        KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                      KC_RSFT,
        KC_LCTL,        KC_LGUI,  KC_LALT,                LT(1, KC_SPC),                                KC_LALT,  KC_APP,   KC_RCTL,            MO(4)
    ),
    [1] = LAYOUT_tkl_ansi(
        KC_GRV,         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_VOLD,  KC_VOLU,  KC_MUTE,
        KC_F11,         KC_HOME,  KC_BSPC,  KC_UP,    KC_DEL,   KC_PGUP,  KC_SLSH,  KC_7,     KC_8,     KC_9,     KC_MINS,  KC_MPRV,  KC_MNXT,  KC_MPLY,
        KC_F12,         KC_END,   KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PGDN,  KC_ASTR,  KC_4,     KC_5,     KC_6,     KC_PLUS,  KC_BRID,            KC_BRIU,
        KC_LSFT,        C(KC_Z),  C(KC_X),  C(KC_C),  C(KC_V),  KC_ENT,   KC_0,     KC_1,     KC_2,     KC_3,     KC_DOT,                       KC_RSFT,
        KC_LCTL,        KC_LGUI,  KC_LALT,                      KC_NO,                                   KC_LALT,  KC_INS,   KC_RCTL,           DF(2)
    ),
    [2] = LAYOUT_tkl_ansi(
        KC_TILD,        KC_LT,    KC_MINS,  KC_EQL,   KC_GT,    KC_GRV,   KC_PERC,  KC_AMPR,  KC_LPRN,  KC_LCBR,  KC_RCBR,  KC_RPRN,  KC_PIPE,  KC_EXLM,
        KC_UNDS,        KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS,
 LCTL_T(KC_CAPS),       KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,            KC_PLUS,
        KC_LSFT,        KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,     KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,                      KC_RSFT,
        KC_LCTL,        KC_LGUI,  KC_LALT,                LT(3, KC_SPC),                                KC_LALT,  KC_RGUI,  KC_RCTL,            MO(4)
    ),    
    [3] = LAYOUT_tkl_ansi(
        KC_INS,         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_VOLD,  KC_VOLU,  KC_MUTE,
 LALT_T(KC_F11), LCTL_T(KC_HOME), KC_BSPC,  KC_UP,    KC_PGUP,  KC_DEL,   KC_CIRC,  KC_7,     KC_8,     KC_9,     KC_DLR,   KC_MPRV,  KC_MNXT,  KC_MPLY,
 LCTL_T(KC_F12), LSFT_T(KC_ESC),  KC_LEFT,  KC_ENT,   KC_RGHT,  KC_PGDN,  KC_AT,    KC_4,     KC_5,     KC_6,     KC_0,     KC_APP,             KC_SCRL,
        KC_LSFT, LALT_T(KC_END),  KC_TAB,   KC_DOWN,  KC_WH_L,  KC_WH_R,  KC_HASH,  KC_1,     KC_2,     KC_3,     KC_ASTR,                      KC_RSFT,
 LCTL_T(KC_BRID),       KC_LGUI,  KC_LALT,                      KC_NO,                                  KC_LALT,  KC_RGUI,  RCTL_T(KC_BRIU),    DF(0)
    ),
    [4] = LAYOUT_tkl_ansi(
        KC_GRV,         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   U_EE_CLR,
        KC_TAB,         MD_BLE1,  MD_BLE2,  MD_BLE3,  MD_24G,   KC_PSCR,  KC_SCRL,  KC_PAUS,  KC_I,     KC_O,     KC_P,     RGB_SPD,  RGB_SPI,  RGB_MOD,
        KC_CAPS,        DF(0),    DF(2),    KC_D,     KC_F,     KC_INS,   KC_HOME,  KC_PGUP,  KC_K,     KC_L,     RGB_HUD,  RGB_HUI,            KC_ENT,
        KC_LSFT,        LOGO_MOD, LOGO_HUI, RGB_SAD,  RGB_SAI,  KC_DEL,   KC_END,   KC_PGDN,  RGB_VAD,  RGB_VAI,  KC_UP,                        QK_BAT,
        KC_LCTL,        QK_WLO,   KC_LALT,                      RGB_RTOG,                               KC_LEFT,  KC_DOWN,  KC_RGHT,            KC_NO
    )
};
