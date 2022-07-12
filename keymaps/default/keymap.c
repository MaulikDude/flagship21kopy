/* Copyright 2021 kb-Maulik Arvind Maradia Dr. Mo, github maulikdude>
 
 */
#include QMK_KEYBOARD_H

enum layers{
    L0 = 0, L1, L2, L3
     };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [L0] = LAYOUT(
	  RGB_MODE_FORWARD,   RGB_VAI,   RGB_SPI,                            RGB_TOG,
        KC_PSLS, KC_PAST, KC_NLCK,   	  KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,   		      KC_F7,   KC_F8,   KC_F9,          KC_F10,          KC_F11,  KC_F12,  KC_PAUS,
        KC_PPLS, KC_PMNS, KC_SLCK,   	  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    		      KC_7,    KC_8,    KC_9,           KC_0,            KC_MINS, KC_EQL,  KC_PSCR, 
        KC_P7,   KC_P8,   KC_P9,   KC_UP,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    		      KC_U,    KC_I,    KC_O,           KC_P,            KC_LBRC, KC_RBRC, KC_DEL,  
        KC_P4,   KC_P5,   KC_P6,   KC_LEFT, KC_RGHT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    		      KC_J,    KC_K,    KC_L,           KC_SCLN,         KC_QUOT, KC_BSLS, KC_INS, 
        KC_P1,   KC_P2,   KC_P3,   KC_DOWN, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    		      KC_M,    KC_COMM, KC_DOT,         KC_SLSH,  	   KC_HOME, KC_PGUP,
        KC_PDOT, KC_P0,   KC_PENT, KC_BSPC, KC_LCTL, MO(L1),  KC_LGUI, KC_LALT, KC_BSPC, KC_SPC, MT(MOD_RSFT, KC_SPC),  KC_RCTL, KC_ENT,  LT(L2, KC_ESC), LT(L3, KC_CAPS), KC_END,  KC_PGDN
    ),
   [L1] = LAYOUT(
        AU_TOG,           MU_TOG, MU_MOD,                                CK_TOGG, 
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,        
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
    ),
   [L2] = LAYOUT(
        KC_TRNS,           KC_TRNS, KC_TRNS,                                KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,        
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
    ),
   [L3] = LAYOUT(
        KC_TRNS,           KC_TRNS, KC_TRNS,                                KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,        
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
    ),
};


#if defined (POINTING_DEVICE_ENABLE)

static bool scrolling_mode = false;

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case L1:  // If we're on the L1 layer enable scrolling mode
            scrolling_mode = true;
            pointing_device_set_cpi(2000);
            break;
        default:
            if (scrolling_mode) {  // check if we were scrolling before and set disable if so
                scrolling_mode = false;
                pointing_device_set_cpi(8000);
            }
            break;
    }
    return state;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (scrolling_mode) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;

};
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_L0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    
};
#endif

#ifdef AUDIO_ENABLE
const uint8_t music_map[MATRIX_ROWS][MATRIX_COLS] = LAYOUT(

        KC_TRNS,           KC_TRNS, KC_TRNS,                                KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,   KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,   KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11,   KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,        
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
      
	
	
	 
);
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    
// Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case L0:
            oled_write_P(PSTR("L0\n"), false);
            break;
        case L1:
            oled_write_P(PSTR("L1\n"), false);
            break;
	  case L2:
            oled_write_P(PSTR("L2\n"), false);
            break;
	  case L3:
            oled_write_P(PSTR("L3\n"), false);
            break;
                   
    }
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif


#ifdef RGB_MATRIX_ENABLE


led_config_t g_led_config = { {
  // Key Matrix to LED Index
       { 3,  2,  1, 0, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 113, 4, 5, 6, 7,  8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, NO_LED, NO_LED, NO_LED, },
  { 112, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, NO_LED, NO_LED, NO_LED, },
  { 111, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 114, 121 },
  { 110, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 115, 120 },
  { 109, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 116, 119 },
  { 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 117, 118, NO_LED, NO_LED },
        
  
}, {
  // LED Index to Physical Position
 
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
} };

#endif
 
