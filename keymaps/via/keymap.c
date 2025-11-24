#include QMK_KEYBOARD_H
#include "../../lib/rdr_lib/rdr_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        KC_ESC,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
  LT(3, KC_CAPS),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                      KC_RSFT,
        KC_LCTL,   KC_LGUI,  KC_LALT,                LT(2, KC_SPC),                                KC_RALT,  KC_RGUI,  KC_RCTL,      LT(4, KC_APP)
    ),
    [1] = LAYOUT_tkl_ansi(
        KC_F11,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_BTN4,  KC_BTN5,  KC_WH_U,
        KC_TAB,    KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_K,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_WH_L,  KC_WH_R,
        KC_LCTL,   KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,            KC_WH_D,
        KC_LSFT,   KC_X,     KC_C,     KC_D,     KC_Z,     KC_V,     KC_J,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,                      KC_RSFT,
  LT(3, KC_CAPS),  KC_LGUI,  KC_LALT,                LT(2, KC_SPC),                                KC_RALT,  KC_RGUI,  KC_RCTL,      LT(4, KC_APP)
    ),
    [2] = LAYOUT_tkl_ansi(
        KC_F12,    KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_MPLY,  KC_MPRV,  KC_MNXT,  KC_MSEL,  KC_MAIL,  KC_MYCM,  KC_CALC,  KC_BRID,  KC_BRIU,  KC_SLEP,
        KC_SPC,    KC_ESC,   KC_BSPC,  KC_UP,    KC_DEL,   KC_PGUP,  KC_HOME,  KC_GRV,   KC_MINS,  KC_EQL,   KC_BSLS,  KC_RBRC,  KC_SCRL,  KC_PAUS,
        KC_LCTL,   KC_ENT,   KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PGDN,  KC_END,   KC_GT,    KC_LCBR,  KC_LPRN,  KC_UNDS,  KC_PIPE,            KC_PSCR,
        KC_LSFT,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,                         KC_RSFT,
        KC_INS,    KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  KC_RGUI,  KC_RCTL,            TG(1)
    ),
    [3] = LAYOUT_tkl_ansi(
        KC_WHOM,   KC_WBAK,  KC_WFWD,  KC_WREF,  KC_WSTP,  KC_WSCH,  KC_WFAV,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_MSEL,
        KC_INS,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_SCRL,  KC_MPRV,  KC_BTN4,  KC_WH_U,  KC_BTN5,  KC_VOLU,  KC_BRIU,  KC_MYCM,  KC_CALC,
        KC_LCTL,   KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_PSCR,  KC_MNXT,  KC_WH_L,  KC_WH_D,  KC_WH_R,  KC_VOLD,  KC_BRID,            KC_MAIL,
        KC_LSFT,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_PAUS,  KC_MPLY,  KC_BTN1,  KC_BTN3,  KC_BTN2,  KC_MUTE,                      KC_RSFT,
        KC_LCTL,   KC_LGUI,  KC_LALT,                      KC_SLEP,                                KC_RALT,  KC_RGUI,  KC_RCTL,            KC_NO
    ),
    [4] = LAYOUT_tkl_ansi(
        LOGO_TOG,  MD_BLE1,  MD_BLE2,  MD_BLE3,  MD_24G,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,  KC_END,   KC_INS,   KC_DEL,
        KC_NO,     RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,  LOGO_MOD, LOGO_HUI, LOGO_SAI, LOGO_VAI, LOGO_SPI, KC_NO,    KC_NO,    KC_NO,
        KC_NO,     RGB_RMOD, RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_SPD,  LOGO_RMOD,LOGO_HUD, LOGO_SAD, LOGO_VAD, LOGO_SPD, KC_NO,              TG(4),
        KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PGUP,  KC_UP,                        KC_PGDN,
        U_EE_CLR,  QK_WLO,   QK_BAT,                       RGB_RTOG,                               KC_LEFT,  KC_DOWN,  KC_RGHT,            KC_NO
    )
};
