#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _NUM,
  _SYM,
  _CTL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
	KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O, LT(_CTL, KC_P),
	KC_A,  KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, LT(_CTL, KC_MINS),
	KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM, KC_DOT,
	KC_NO, KC_LALT, KC_LCTL, KC_LGUI, LT(_SYM, KC_SPACE), KC_RSFT, LT(_NUM, KC_MINS), KC_NO
	),

	[_NUM] = LAYOUT(
	KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO,
	KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO,
	KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_0, KC_1, KC_2, KC_3,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[_SYM] = LAYOUT(
	KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
	KC_SLSH, KC_GRV, KC_SCLN, KC_QUOT, KC_BSLS, KC_PLUS, KC_EQL, KC_LBRC, KC_RBRC, KC_RBRC,
        KC_QUES, KC_TILD, KC_COLN, KC_DQT, KC_PIPE, KC_LT, KC_GT, KC_LCBR, KC_RCBR,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[_CTL] = LAYOUT(
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_ENT, KC_TAB, KC_ESC, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	)
};
