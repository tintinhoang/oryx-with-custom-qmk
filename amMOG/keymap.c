#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           MO(3),          
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           NRW_OSTR,       NRW_ARNG,       
    KC_BSPC,        MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_S),MT(MOD_LGUI, KC_T),KC_G,                                           KC_M,           MT(MOD_RGUI, KC_N),MT(MOD_RSFT, KC_E),MT(MOD_LALT, KC_I),MT(MOD_RCTL, KC_O),NRW_AE,         
    KC_LEFT_GUI,    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           NRW_COMM,       NRW_DOT,        NRW_MINS,       NRW_PLUS,       
                                                    KC_SPACE,       MO(4),                                          MO(5),          KC_ENTER
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           MO(3),          
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           NRW_OSTR,       NRW_ARNG,       
    KC_BSPC,        MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_S),MT(MOD_LCTL, KC_T),KC_G,                                           KC_M,           MT(MOD_RCTL, KC_N),MT(MOD_RSFT, KC_E),MT(MOD_LALT, KC_I),MT(MOD_RGUI, KC_O),NRW_AE,         
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           NRW_COMM,       NRW_DOT,        NRW_MINS,       NRW_PLUS,       
                                                    KC_SPACE,       MO(4),                                          MO(6),          KC_ENTER
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           NRW_ARNG,       
    KC_LEFT_ALT,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           NRW_OSTR,       NRW_AE,         
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           NRW_COMM,       NRW_DOT,        NRW_MINS,       KC_LEFT_GUI,    
                                                    KC_SPACE,       KC_LEFT_CTRL,                                   KC_BSPC,        KC_ENTER
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RGB_HUD,        RGB_HUI,        RGB_SAD,        RGB_SAI,        RGB_VAD,        RGB_VAI,        
    KC_TRANSPARENT, KC_TRANSPARENT, TO(2),          TO(1),          TO(0),          KC_TRANSPARENT,                                 RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_SPD,        RGB_SPI,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LED_LEVEL,      HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,QK_LLCK,                                        KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DELETE,      KC_INSERT,      CW_TOGG,        KC_CAPS,        TOGGLE_SCROLL,                                  TOGGLE_SCROLL,  KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DRAG_SCROLL,                                    DRAG_SCROLL,    KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, NAVIGATOR_AIM,  KC_MS_BTN4,     KC_MS_BTN5,     KC_MS_BTN1,     KC_MS_BTN2,                                     KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 MO(7),          KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, NRW_LBRC,       NRW_LPRN,       NRW_RPRN,       NRW_RBRC,       NRW_SCLN,                                       NRW_COLN,       NRW_DQUO,       NRW_APOS_MAC,   NRW_GRV_MAC,    NRW_TILD,       NRW_ACUT_MAC,   
    KC_TRANSPARENT, NRW_LESS_MAC,   NRW_EXLM,       NRW_EQL,        NRW_GRTR_MAC,   NRW_QUES,                                       NRW_UNDS,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       NRW_PERC,       
    KC_TRANSPARENT, NRW_LCBR_MAC,   NRW_AMPR,       NRW_PIPE_MAC,   NRW_RCBR_MAC,   NRW_SLSH,                                       NRW_BSLS_MAC,   NRW_HASH,       NRW_CIRC,       NRW_DLR_MAC,    NRW_ASTR,       NRW_AT_MAC,     
                                                    KC_TRANSPARENT, MO(7),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, NRW_LBRC,       NRW_LPRN,       NRW_RPRN,       NRW_RBRC,       NRW_SCLN,                                       NRW_COLN,       NRW_DQUO,       NRW_QUOT,       NRW_GRV,        NRW_TILD,       NRW_ACUT,       
    KC_TRANSPARENT, NRW_LABK,       NRW_EXLM,       NRW_EQL,        NRW_RABK,       NRW_QUES,                                       NRW_UNDS,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       NRW_PERC,       
    KC_TRANSPARENT, NRW_LCBR,       NRW_AMPR,       NRW_PIPE,       NRW_RCBR,       NRW_SLSH,                                       NRW_BSLS,       NRW_HASH,       NRW_CIRC,       NRW_DLR,        NRW_ASTR,       NRW_AT,         
                                                    KC_TRANSPARENT, MO(7),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,                                         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'R', 'R'
);





extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(0);
    }
    return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}
