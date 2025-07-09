#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,



  SWITCH_TO_RU,
  SWITCH_TO_EN,
};



#define DUAL_FUNC_0 LT(14, KC_F12)
#define DUAL_FUNC_1 LT(13, KC_T)
#define DUAL_FUNC_2 LT(12, KC_F12)
#define DUAL_FUNC_3 LT(14, KC_G)
#define DUAL_FUNC_4 LT(2, KC_F23)
#define DUAL_FUNC_5 LT(12, KC_M)
#define DUAL_FUNC_6 LT(7, KC_5)
#define DUAL_FUNC_7 LT(2, KC_F22)
#define DUAL_FUNC_8 LT(6, KC_I)
#define DUAL_FUNC_9 LT(13, KC_5)
#define DUAL_FUNC_10 LT(14, KC_F5)
#define DUAL_FUNC_11 LT(12, KC_H)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    SWITCH_TO_RU,   CW_TOGG,        KC_NO,          KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,                                KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,
    ALL_T(KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           MEH_T(KC_G),                                    MEH_T(KC_H),    KC_J,           KC_K,           KC_L,           KC_SCLN,        ALL_T(KC_QUOTE),
    KC_LEFT_SHIFT,  MT(MOD_LALT, KC_Z),MT(MOD_LCTL, KC_X),MT(MOD_LGUI, KC_C),MT(MOD_LSFT, KC_V),KC_B,                                           KC_N,           MT(MOD_RSFT, KC_M),MT(MOD_RGUI, KC_COMMA),MT(MOD_RCTL, KC_DOT),MT(MOD_LALT, KC_SLASH),KC_RIGHT_SHIFT,
                                                    KC_BSPC,        LT(1, KC_TAB),                                  LT(2, KC_ENTER),KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_HASH,        KC_QUOTE,       KC_MINUS,       LALT(LSFT(KC_2)),KC_NO,          KC_UNDS,                                        KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_CIRC,
    KC_NUBS,        KC_DQUO,        KC_AMPR,        KC_EXLM,        KC_QUES,        KC_COLN,                                        KC_KP_MINUS,    KC_4,           KC_5,           KC_6,           KC_KP_SLASH,    KC_BSLS,
    KC_TRANSPARENT, DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    KC_SCLN,                                        KC_KP_EQUAL,    MT(MOD_RSFT, KC_1),MT(MOD_RGUI, KC_2),MT(MOD_RCTL, KC_3),MT(MOD_LALT, KC_DOT),KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [2] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,
    KC_NO,          KC_EQUAL,       KC_MINUS,       KC_LBRC,        KC_RBRC,        KC_NO,                                          LGUI(KC_LEFT),  LALT(KC_LEFT),  LALT(KC_RIGHT), LGUI(KC_RIGHT), LCTL(KC_F2),    KC_NO,
    KC_PIPE,        KC_LABK,        KC_RABK,        KC_LPRN,        KC_RPRN,        KC_COLN,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(KC_NUBS),  KC_NO,
    KC_TRANSPARENT, DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_4,    DUAL_FUNC_5,    KC_NO,                                          KC_NO,          RGUI(KC_DOWN),  RGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    SWITCH_TO_EN,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, LT(4, KC_TAB),                                  LT(5, KC_ENTER),KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LALT(KC_3),     LALT(RU_SHCH),  RU_MINS,        LALT(LSFT(KC_4)),RU_RUBL,        RU_UNDS,                                        KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, LALT(KC_6),
    LALT(KC_NUBS),  RU_DQUO,        LALT(KC_7),     RU_EXLM,        RU_QUES,        RU_COLN,                                        KC_KP_MINUS,    KC_4,           KC_5,           KC_6,           KC_KP_SLASH,    RU_BSLS,
    KC_TRANSPARENT, DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    RU_SCLN,                                        KC_KP_EQUAL,    MT(MOD_RSFT, KC_1),MT(MOD_RGUI, KC_2),MT(MOD_RCTL, KC_3),MT(MOD_LALT, RU_DOT),KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [5] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,
    KC_NO,          RU_EQL,         RU_MINS,        LSFT(KC_NUBS),  KC_NUBS,        RU_YO,                                          LGUI(KC_LEFT),  LALT(KC_LEFT),  LALT(KC_RIGHT), LGUI(KC_RIGHT), LCTL(KC_F2),    RU_HARD,
    LALT(LSFT(RU_BSLS)),LALT(LSFT(RU_BE)),LALT(LSFT(RU_YU)),RU_LPRN,        RU_RPRN,        RU_COLN,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(KC_NUBS),  KC_NO,
    KC_TRANSPARENT, KC_LEFT_ALT,    DUAL_FUNC_7,    DUAL_FUNC_10,   DUAL_FUNC_11,   KC_NO,                                          KC_NO,          RGUI(KC_DOWN),  RGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
       'L', 'L', 'L', 'L', 'L', 'L',    'R', 'R', 'R', 'R', 'R', 'R',
       'L', 'L', 'L', 'L', 'L', 'L',    'R', 'R', 'R', 'R', 'R', 'R',
       'L', 'L', 'L', 'L', 'L', 'L',    'R', 'R', 'R', 'R', 'R', 'R',
       'L', 'L', 'L', 'L', 'L', 'L',    'R', 'R', 'R', 'R', 'R', 'R',
                           '*', '*',    '*', '*'
  );


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_TAB):
            return TAPPING_TERM -20;
        case LT(2, KC_ENTER):
            return TAPPING_TERM -20;
        case MT(MOD_RCTL, KC_3):
            return TAPPING_TERM + 30;
        case MT(MOD_LALT, KC_DOT):
            return TAPPING_TERM + 30;
        case KC_LABK:
            return TAPPING_TERM + 30;
        case KC_RABK:
            return TAPPING_TERM -40;
        case DUAL_FUNC_1:
            return TAPPING_TERM + 30;
        case RU_RUBL:
            return TAPPING_TERM + 30;
        case DUAL_FUNC_7:
            return TAPPING_TERM + 30;
        case DUAL_FUNC_9:
            return TAPPING_TERM + 30;
        case MT(MOD_LALT, RU_DOT):
            return TAPPING_TERM + 30;
        case LALT(LSFT(RU_BE)):
            return TAPPING_TERM + 30;
        case LALT(LSFT(RU_YU)):
            return TAPPING_TERM -40;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [2] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [3] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [4] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [5] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {



     case SWITCH_TO_RU:
          if (record->event.pressed) {
            layer_move(3);

            register_code(KC_LALT);
            register_code(KC_LSFT);
            register_code(KC_LGUI);
            register_code(KC_LCTL);
            register_code(KC_F2);

            wait_ms(100);

            unregister_code(KC_F2);
            unregister_code(KC_LCTL);
            unregister_code(KC_LGUI);
            unregister_code(KC_LSFT);
            unregister_code(KC_LALT);
          }
          return false;

        case SWITCH_TO_EN:
          if (record->event.pressed) {
            layer_move(0);

            register_code(KC_LALT);
            register_code(KC_LSFT);
            register_code(KC_LGUI);
            register_code(KC_LCTL);
            register_code(KC_F1);

            wait_ms(100);

            unregister_code(KC_F1);
            unregister_code(KC_LCTL);
            unregister_code(KC_LGUI);
            unregister_code(KC_LSFT);
            unregister_code(KC_LALT);
          }
          return false;



    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(KC_NUBS));
        } else {
          unregister_code16(LSFT(KC_NUBS));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }
      }
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DLR);
        } else {
          unregister_code16(KC_DLR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }
      }
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_AT);
        } else {
          unregister_code16(KC_AT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }
      }
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PERC);
        } else {
          unregister_code16(KC_PERC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }
      }
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LCBR);
        } else {
          unregister_code16(KC_LCBR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }
      }
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RCBR);
        } else {
          unregister_code16(KC_RCBR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }
      }
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_NUBS)));
        } else {
          unregister_code16(LALT(LSFT(KC_NUBS)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }
      }
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_4));
        } else {
          unregister_code16(LALT(KC_4));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }
      }
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_2));
        } else {
          unregister_code16(LALT(KC_2));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }
      }
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RU_PERC);
        } else {
          unregister_code16(RU_PERC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }
      }
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_9)));
        } else {
          unregister_code16(LALT(LSFT(KC_9)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }
      }
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_0)));
        } else {
          unregister_code16(LALT(LSFT(KC_0)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}




uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_F):
            return 0;
        default:
            return QUICK_TAP_TERM;
    }
}