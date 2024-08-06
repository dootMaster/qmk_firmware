void keyboard_pre_init_user(void) {
    // Set the pin connected to D4 as an output
    setPinOutput(D4);
}

void matrix_scan_user(void) {
    if (some_condition) {
        // Toggle D4 LED
        writePinHigh(D4);
    } else {
        writePinLow(D4);
    }
}
