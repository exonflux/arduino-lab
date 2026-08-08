# Anki Controller Projekt

Vier Taster lösen auf einer RGB-LED jeweils einen kurzen Farbblitz (200 ms) aus, jeder Taster hat eine fest zugeordnete Farbe. Zusätzlich zeigt ein LCD1602-Display an, welche Anki-Bewertung zuletzt gedrückt wurde, und zählt in der zweiten Zeile mit, wie oft insgesamt gedrückt wurde. Vorstufe zu einem geplanten physischen Anki-Antwort-Controller.

**Pins:**

| Bauteil | Pin |
|---|---|
| Taster 1 (Perfekt / Hellblau) | 9 |
| Taster 2 (Gut / Grün) | 10 |
| Taster 3 (Hart / Gelb) | 11 |
| Taster 4 (Again / Rot) | 12 |
| RGB Rot | 2 |
| RGB Grün | 3 |
| RGB Blau | 4 |
| LCD RS | 22 |
| LCD E | 23 |
| LCD D4 | 24 |
| LCD D5 | 25 |
| LCD D6 | 26 |
| LCD D7 | 27 |

Jeder Tastendruck löst per Edge-Detection genau **einen** Blitz aus, kein Dauerleuchten beim Halten. Ein kurzes `delay(20)` am Ende von `loop()` fängt das Kontaktprellen beim Loslassen ab, sonst zündet der Blitz manchmal doppelt.

Das LCD1602 läuft im 4-Bit-Modus (D0-D3 unbenutzt), Kontrast über ein Potentiometer an V0 (Festkontrast an GND wäre nur aus einem schmalen Blickwinkel lesbar). Zeile 1 zeigt die zuletzt gedrückte Bewertung, Zeile 2 einen Zähler für die Gesamtzahl der Drücke.

**Nächster Schritt:** Ausbau zum echten Anki-Answer-Clicker, der MEGA hat kein natives USB-HID, dafür braucht's eine Python-Bridge zu AnkiConnect.

![Aufbau](Schaltplan/Aufbau.jpg)

## Demo

https://github.com/user-attachments/assets/b27bb1cd-8a4c-4701-9ea1-34fd55329023
