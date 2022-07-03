# Flagship by Dr.Mo

![flagship]



* Keyboard Maintainer: [Maulik Arvind Maradia ie Dr.Mo](https://github.com/MaulikDude)
* Hardware Supported: Flagship
* Hardware Availability: Mo-e-lectronics store

Make example for this keyboard (after setting up your build environment):

    make flagship21kopy:default

Flashing example for this keyboard:

    make flagship21kopy:default:flash
OR
open qmk msys and type
qmk compile -kb flagship21kopy, -km default

The hex/bin file will be created and located in c:/users/(your user name)/qmk firmware/flagship21kopy
flash this bin file  with qmk toolbox. flash hex file if using atmega32u4 based chip. Also change mcu name and bootloader in rules.mk eg-caterina.bin file is for stm32 series. Also file size is very big. atmega mcu lacks enough memory. Disable most accessory features for it.
To make bin file, change mcu to stm32F411 in rules.mk

If using Raspberry Pi Pico, it uses older usb micro b and not usb c, which supplies less current. you have to supply led power from supplentary usb c port from pcb, and not from mcu board. The led should get power before data, to avoid damage to first bulb.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
