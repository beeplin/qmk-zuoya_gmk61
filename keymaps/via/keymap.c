#include QMK_KEYBOARD_H
#include "../../lib/rdr_lib/rdr_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        KC_ESC,         KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,         KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS,        KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                      KC_RSFT,
        KC_LCTL,        KC_LGUI,  KC_LALT,                LT(2, KC_SPC),                                KC_LALT,  KC_APP,   KC_RCTL,            MO(4)
    ),
    [1] = LAYOUT_tkl_ansi(
        KC_GRV,         KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,         KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS,
 LCTL_T(KC_CAPS),       KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,            KC_ENT,
        KC_LSFT,        KC_X,     KC_C,     KC_D,     KC_V,     KC_Z,     KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,                      KC_RSFT,
        KC_LCTL,        KC_LGUI,  KC_LALT,                LT(2, KC_SPC),                                KC_LALT,  KC_APP,   KC_RCTL,            MO(4)
    ),
    [2] = LAYOUT_tkl_ansi(
        KC_F11,         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_VOLD,  KC_VOLU,  KC_MUTE,
 LALT_T(KC_F12),        KC_ESC,   KC_BSPC,  KC_UP,    KC_DEL,   KC_PGUP,  KC_HOME,  KC_7,     KC_8,     KC_9,     KC_0,     KC_MPRV,  KC_MNXT,  KC_MPLY,
        KC_LCTL,        KC_ENT,   KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PGDN,  KC_END,   KC_4,     KC_5,     KC_6,     KC_MINS,  KC_EQL,             CW_TOGG,
        KC_LSFT,        KC_BTN2,  KC_BTN3,  KC_BTN1,  KC_WH_L,  KC_WH_R,  KC_UNDS,  KC_1,     KC_2,     KC_3,     KC_GRV,                       KC_RSFT,
 LCTL_T(KC_BTN4),LGUI_T(KC_BTN5), KC_LALT,                      KC_NO,                                  KC_LALT,  KC_INS,   KC_RCTL,            KC_NO
    ),
    [3] = LAYOUT_tkl_ansi(
        KC_F11,         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_VOLD,  KC_VOLU,  KC_MUTE,
        KC_F12,         KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_LCTL,        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_PLUS,  KC_UNDS,  KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_GRV,             KC_TILD,
        KC_LSFT,        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_MINS,  KC_EQL,   KC_LT,    KC_GT,    KC_BSLS,                      KC_RSFT,
        KC_NO,          KC_LGUI,  KC_LALT,                      KC_F11,                                 KC_LALT,  KC_APP,   KC_RCTL,            KC_NO
    ),
    [4] = LAYOUT_tkl_ansi(
        LOGO_TOG,       MD_BLE1,  MD_BLE2,  MD_BLE3,  MD_24G,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_BRID,  KC_BRIU,  KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_NO,          KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        LOGO_RMOD,      LOGO_MOD, LOGO_HUD, LOGO_HUI, LOGO_SAD, LOGO_SAI, LOGO_VAD, LOGO_VAI, LOGO_SPD, LOGO_SPI, KC_NO,    KC_NO,              TG(1),
        RGB_RMOD,       RGB_MOD,  RGB_HUD,  RGB_HUI,  RGB_SAD,  RGB_SAI,  RGB_VAD,  RGB_VAI,  RGB_SPD,  RGB_SPI,  KC_UP,                        KC_INS,
        U_EE_CLR,       QK_WLO,   QK_BAT,                       RGB_RTOG,                               KC_LEFT,  KC_DOWN,  KC_RGHT,            KC_NO
    )
};
