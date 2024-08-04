# Build Options
#   change yes to no to disable
#   enabling stuff uses up microcontroller space
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite (need this for qk_boot, but not qk_bootloader)
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = no       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360

# RGB_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = WS2812

OPT_DEFS += -Os  # Optimize for size







