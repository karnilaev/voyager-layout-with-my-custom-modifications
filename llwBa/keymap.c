#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};


typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;
tap_dance_action_t *action;

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TO(3),          CW_TOGG,        ST_MACRO_0,     KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,                                KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_ESCAPE,      MT(MOD_LALT, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),MEH_T(KC_G),                                    MEH_T(KC_H),    MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RCTL, KC_L),MT(MOD_LALT, KC_SCLN),KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    KC_BSPC,        LT(1,KC_TAB),                                   LT(2,KC_ENTER), KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_HASH,        KC_QUOTE,       KC_MINUS,       LALT(LSFT(KC_2)),KC_NO,          KC_UNDS,                                        KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_CIRC,        
    KC_NUBS,        TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    KC_COLN,                                        KC_KP_MINUS,    MT(MOD_RSFT, KC_4),MT(MOD_RGUI, KC_5),MT(MOD_RCTL, KC_6),MT(MOD_LALT, KC_KP_SLASH),KC_BSLS,        
    KC_TRANSPARENT, LSFT(KC_NUBS),  KC_DLR,         KC_AT,          KC_PERC,        KC_SCLN,                                        KC_KP_EQUAL,    KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [2] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_NO,          KC_EQUAL,       KC_MINUS,       KC_LBRC,        KC_RBRC,        KC_NO,                                          LGUI(KC_LEFT),  LALT(KC_LEFT),  LALT(KC_RIGHT), LGUI(KC_RIGHT), LCTL(KC_F2),    KC_NO,          
    KC_PIPE,        TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    KC_COLN,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(KC_NUBS),  KC_NO,          
    KC_TRANSPARENT, LSFT(KC_NUBS),  KC_DLR,         KC_LCBR,        KC_RCBR,        KC_NO,                                          KC_NO,          RGUI(KC_DOWN),  RGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, LT(4,KC_TAB),                                   LT(5,KC_ENTER), KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LALT(KC_3),     LALT(RU_SHCH),  RU_MINS,        LALT(LSFT(KC_4)),RU_RUBL,        RU_UNDS,                                        KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, LALT(KC_6),     
    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   RU_COLN,                                        KC_KP_MINUS,    MT(MOD_RSFT, KC_4),MT(MOD_RGUI, KC_5),MT(MOD_RCTL, KC_6),MT(MOD_LALT, KC_KP_SLASH),RU_BSLS,        
    KC_TRANSPARENT, LALT(LSFT(KC_NUBS)),LALT(KC_4),     LALT(KC_2),     RU_PERC,        RU_SCLN,                                        KC_KP_EQUAL,    KC_1,           KC_2,           KC_3,           RU_DOT,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [5] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_NO,          RU_EQL,         RU_MINS,        LSFT(KC_NUBS),  KC_NUBS,        RU_YO,                                          LGUI(KC_LEFT),  LALT(KC_LEFT),  LALT(KC_RIGHT), LGUI(KC_RIGHT), LCTL(KC_F2),    RU_HARD,        
    LALT(LSFT(RU_BSLS)),TD(DANCE_13),   TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   RU_COLN,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(KC_NUBS),  KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_4),     LALT(LSFT(KC_9)),LALT(LSFT(KC_0)),KC_NO,                                          KC_NO,          RGUI(KC_DOWN),  RGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1,KC_TAB):
            return TAPPING_TERM -20;
        case LT(2,KC_ENTER):
            return TAPPING_TERM -20;
        case KC_3:
            return TAPPING_TERM + 30;
        case KC_DOT:
            return TAPPING_TERM + 30;
        case TD(DANCE_4):
            return TAPPING_TERM + 30;
        case TD(DANCE_5):
            return TAPPING_TERM -40;
        case KC_DLR:
            return TAPPING_TERM + 30;
        case RU_RUBL:
            return TAPPING_TERM + 30;
        case LALT(KC_4):
            return TAPPING_TERM + 30;
        case RU_PERC:
            return TAPPING_TERM + 30;
        case RU_DOT:
            return TAPPING_TERM + 30;
        case TD(DANCE_13):
            return TAPPING_TERM + 30;
        case TD(DANCE_14):
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
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

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
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_R))SS_DELAY(100)  SS_LSFT(SS_TAP(X_7))SS_DELAY(100)  SS_LSFT(SS_TAP(X_D)));
    }
    break;

    case TD(DANCE_0):
    case TD(DANCE_1):
    case TD(DANCE_2):
    case TD(DANCE_3):
    case TD(DANCE_4):
    case TD(DANCE_5):
    case TD(DANCE_6):
    case TD(DANCE_7):
    case TD(DANCE_8):
    case TD(DANCE_9):
    case TD(DANCE_10):
    case TD(DANCE_11):
    case TD(DANCE_12):
    case TD(DANCE_13):
    case TD(DANCE_14):
    case TD(DANCE_15):
    case TD(DANCE_16):
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }
        break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }


tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_TAP_HOLD(KC_DQUO, KC_LEFT_ALT),
        [DANCE_1] = ACTION_TAP_DANCE_TAP_HOLD(KC_AMPR, KC_LEFT_CTRL),
        [DANCE_2] = ACTION_TAP_DANCE_TAP_HOLD(KC_EXLM, KC_LEFT_GUI),
        [DANCE_3] = ACTION_TAP_DANCE_TAP_HOLD(KC_QUES, KC_LEFT_SHIFT),
        [DANCE_4] = ACTION_TAP_DANCE_TAP_HOLD(KC_LABK, KC_LEFT_ALT),
        [DANCE_5] = ACTION_TAP_DANCE_TAP_HOLD(KC_RABK, KC_LEFT_CTRL),
        [DANCE_6] = ACTION_TAP_DANCE_TAP_HOLD(KC_LPRN, KC_LEFT_GUI),
        [DANCE_7] = ACTION_TAP_DANCE_TAP_HOLD(KC_RPRN, KC_LEFT_SHIFT),
        [DANCE_8] = ACTION_TAP_DANCE_TAP_HOLD(LALT(KC_NUBS), KC_LEFT_ALT),
        [DANCE_9] = ACTION_TAP_DANCE_TAP_HOLD(RU_DQUO, KC_LEFT_ALT),
        [DANCE_10] = ACTION_TAP_DANCE_TAP_HOLD(LALT(KC_7), KC_LEFT_CTRL),
        [DANCE_11] = ACTION_TAP_DANCE_TAP_HOLD(RU_EXLM, KC_LEFT_GUI),
        [DANCE_12] = ACTION_TAP_DANCE_TAP_HOLD(RU_QUES, KC_LEFT_SHIFT),
        [DANCE_13] = ACTION_TAP_DANCE_TAP_HOLD(LALT(LSFT(RU_BE)), KC_LEFT_ALT),
        [DANCE_14] = ACTION_TAP_DANCE_TAP_HOLD(LALT(LSFT(RU_YU)), KC_LEFT_CTRL),
        [DANCE_15] = ACTION_TAP_DANCE_TAP_HOLD(RU_LPRN, KC_LEFT_GUI),
        [DANCE_16] = ACTION_TAP_DANCE_TAP_HOLD(RU_RPRN, KC_LEFT_SHIFT),
};
