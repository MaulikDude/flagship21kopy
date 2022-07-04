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

#ifdef RGB_matrix_ENABLE

#define RGB_DI_PIN B4
#define DRIVER_LED_TOTAL 122
#define HAS_FLAGS(bits, flags)	Returns true if bits has all flags set
#define HAS_ANY_FLAGS(bits, flags)	Returns true if bits has any flags set
#define LED_FLAG_NONE 0x00	      If this LED has no flags.
#define LED_FLAG_ALL 0xFF	      If this LED has all flags.
#define LED_FLAG_MODIFIER 0x01	If the Key for this LED is a modifier.
#define LED_FLAG_UNDERGLOW 0x02	If the LED is for underglow.
#define LED_FLAG_KEYLIGHT 0x04	If the LED is for key backlight.

/* The  first part, Key Matrix to LED Index is the sequence no, of LED in electric DIN-DOUT chain, starting closest to mcu. All the font key switches are daisy chained as shown in simple english in sequence in "RGB LED logical order map", below. The underglow side strips are daisy chained at last, with detachable wire. If  your alternate firmware permits seperate gpio pin allocation for rgb of font backlight and rgb of  underglow, then this keeps the possibility  open. Just remove the wire in that case
In qmk, even if you allocate seperate gpio pin, both RGB MATRIX AND RGB LIGHT DO NOT WORK AT SAME TIME. You have to disable one in rules dot mk file.
The second part LED Index to Physical Position represents the LED's physical position{ x, y }.This xy is NOT what you get in keyboard layout editor raw data file or json file. The top left of the keyboard { x, y }={ 0, 0 } and the bottom right={ 224, 64 }. Here there is 3 more led columns than keyswitch columns accounting for right and left underglow columns, beyond keyswitches. . underglow leds have 6 leds on left column, 4+4 leds on 2xright column, with direction flipped upside down in 4+4 cluster, one of it being allocated to custom name plate. 
x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION. The "minus one" part is the COMPENSATION, as row & col numbering starts at zero, rather than one. Otherwise its straightforward formula. line of 18 objects,each jump at value of 5, then 8th position object value is 8x5
Where NUMBER_OF_COLS, NUMBER_OF_ROWS, COL_POSITION, & ROW_POSITION are all based on the physical layout of your keyboard, not the electrical layout data sequence.
// LED Index to Flag is a bitmask, whether or not a certain LEDs is of a certain type. It is recommended that LEDs are set to only 1 type. If you want to use single under font  backlight as caps/scroll/num-lock indicator/ as layer indicator, using light under shift switch as  capital layer indicator etc, then tinker with this part. normal backlight=4, modifier=2, underglow=1. In qmk, even if you allocate seperate gpio pin, both RGB MATRIX AND RGB LIGHT DO NOT WORK AT SAME TIME. You have to disable one in rules dot mk file.

*/
const led_config_t g_led_config = { {
  // Key Matrix to LED Index
       { 3,  2,  1,  0 },
  {113,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },
  {112, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21 },
  {111, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 114, 121 },
  {110, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 115, 120 },
  {109, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 116, 119 },
  {108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 117, 118 }
        
  
}, {
  // LED Index to Physical Position
/* by the formula above , x= 0,  11.2,  22.4,  33.6,  44.8,  56,   67.2,   78.4,  89.6,  100.8,  112, 123.2, 134.4, 145.6, 156.7, 167.8,  179,  190.2, 201.4, 212.6, 223.8, 234.9 
y= 0,
   10.66,
   21.33,
   31.98,
   42.64,
   53.3,
   63.96
*/
   
           	  { 11.2, 0 },   { 22.4, 0 },   { 33.6, 0 },   { 44.8, 0 },
	{ 0, 10.66 }, { 11.2, 10.66 }, { 22.4, 10.66 }, { 33.6, 10.66 }, { 44.8, 10.66 }, { 56, 10.66 }, { 67.2, 10.66 }, {  78.4, 10.66 }, { 89.6, 10.66 }, { 100.8, 10.66 }, { 112, 10.66 }, { 123.2, 10.66 }, { 134.4, 10.66 }, { 145.6, 10.66 }, { 156.7, 10.66 }, { 179, 10.66 }, { 190.2, 10.66 }, { 201.4, 10.66 },
  	{ 0, 21.33 }, { 11.2, 21.33 }, { 22.4, 21.33 }, { 33.6, 21.33 }, { 44.8, 21.33 }, { 56, 21.33 }, { 67.2, 21.33 }, {  78.4, 21.33 }, { 89.6, 21.33 }, { 100.8, 21.33 }, { 112, 21.33 }, { 123.2, 21.33 }, { 134.4, 21.33 }, { 145.6, 21.33 }, { 156.7, 21.33 }, { 179, 21.33 }, { 190.2, 21.33 }, { 201.4, 21.33 },
  	{ 0, 31.98 }, { 11.2, 31.98 }, { 22.4, 31.98 }, { 33.6, 31.98 }, { 44.8, 31.98 }, { 56, 31.98 }, { 67.2, 31.98 }, {  78.4, 31.98 }, { 89.6, 31.98 }, { 100.8, 31.98 }, { 112, 31.98 }, { 123.2, 31.98 }, { 134.4, 31.98 }, { 145.6, 31.98 }, { 156.7, 31.98 }, { 179, 31.98 }, { 190.2, 31.98 }, { 201.4, 31.98 }, { 212.6, 31.98 }, { 223.8, 31.98 }, { 234.9, 31.98 },
  	{ 0, 42.64 }, { 11.2, 42.64 }, { 22.4, 42.64 }, { 33.6, 42.64 }, { 44.8, 42.64 }, { 56, 42.64 }, { 67.2, 42.64 }, {  78.4, 42.64 }, { 89.6, 42.64 }, { 100.8, 42.64 }, { 112, 42.64 }, { 123.2, 42.64 }, { 134.4, 42.64 }, { 145.6, 42.64 }, { 156.7, 42.64 }, { 179, 42.64 }, { 190.2, 42.64 }, { 201.4, 42.64 }, { 212.6, 42.64 }, { 223.8, 42.64 }, { 234.9, 42.64 },
  	{ 0, 53.3 }, { 11.2, 53.3 }, { 22.4, 53.3 }, { 33.6, 53.3 }, { 44.8, 53.3 }, { 56, 53.3}, { 67.2, 53.3 }, {  78.4, 53.3 }, { 89.6, 53.3 }, { 100.8, 53.3 }, { 112, 53.3 }, { 123.2, 53.3 }, { 134.4, 53.3 }, { 145.6, 53.3 }, { 156.7, 53.3 }, { 179, 53.3 }, { 190.2, 53.3 }, { 201.4, 53.3 }, { 212.6, 53.3 }, { 223.8, 53.3 }, { 234.9, 53.3 },
  	{ 0, 63.96 }, { 11.2, 63.96 }, { 22.4, 63.96 }, { 33.6, 63.96 }, { 44.8, 63.96 }, { 56, 63.96 }, { 67.2, 63.96 }, {  78.4, 63.96 }, { 89.6, 63.96 }, { 100.8, 63.96 }, { 112, 63.96 }, { 123.2, 63.96 }, { 134.4, 63.96 }, { 145.6, 63.96 }, { 156.7, 63.96 }, { 179, 63.96 }, { 190.2, 63.96 }, { 201.4, 63.96 }, { 212.6, 63.96 }, { 223.8, 63.96 }, { 234.9, 63.96 }
}, {
  // LED Index to Flag
     4, 4, 4, 4,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2  
} 
};

