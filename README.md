# Mediapad

Mediapad is an 8 key macropad with a two rotary encoders, an OLED Display. It uses QMK firmware

It focuses on media control and launching programs.

## CAD Model:
It has 2 separate printed pieces. The base where the PCB sits and the top cover.

<img src=assets/whole.png alt="Whole macropad" width="500"/>

Made in Fusion360.


## PCB
PCB made in KiCad.

Schematic
<img src=assets/schematic.png alt="Schematic" width="300"/>

PCB
<img src=assets/pcb.png alt="Schematic" width="300"/>

## Firmware Overview
This hackpad uses [QMK](https://qmk.fm/) firmware for everything. 

- the rotary encoders change volume and brightness
- The 8 keys
| Mute | Play/Pause | Previous track | Next Track |
| Calculator | Web browser | E-mail | Control Panel | 


## BOM:
Here should be everything you need to make this hackpad

- 8x Cherry MX Switches
- 8x DSA Keycaps
- 8x 1N4148 DO-35 Diodes.
- 2x EC11 Rotary Encoder
- 1x XIAO RP2040
- 1x Case (2 3d printed parts)
