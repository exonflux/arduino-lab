# Anki Controller Project

Four buttons trigger a short color flash (200 ms) on an RGB LED, each button has a fixed color. An LCD1602 display shows which Anki rating was last pressed, and counts total presses on the second line. A first step toward a physical Anki answer controller.

**Pins:**

| Component | Pin |
|---|---|
| Button 1 (Perfect / Light blue) | 9 |
| Button 2 (Good / Green) | 10 |
| Button 3 (Hard / Yellow) | 11 |
| Button 4 (Again / Red) | 12 |
| RGB Red | 2 |
| RGB Green | 3 |
| RGB Blue | 4 |
| LCD RS | 22 |
| LCD E | 23 |
| LCD D4 | 24 |
| LCD D5 | 25 |
| LCD D6 | 26 |
| LCD D7 | 27 |

Each press triggers exactly **one** flash via edge detection, no continuous light while held. A short `delay(20)` at the end of `loop()` catches contact bounce on release, otherwise the flash sometimes fires twice.

The LCD1602 runs in 4-bit mode (D0-D3 unused), contrast set via a potentiometer on V0 (a fixed contrast tied to GND would only be readable from an angle). Row 1 shows the last pressed rating, row 2 a counter of total presses.

**Next step:** turn this into a real Anki answer clicker. The Mega has no native USB HID, so it'll need a Python bridge to AnkiConnect.

![Setup](Schaltplan/Aufbau.jpg)

## Demo

https://github.com/user-attachments/assets/b27bb1cd-8a4c-4701-9ea1-34fd55329023