enum rgb_matrix_effects {
    RGB_MATRIX_NONE = 0,
    RGB_MATRIX_SOLID_COLOR = 1,     // Static single hue, no speed support
    RGB_MATRIX_ALPHAS_MODS,         // Static dual hue, speed is hue for secondary hue
    RGB_MATRIX_GRADIENT_UP_DOWN,    // Static gradient top to bottom, speed controls how much gradient changes
    RGB_MATRIX_BREATHING,           // Single hue brightness cycling animation
    RGB_MATRIX_BAND_SAT,        // Single hue band fading saturation scrolling left to right
    RGB_MATRIX_BAND_VAL,        // Single hue band fading brightness scrolling left to right
    RGB_MATRIX_BAND_PINWHEEL_SAT,   // Single hue 3 blade spinning pinwheel fades saturation
    RGB_MATRIX_BAND_PINWHEEL_VAL,   // Single hue 3 blade spinning pinwheel fades brightness
    RGB_MATRIX_BAND_SPIRAL_SAT,     // Single hue spinning spiral fades saturation
    RGB_MATRIX_BAND_SPIRAL_VAL,     // Single hue spinning spiral fades brightness
    RGB_MATRIX_CYCLE_ALL,           // Full keyboard solid hue cycling through full gradient
    RGB_MATRIX_CYCLE_LEFT_RIGHT,    // Full gradient scrolling left to right
    RGB_MATRIX_CYCLE_UP_DOWN,       // Full gradient scrolling top to bottom
    RGB_MATRIX_CYCLE_OUT_IN,        // Full gradient scrolling out to in
    RGB_MATRIX_CYCLE_OUT_IN_DUAL,   // Full dual gradients scrolling out to in
    RGB_MATRIX_RAINBOW_MOVING_CHEVRON,  // Full gradent Chevron shapped scrolling left to right
    RGB_MATRIX_CYCLE_PINWHEEL,      // Full gradient spinning pinwheel around center of keyboard
    RGB_MATRIX_CYCLE_SPIRAL,        // Full gradient spinning spiral around center of keyboard
    RGB_MATRIX_DUAL_BEACON,         // Full gradient spinning around center of keyboard
    RGB_MATRIX_RAINBOW_BEACON,      // Full tighter gradient spinning around center of keyboard
    RGB_MATRIX_RAINBOW_PINWHEELS,   // Full dual gradients spinning two halfs of keyboard
    RGB_MATRIX_RAINDROPS,           // Randomly changes a single key's hue
    RGB_MATRIX_JELLYBEAN_RAINDROPS, // Randomly changes a single key's hue and saturation
    RGB_MATRIX_FRAMEBUFFER_EFFECTS
    RGB_MATRIX_TYPING_HEATMAP,      // How hot is your WPM!
    RGB_MATRIX_DIGITAL_RAIN,        // That famous computer simulation
    RGB_MATRIX_KEYPRESSES)          // defined(RGB_MATRIX_KEYRELEASES)
    RGB_MATRIX_SOLID_REACTIVE_SIMPLE,   // Pulses keys hit to hue & value then fades value out
    RGB_MATRIX_SOLID_REACTIVE,      // Static single hue, pulses keys hit to shifted hue then fades to current hue
    RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
    RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
    RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
    RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
    RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
    RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
    RGB_MATRIX_SPLASH,              // Full gradient & value pulse away from a single key hit then fades value out
    RGB_MATRIX_MULTISPLASH,         // Full gradient & value pulse away from multiple key hits then fades value out
    RGB_MATRIX_SOLID_SPLASH,        // Hue & value pulse away from a single key hit then fades value out
    RGB_MATRIX_SOLID_MULTISPLASH,   // Hue & value pulse away from multiple key hits then fades value out
    RGB_MATRIX_EFFECT_MAX
};

#endif


#ifdef RGBLIGHT_ENABLE

#define RGB2_DI_PIN B4
#define RGBLIGHT_LAYERS
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 7
#define RGBLIGHT_VAL_STEP 10
#define RGBLIGHT_LIMIT_VAL 150
#define RGBLIGHT_SLEEP
#define RGBLIGHT_DEFAULT_HUE 0
#define RGBLIGHT_DEFAULT_SAT 	150
#define RGBLIGHT_DEFAULT_VAL 100

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
