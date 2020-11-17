/* Copyright 2020 Jordan Egstad
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include QMK_KEYBOARD_H

//hold untab?


// Layers
#define LT_ENT LT(MO(1), KC_ENT)          // Tap for space, hold for L1
#define LT_BSP LT(MO(1), KC_BSPC)         // Tap for backspace, hold for L1


// Modifiers
#define LG_ZMIN LGUI(KC_EQUAL)          // Command + plus (zoom in)
#define LG_ZMOT LGUI(KC_MINUS)          // Command + minus (zoom out)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[0] = LAYOUT( /* Base */
			KC_GESC,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   RESET,
		    KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC, KC_BSLASH, LG_ZMIN,
			LT_BSP,     KC_A,   KC_S,   KC_D,   KC_F,   KC_G,    KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_QUOT,           KC_ENT,    LG_ZMOT,
		    KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,    MO(1),   KC_N,   KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
		    KC_LCTL,            KC_LALT,KC_LGUI,KC_BSPC,         KC_SPC,  LT_ENT,                                       KC_LEFT, KC_DOWN,   KC_RIGHT),
		[1] = LAYOUT( /* FN */
			KC_TRNS,       KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  RESET,   KC_ASTG,
		    KC_TRNS,       RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SLCK,  KC_PAUS, RESET,    KC_PGUP,
			KC_TRNS,       RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          EEP_RST,  KC_PGDN,
		    KC_LSFT,       KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_VOLU, KC_MUTE,
		    KC_TRNS,                 KC_TRNS, KC_TRNS,         KC_TRNS,           KC_TRNS,         KC_TRNS,                    KC_MPRV, KC_VOLD,  KC_MNXT),
 };
