# MCU name
MCU = STM32F411

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGB_MATRIX_ENABLE = WS2812
WS2812_DRIVER = pwm
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = yes           # Audio output
AUDIO_DRIVER = pwm_software
ENCODER_ENABLE = yes        # rotary knob encoders
ENCODER_MAP_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
CIRQUE_PINNACLE_ENABLE_CURSOR_GLIDE_ENABLE = no
CIRQUE_PINNACLE_ENABLE_CIRCULAR_SCROLL_ENABLE  = no

