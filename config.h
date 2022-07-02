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

/* pin B6to9 on f411blackpill is for twin i2c oled and mouse like devices, A4/5 is for dac audio */

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B5, B10, B12, B13, B14, B15, C13, C14 }
#define MATRIX_COL_PINS { A0, A1, A2, A3, A6, A7, A8, A9, A10 }

#define UNUSED_PINS C15,


/* COL2ROW, ROW2COL */

#define DIODE_DIRECTION COL2ROW

/* Indicator for caps/scr/num lock will be displayed in oled screen. 
for dedicated LEDs, write outside slashes, hash define LED_CAPS_LOCK_PIN xyzNumber hash define LED_PIN_ON_STATE 0 */


#ifdef AUDIO_ENABLE
#define AUDIO_PIN A5
#define AUDIO_PWM_DRIVER PWMD4
#define AUDIO_PWM_CHANNEL 1
#define AUDIO_STATE_TIMER GPTD1
#define AUDIO_CLICKY
#define MUSIC_MAP
#define AUDIO_ENABLE_TONE_MULTIPLEXING
#define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define ENCODERS_PAD_A { A11, A11 }
#define ENCODERS_PAD_B { A12, A15 }
#define ENCODER_RESOLUTIONS { 4, 2 }

#ifdef POINTING_DEVICE_ENABLE

#define I2C2_SCL_PIN                   B6
#define I2C2_SDA_PIN                   B7
#define CIRQUE_PINNACLE_ADDR           0x2A
#define CIRQUE_PINNACLE_TIMEOUT        20
#define CIRQUE_PINNACLE_X_LOWER        127
#define CIRQUE_PINNACLE_X_UPPER        1919
#define CIRQUE_PINNACLE_Y_LOWER        63
#define CIRQUE_PINNACLE_Y_UPPER        1471
#define CIRQUE_PINNACLE_TAPPING_TERM   200
#define CIRQUE_PINNACLE_TOUCH_DEBOUNCE 200

#endif

#ifdef OLED_ENABLE

#define OLED_DISPLAY_128X32
#define I2C1_SCL_PIN        B8
#define I2C1_SDA_PIN        B9
#define OLED_BRIGHTNESS 128
#define OLED_TIMEOUT 10000
#define OLED_IC OLED_IC_SSD1306


#endif




#ifdef RGBLIGHT_ENABLE

#define RGB2_DI_PIN B4
#define RGBLIGHT_LAYERS
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_LIMIT_VAL 200
#define RGBLIGHT_SLEEP
#define RGBLIGHT_DEFAULT_HUE 0
#define RGBLIGHT_DEFAULT_SAT 	200
#define RGBLIGHT_DEFAULT_VAL 130

#define RGBLED_NUM 108

/* RGB LED Conversion macro from physical array to electric array. 
First section is the LED matrix(the led here is beneath this matrix keyswitch position), 
second section is the electrical wiring order(data in to data out daisy chain serial no), 
and the third section is the desired mapping and direction to run animations */
#define LED_LAYOUT( \
    L000,       L002, L003,                                                             L014, \
    L100, L101, L102, L103, L104, L105, L106, L107, L108, L109, L110, L111, L112, L113, L114, L115, L116,  \
    L200, L201, L202, L203, L204, L205, L206, L207, L208, L209, L210, L211, L212, L213, L214, L215, L216,  \
    L300, L301, L302, L303, L304, L305, L306, L307, L308, L309, L310, L311, L312, L313, L314, L315, L316, L317,  \
    L400, L401, L402, L403, L404, L405, L406, L407, L408, L409, L410, L411, L412, L413, L414, L415, L416, L417,  \
    L500, L501, L502, L503, L504, L505, L506, L507, L508, L509, L510, L511, L512, L513, L514, L515, L516,  \
    L600, L601, L602, L603, L604, L605, L606, L607, L608, L609, L610, L611, L612, L613, L614, L615, L616 ) \
  { \
                L014,                                                             L003, L002,       L000,   \
    L100, L101, L102, L103, L104, L105, L106, L107, L108, L109, L110, L111, L112, L113, L114, L115, L116,  \
    L216, L215, L214, L213, L212, L211, L210, L209, L208, L207, L206, L205, L204, L203, L202, L201, L200,  \
    L300, L301, L302, L303, L304, L305, L306, L307, L308, L309, L310, L311, L312, L313, L314, L315, L316, L317,  \
    L417, L416, L415, L414, L413, L412, L411, L410, L409, L408, L407, L406, L405, L404, L403, L402, L401, L400,  \
    L500, L501, L502, L503, L504, L505, L506, L507, L508, L509, L510, L511, L512, L513, L514, L515, L516,  \
    L616, L615, L614, L613, L612, L611, L610, L609, L608, L607, L606, L605, L604, L603, L602, L601, L600 \
  } 

/* RGB LED logical order map */
/* Top->Bottom, Left->Right */
/* electric wiring...data line
c or u turn <--dout<--4 led<--DATA IN (starting point top row right)
            ..din --> 17 led --> dout ( turn down )
(turn down) .. dout<--17 led<--din
           ..  din--> 18 led --> dout (turn down)
(turn down) .. dout<--18 led<--din
            ..din --> 17 led --> dout (turn down)
(end point) .. dout<--17 led<--din */

#define RGBLIGHT_LED_MAP LED_LAYOUT( \
  0,     13, 20,                                         87,  \
  1,  7, 14, 21, 27, 33, 39, 45, 51, 57, 63, 69, 75, 81, 88, 94, 100, \
  2,  8, 15, 22, 28, 34, 40, 46, 52, 58, 64, 70, 76, 82, 89, 95, 101, \
  3,  9, 16, 23, 29, 35, 41, 47, 53, 59, 65, 71, 77, 83, 90, 96, 102, 106,\
  4, 10, 17, 24, 30, 36, 42, 48, 54, 60, 66, 72, 78, 84, 91, 97, 103, 107,\
  5, 11, 18, 25, 31, 37, 43, 49, 55, 61, 67, 73, 79, 85, 92, 98, 104, \
  6, 12, 19, 26, 32, 38, 44, 50, 56, 62, 68, 74, 80, 86, 93, 99, 105 )

#endif
