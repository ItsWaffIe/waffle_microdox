#include QMK_KEYBOARD_H
#include "split_util.h"
#include "keycodes.h"
#include "unicodes.h"
#include "macros.h"
#include "combos.h"
#ifdef RGBLIGHT_ENABLE
#    include "rgb.c"
#endif
#ifdef OLED_DRIVER_ENABLE
#   include "oled.c"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x5_3(
    //-----------------------------------------------------------------------------------------------//
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    //-----------------------------------------------------------------------------------------------//
      SFA,     KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    SFCLN,
    //-----------------------------------------------------------------------------------------------//
      CTLTZ,   KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  CTLSLH,
    //-----------------------------------------------------------------------------------------------//
                        KC_LGUI, LOWER,   KC_SPC,       KC_BSPC, RAISE,   TG(3)
    ),

  [_LOWER] = LAYOUT_split_3x5_3(
    //-----------------------------------------------------------------------------------------------//
      KC_1,    KC_2,    KC_3,     KC_4,     KC_5,          KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
    //-----------------------------------------------------------------------------------------------//
      SFEXM,   KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,       KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  SFPRN,
    //-----------------------------------------------------------------------------------------------//
      CTLESC,  KC_TAB,  KC_CAPS,  KC_TILD,  KC_GRV,        KC_QUOT,  ALT_TAB,  KC_MPRV,  KC_MPLY,  CTLNXT,
    //-----------------------------------------------------------------------------------------------//
                        KC_PGUP,  KC_TRNS,  KC_SPC,        _______,  KC_TRNS,  KC_PGDN
    ),

  [_RAISE] = LAYOUT_split_3x5_3(
    //-----------------------------------------------------------------------------------------------//
      KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,      UNIT,     UNIT2,    GIT,      CONF,  MAKE,
    //-----------------------------------------------------------------------------------------------//
      KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,      ALT_TAB,  KC_UP,    X(HAP),  X(SIDE),  X(UPAR),
    //-----------------------------------------------------------------------------------------------//
      KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,        KC_LEFT,  KC_DOWN,  KC_RGHT,  ZAD,     SETUP,
    //-----------------------------------------------------------------------------------------------//
                            KC_VOLD, KC_TRNS, KC_SPC,       _______,  KC_TRNS, KC_VOLU
    ),

  [_ADJUST] = LAYOUT_split_3x5_3(
    //-----------------------------------------------------------------------------------------------//
      RESET,    RGB_TOG,  RGB_HUI, _______, _______,       _______,  _______, KC_ASON,  KC_ASUP,  UC_M_WC,
    //-----------------------------------------------------------------------------------------------//
      EEP_RST,  RGB_VAI,  RGB_HUD, _______, _______,       _______,  _______, KC_ASOFF, KC_ASDN,  UC_M_MA,
    //-----------------------------------------------------------------------------------------------//
      KC_LSFT,  RGB_VAD,  RGB_SAI, _______, _______,       _______,  _______, CG_SWAP,  CG_NORM,  UC_M_LN,
    //-----------------------------------------------------------------------------------------------//
                          RGB_SAD, KC_TRNS, _______,       _______,  KC_TRNS, TG(3)
    )

};
