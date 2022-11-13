/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define PRODUCT_ID 0x3536
#define DEVICE_VER 0x0002

#define USE_SERIAL
//#undef SOFT_SERIAL_PIN
//#define SOFT_SERIAL_PIN D1 // is #2 on pro micro
#define SOFT_SERIAL_PIN D0
#define SPLIT_USB_DETECT
#define SPLIT_MAX_CONNECTION_ERRORS 10

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }
//#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
//#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4, B5 }

//#define DIODE_DIRECTION COL2ROW
#define DIODE_DIRECTION ROW2COL

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D3
#define DRIVER_LED_TOTAL 54
#define RGB_MATRIX_SPLIT { 27, 27 }
#define RGB_MATRIX_CENTER { 142, 23 }
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 160 // (40:ok; 80:ok, 100:ok, 140: ok) limits maximum brightness of LEDs (out of 255). If not defined maximum brightness is set to 255
#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define BOOTMAGIC_LITE_ROW_RIGHT 6
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

	

//#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
//#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
