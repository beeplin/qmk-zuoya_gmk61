#include QMK_KEYBOARD_H
#include "../../lib/rdr_lib/rdr_common.h"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
  LT(1, KC_CAPS), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
        KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  KC_RGUI,  KC_RCTL,  LT(2, KC_APP)
    ),
    [1] = LAYOUT_tkl_ansi(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_SLEP,
        KC_APP,   KC_MPRV,  KC_BTN4,  KC_WH_U,  KC_BTN5,  KC_VOLU,  KC_PAST,  KC_P7,    KC_P8,    KC_P9,    KC_PMNS,  KC_PSCR,  KC_SCRL,  KC_PAUS,
        _______,  KC_MPLY,  KC_WH_L,  KC_BTN1,  KC_WH_R,  KC_MUTE,  KC_PSLS,  KC_P4,    KC_P5,    KC_P6,    KC_PPLS,  KC_PENT,  KC_NUM,
        _______,  KC_MNXT,  KC_BTN2,  KC_WH_D,  KC_BTN3,  KC_VOLD,  KC_P0,    KC_P1,    KC_P2,    KC_P3,    KC_PDOT,  _______,
        _______,  _______,  _______,                      KC_P0,                                  _______,  _______,  _______,  _______
    ),
    [2] = LAYOUT_tkl_ansi(
        LOGO_TOG, MD_BLE1,  MD_BLE2,  MD_BLE3,  _______,  _______,  _______,  _______,  _______,  KC_BRID,  KC_BRIU,  KC_VOLD,  KC_VOLU,  KC_MUTE,
        DM_REC1,  RGB_RMOD, RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,  LOGO_RMOD,LOGO_HUI, LOGO_SAI, LOGO_VAI, LOGO_SPI, KC_MPRV,  KC_MNXT,  KC_MPLY,
        DM_PLY1,  RGB_MOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_SPD,  LOGO_MOD, LOGO_HUD, LOGO_SAD, LOGO_VAD, LOGO_SPD, DM_REC2,  DM_PLY2,
        QK_AREP,  KC_SLEP,  KC_MYCM,  KC_CALC,  KC_MSEL,  QK_RBT,   NK_TOGG,  KC_MAIL,  KC_WBAK,  KC_WFWD,  KC_UP,    QK_REP,
        QK_BAT,   GU_TOGG,  AG_TOGG,                      RGB_TOG,                                KC_LEFT,  KC_DOWN,  KC_RGHT,  _______
    )
};
// qmk config user.qmk_home=~/git/qmk_firmware2_zuoya_gmk61 user.keyboard=zuoya/gmk61 user.keymap=via
