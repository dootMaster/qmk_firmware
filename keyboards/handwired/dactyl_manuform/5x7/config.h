#pragma once
// #define PRODUCT    Dactyl-Manuform (5x7)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
// #undef MATRIX_ROW_PINS
// #define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 }

// #undef MATRIX_COL_PINS
// #define MATRIX_COL_PINS { B7, D2, D5, D6, D7, B5, C7 }

// #define DIODE_DIRECTION COL2ROW

// I2C communication
#define USE_I2C

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500

// trackball
#define PMW33XX_CS_PIN B0
#define PMW33XX_CPI 2000
#define POINTING_DEVICE_INVERT_Y
#define DRAGSCROLL_V_INVERT

// The number of LEDs connected
#define DRIVER_LED_TOTAL 76
// WS2812 RGB LED strip input and number of LEDs

#define RGBLIGHT_SPLIT  // synchronization functionality for split keyboards
#define RGB_MATRIX_STARTUP_HUE 170
#define SPLIT_LAYER_STATE_ENABLE
#define RGB_MATRIX_SPLIT {38, 38}
#define SPLIT_TRANSPORT_MIRROR

#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON