# Flagship by Dr.Mo

![flagship]



* Keyboard Maintainer: [Maulik Arvind Maradia ie Dr.Mo](https://github.com/MaulikDude)
* Hardware Supported: Flagship
* Hardware Availability: Mo-e-lectronics store

Make example for this keyboard (after setting up your build environment):

    make flagship21pin9Cx12R:default

Flashing example for this keyboard:

    make flagship21pin9Cx12R:default:flash
OR
open qmk msys and type
qmk compile -kb flagship21pin9Cx12R, -km default

The hex file will be created and located in c:/users/(your user name)/qmk firmware/flagship21pin9Cx12R
flash this bin file  with qmk toolbox. flash hex file if using atmega32u4. Also change mcu name and bootloader in rules.mk eg-caterina

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
