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
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */


#include QMK_KEYBOARD_H

// LAYERS
#define L2_TAB LT(MO(2), KC_TAB)   	// Tap for tab, hold for L2
#define L2_ENT LT(MO(2), KC_ENT)   	// Tap for tab, hold for L2
#define L1_SPC LT(MO(1), KC_SPC)    // Tap for space, hold for L1
#define L1_GRV LT(MO(1), KC_GRAVE)  // Tap for space, hold for L1

// SHORTCUTS
#define ZM_IN LCTL(KC_EQUAL)      	// Zoom in
#define ZM_OUT LCTL(KC_MINUS)      	// Zoom out

// Cursor navigation 
#define NX_WRD LCTL(KC_LEFT)				// Move to next word
#define PV_WRD LCTL(KC_RGHT)				// Move to prev word
#define LN_STR KC_HOME							// Move to beginning of line
#define LN_END KC_END								// Move to end of line

// Text selection 
#define SEL_PV LSFT(LCTL(KC_LEFT))	// Select next word
#define SEL_NX LSFT(LCTL(KC_RGHT))	// Select prev word
#define SEL_ST LSFT(KC_HOME)				// Select to beginning of line
#define SEL_EN LSFT(KC_END)					// Select to end of line



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[0] = LAYOUT(
			/*
			 * █▄▄ ▄▀█ █▀ █▀▀
			 * █▄█ █▀█ ▄█ ██▄
			 */                                           
			KC_ESC, 	KC_1,   	KC_2,   	KC_3,   	KC_4,   	KC_5,   	KC_6,    	KC_7,   	KC_8,   	KC_9,    	KC_0,     KC_MINS,  KC_EQL,  	KC_BSPC,  KC_ESC,
		  L2_TAB,   KC_Q,   	KC_W,   	KC_E,   	KC_R,   	KC_T,   	KC_Y,    	KC_U,   	KC_I,   	KC_O,    	KC_P,     KC_LBRC,  KC_RBRC, 	KC_BSLASH,ZM_IN,
			L1_GRV,   KC_A,   	KC_S,   	KC_D,   	KC_F,   	KC_G,   	KC_H,    	KC_J,   	KC_K,   	KC_L,    	KC_SCLN,  KC_QUOT,           	KC_ENT,   ZM_OUT,
		  KC_LSPO,  KC_Z,   	KC_X,   	KC_C,   	KC_V,   	KC_B,   	KC_TRNS,  KC_N,   	KC_M,   	KC_COMM, 	KC_DOT,   KC_SLSH,  KC_RSPC, 	KC_UP,
		  KC_LGUI,            KC_LALT,	KC_LCTL,	KC_BSPC,        	  L1_SPC,  	L2_ENT,                                       		KC_LEFT, 	KC_DOWN,  KC_RIGHT),
		[1] = LAYOUT(
			/*
			 * █▀▀ █░█ █▄░█ █▀▀ ▀█▀ █ █▀█ █▄░█
			 * █▀░ █▄█ █░▀█ █▄▄ ░█░ █ █▄█ █░▀█
			 */  
			RESET,  	KC_F1,    KC_F2,   	KC_F3,  	KC_F4,   	KC_F5,   	KC_F6,   	KC_F7,   	KC_F8,   	KC_F9,   	KC_F10,   KC_F11,  	KC_F12,  	KC_DEL,   KC_TRNS,
		  KC_TRNS,  RGB_TOG,  RGB_MOD, 	RGB_HUI,	RGB_SAI, 	RGB_VAI, 	KC_TRNS, 	NX_WRD, 	LN_STR, 	LN_END, 	PV_WRD, 	KC_TRNS,  KC_TRNS, 	KC_TRNS,  KC_BRIU,
			KC_TRNS,  SEL_PV,   SEL_ST, 	SEL_EN,		SEL_NX, 	KC_TRNS, 	KC_TRNS, 	KC_LEFT, 	KC_UP,   	KC_DOWN, 	KC_RGHT,  KC_TRNS,          	KC_MPLY,  KC_BRID,
		  KC_ASTG,  KC_TRNS,  KC_TRNS, 	KC_TRNS,	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS,  KC_TRNS, 	KC_MUTE, 	KC_VOLU,
		  KC_TRNS,            KC_TRNS, 	CG_TOGG,  KC_DEL,           	KC_TRNS,  KC_TRNS,                    											KC_MPRV, 	KC_VOLD,  KC_MNXT),
		[2] = LAYOUT(
			/*
			 * █▄░█ █░█ █▀▄▀█ █▀█ ▄▀█ █▀▄
			 * █░▀█ █▄█ █░▀░█ █▀▀ █▀█ █▄▀
			 */  
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P7, 		KC_P8, 		KC_P9,		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P4, 		KC_P5, 		KC_P6,    KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
		  KC_TRNS,  KC_TRNS,  KC_TRNS, 	KC_TRNS,	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_P1, 		KC_P2, 		KC_P3,		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS,
		  KC_TRNS,            KC_TRNS, 	KC_TRNS,  KC_TRNS,           	KC_P0,  	KC_TRNS,                    											KC_TRNS,  KC_TRNS,  KC_TRNS),
 };



/*
 * █▀▀ █▀█ █▀▄ █▀▀ █▀
 * █▄▄ █▄█ █▄▀ ██▄ ▄█
 */ 

// RGB_TOG			Toggle RGB lighting on or off
// RGB_MOD			Cycle through modes, reverse direction when Shift is held
// RGB_RMOD			Cycle through modes in reverse, forward direction when Shift is held
// RGB_HUI			Increase hue, decrease hue when Shift is held
// RGB_HUD			Decrease hue, increase hue when Shift is held
// RGB_SAI			Increase saturation, decrease saturation when Shift is held
// RGB_SAD			Decrease saturation, increase saturation when Shift is held
// RGB_VAI			Increase value (brightness), decrease value when Shift is held
// RGB_VAD			Decrease value (brightness), increase value when Shift is held
// RGB_SPI			Increase effect speed (does not support eeprom yet), decrease speed when Shift is held
// RGB_SPD			Decrease effect speed (does not support eeprom yet), increase speed when Shift is held`