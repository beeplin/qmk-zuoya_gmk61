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
        KC_F11,         KC_PGUP,  KC_BSPC,  KC_UP,    KC_DEL,   KC_HOME,  KC_SLSH,  KC_7,     KC_8,     KC_9,     KC_PLUS,  KC_MPRV,  KC_MNXT,  KC_MPLY,
        KC_F12,         KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_END,   KC_ASTR,  KC_4,     KC_5,     KC_6,     KC_0,     KC_BRID,            KC_BRIU,
        KC_LSFT,        C(KC_Z),  C(KC_X),  C(KC_C),  C(KC_V),  KC_ENT,   KC_MINS,  KC_1,     KC_2,     KC_3,     KC_DOT,                       KC_RSFT,
        KC_LCTL,        KC_LGUI,  KC_LALT,                      KC_NO,                                  KC_LALT,  KC_INS,   KC_RCTL,            TO(2)
    ),
    [2] = LAYOUT_tkl_ansi(
        KC_GRV,         KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,         KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS,
 LCTL_T(KC_ESC),        KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,            KC_ENT,
        KC_LSFT,        KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,     KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,                      KC_RSFT,
 LCTL_T(KC_CAPS),       KC_LGUI,  KC_LALT,                LT(3, KC_SPC),                                KC_LALT,  KC_APP,   KC_RCTL,            MO(4)
    ),    
    [3] = LAYOUT_tkl_ansi(
        KC_F11,         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_VOLD,  KC_VOLU,  KC_MUTE,
        KC_F12,         KC_PGUP,  KC_BSPC,  KC_UP,    KC_DEL,   KC_GRV,   KC_BSLS,  KC_7,     KC_8,     KC_9,     KC_EQL,   KC_MPRV,  KC_MNXT,  KC_MPLY,
        KC_LCTL,        KC_LALT,  KC_LEFT,  KC_ENT,   KC_RGHT,  KC_TAB,   KC_QUOT,  KC_4,     KC_5,     KC_6,     KC_0,     KC_HOME,            KC_END,
        KC_LSFT,        KC_PGDN,  KC_WH_L,  KC_DOWN,  KC_WH_R,  KC_LBRC,  KC_RBRC,  KC_1,     KC_2,     KC_3,     KC_MINS,                      KC_RSFT,
        CW_TOGG,        KC_LGUI,  KC_LALT,                      KC_NO,                                  KC_LALT,  KC_INS,   KC_RCTL,            TO(0)
    ),
    [4] = LAYOUT_tkl_ansi(
        LOGO_TOG,       LOGO_RMOD,LOGO_MOD, LOGO_HUD, LOGO_HUI, LOGO_SAD, LOGO_SAI, LOGO_VAD, LOGO_VAI, LOGO_SPD, LOGO_SPI, KC_BRID,  KC_BRIU,  KC_PSCR,
        MD_USB,         MD_BLE1,  MD_BLE2,  MD_BLE3,  MD_24G,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_SCRL,
        KC_NO,          TO(0),    TO(2),    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_PAUS,
        RGB_RMOD,       RGB_MOD,  RGB_HUD,  RGB_HUI,  RGB_SAD,  RGB_SAI,  RGB_VAD,  RGB_VAI,  RGB_SPD,  RGB_SPI,  KC_UP,                        KC_NO,
        U_EE_CLR,       QK_WLO,   QK_BAT,                       RGB_RTOG,                               KC_LEFT,  KC_DOWN,  KC_RGHT,            KC_NO
    )
};
