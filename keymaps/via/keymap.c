#include QMK_KEYBOARD_H
#include "../../lib/rdr_lib/rdr_common.h"

#define KANATA 0
#define COLMAK 1
#define EXTRA1 2
#define EXTRA2 3
#define CONFIG 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [KANATA] = LAYOUT_tkl_ansi(
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
        KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  KC_RGUI,  KC_RCTL,  LT(CONFIG, KC_APP)
    ),
    [COLMAK] = LAYOUT_tkl_ansi(
        KC_F11,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_WH_L,  KC_WH_R,  KC_BTN1,  KC_BTN3,  KC_BTN2,  KC_BTN4,  KC_BTN5,  KC_WH_U,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_K,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_WH_L,  KC_WH_R,
 LCTL_T(KC_ESC),  KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,            KC_WH_D,
    OSM(MOD_LSFT),KC_X,     KC_C,     KC_D,     KC_Z,     KC_V,     KC_J,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,  _______,
     MO(EXTRA2),  _______,  _______,           LT(EXTRA1, KC_SPC),                                _______,  _______,  _______,  _______
    ),
    [EXTRA1] = LAYOUT_tkl_ansi(
        KC_F12,   KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_PSCR,  KC_SCRL,  KC_PAUS,  KC_BRID,  KC_BRIU,  KC_VOLD,  KC_VOLU,  KC_MUTE,
        KC_INS,   KC_HOME,  KC_BSPC,  KC_UP,    KC_DEL,   KC_PGUP,  KC_GRV,   KC_BSLS,  KC_MINS,  KC_EQL,   KC_END,   KC_RBRC,  KC_MPRV,  KC_MNXT,
 LCTL_T(KC_CAPS), KC_ENT,   KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PGDN,  KC_GT,    KC_LCBR,  KC_LPRN,  KC_LBRC,  KC_QUOT,  KC_SPC,             KC_MPLY,
        _______,  KC_2,     KC_3,     KC_4,     KC_1,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
        _______,  _______,  _______,                      _______,                                _______,  _______,  _______,  QK_REP
    ),
    [EXTRA2] = LAYOUT_tkl_ansi(
        KC_F24,   KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,   KC_F23,   KC_PPLS,  KC_PAST,
        KC_SLEP,  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_PSCR,  KC_BRID,  KC_WH_U,  KC_BRIU,  KC_VOLU,  KC_BTN4,  KC_PMNS,  KC_PSLS,
        KC_LCTL,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_SCRL,  KC_WH_L,  KC_WH_D,  KC_WH_R,  KC_VOLD,  KC_BTN5,            KC_NUM,
        KC_LSFT,  KC_BTN2,  KC_BTN3,  KC_BTN1,  KC_F11,   KC_F12,   KC_PAUS,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  _______,
        _______,  _______,  _______,                      _______,                                _______,  _______,  _______,  QK_AREP
    ),
    [CONFIG] = LAYOUT_tkl_ansi(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,
        KC_PGUP,  MD_BLE1,  MD_BLE2,  MD_BLE3,  KC_PSCR,  KC_SCRL,  KC_PAUS,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SLEP,  KC_HOME,  KC_END,   KC_INS,
        KC_PGDN,  RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,  LOGO_SPI, LOGO_VAI, LOGO_SAI, LOGO_HUI, LOGO_MOD, LOGO_RMOD,          LOGO_TOG,
     TO(KANATA),  RGB_RMOD, RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_SPD,  LOGO_SPD, LOGO_VAD, LOGO_SAD, LOGO_HUD, KC_UP,    TO(COLMAK),
        QK_BAT,   GU_TOGG,  AG_TOGG,                      RGB_TOG,                                KC_LEFT,  KC_DOWN,  KC_RGHT,  _______
    )
};
// qmk config user.qmk_home=~/git/qmk_firmware2_zuoya_gmk61 user.keyboard=zuoya/gmk61 user.keymap=via

