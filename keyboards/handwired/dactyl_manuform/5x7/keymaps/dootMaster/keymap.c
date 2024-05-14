#include <stdio.h>
#include <stdlib.h>
#include QMK_KEYBOARD_H
#include "shared_keymap.h"

bool drag_scroll = false;
#define DRAGSCROLL_DENOMINATOR 100;
static int _dragscroll_accumulator_x = 0;
static int _dragscroll_accumulator_y = 0;


report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (drag_scroll) {
      #ifdef DRAGSCROLL_H_INVERT
        _dragscroll_accumulator_x += mouse_report.x;
      #else
        _dragscroll_accumulator_x += mouse_report.x;
      #endif
      #ifdef DRAGSCROLL_V_INVERT
        _dragscroll_accumulator_y += -mouse_report.y;
      #else
        _dragscroll_accumulator_y += mouse_report.y;
      #endif
        int div_x = _dragscroll_accumulator_x / DRAGSCROLL_DENOMINATOR;
        int div_y = _dragscroll_accumulator_y / DRAGSCROLL_DENOMINATOR;

        if (div_x != 0) {
            mouse_report.h += div_x;
            _dragscroll_accumulator_x -= div_x * DRAGSCROLL_DENOMINATOR;
        }

        if (div_y != 0) {
            mouse_report.v += div_y;
            _dragscroll_accumulator_y -= div_y * DRAGSCROLL_DENOMINATOR;
        }
        mouse_report.x = 0;
        mouse_report.y = 0;
    }

    return mouse_report;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case DRAG_SCROLL:
        if (record->event.pressed) {
            drag_scroll = true;
        } else {
          _dragscroll_accumulator_x = 0;
          _dragscroll_accumulator_y = 0;
          drag_scroll = false;
        }
        return false; // Skip all further processing of this key
    default:
        return true; // Process all other keycodes normally
  }
}
