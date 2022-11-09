#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_5x6_5(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, KC_LGUI, KC_LALT, TT(2), LT(6,KC_SPC), LT(4,KC_DEL), LT(4,KC_ENT), KC_SPC, LT(2,KC_BSPC), LALT_T(KC_RALT), KC_RGUI, LCTL_T(KC_LBRC), LCTL_T(KC_LBRC), LT(4,KC_ENT), RCTL_T(KC_RBRC)),
	[1] = LAYOUT_5x6_5(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, LCTL_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, KC_LGUI, KC_LALT, TT(2), LT(6,KC_SPC), LT(4,KC_DEL), LT(4,KC_ENT), KC_SPC, LT(2,KC_BSPC), LALT_T(KC_RALT), KC_RGUI, LCTL_T(KC_LBRC), LCTL_T(KC_LBRC), LT(4,KC_ENT), RCTL_T(KC_RBRC)),
	[2] = LAYOUT_5x6_5(QK_BOOT, KC_PWR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PWR, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_7, KC_7, KC_8, KC_9, KC_TRNS, KC_RBRC, KC_TRNS, DF(0), DF(1), KC_NO, MO(3), MO(3), KC_4, KC_4, KC_5, KC_6, KC_MINS, KC_EQL, KC_TRNS, MO(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_1, KC_2, KC_3, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_DEL, KC_ENT, KC_0, KC_BSPC, KC_TRNS, KC_TRNS, TG(2), KC_TRNS, KC_ENT, KC_TRNS),
	[3] = LAYOUT_5x6_5(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, MO(3), MO(3), KC_F4, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F1, KC_F2, KC_F3, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_DEL, KC_ENT, KC_SPC, KC_BSPC, KC_TRNS, KC_TRNS, TG(3), KC_TRNS, KC_ENT, KC_TRNS),
	[4] = LAYOUT_5x6_5(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_ESC, LCTL(KC_W), LCTL(KC_T), LCTL(KC_PGDN), LCTL(KC_PGDN), KC_PGDN, KC_HOME, KC_UP, KC_INS, LSFT(KC_INS), KC_ESC, KC_TRNS, KC_CAPS, LGUI(KC_LEFT), LGUI(KC_TAB), LGUI(KC_RGHT), LGUI(KC_RGHT), KC_LEFT, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_PSCR, KC_TRNS, KC_NO, KC_NO, KC_NO, LCTL(KC_PGUP), LCTL(KC_PGUP), KC_PGUP, KC_TRNS, KC_DOWN, KC_NO, KC_APP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_DEL, KC_ENT, KC_SPC, KC_BSPC, KC_TRNS, KC_TRNS, TG(4), KC_TRNS, KC_ENT, KC_TRNS),
	[5] = LAYOUT_5x6_5(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_MPLY, KC_VOLU, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_PWR, KC_TRNS, KC_NO, KC_MPRV, KC_MUTE, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLEP, KC_TRNS, MO(5), KC_NO, KC_VOLD, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_DEL, KC_ENT, KC_SPC, KC_BSPC, KC_TRNS, KC_TRNS, TG(5), TG(5), KC_ENT, KC_TRNS),
	[6] = LAYOUT_5x6_5(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_ACL1, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, KC_NO, KC_NO, KC_TRNS, KC_ACL2, KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_MS_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_TRNS, KC_ACL0, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_D, KC_NO, KC_MS_D, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_DEL, KC_ENT, KC_SPC, KC_BSPC, KC_TRNS, KC_TRNS, TG(6), KC_TRNS, KC_ENT, KC_TRNS)
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
  
    rgb_matrix_sethsv_noeeprom(HSV_YELLOW);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif 
  return true;
}