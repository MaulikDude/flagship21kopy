/*
Copyright 2021 Maulik Arvind Maradia Dr.Mo/ Mo-e-lectronics store>

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

/* USB Device descriptor parameter */
#define VENDOR_ID    0x6463
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER Mo-e-lectronics
#define PRODUCT      flagship

#define TAPPING_TERM 250

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { B0, B1, B3, B4, B5, B6, B7, B8, B9, B10, B12, B13 }
#define MATRIX_COL_PINS { A1, A2, A3, A4, A5, A6, A7, A8, A9 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Indicator LEDs */
#define LED_CAPS_LOCK_PIN B14
#define LED_PIN_ON_STATE 0

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
