# TrafficLight
A button triggers a traffic light sequence. Pin 13 is the button, pin 3 (Red), pin 7 (Yellow), pin 10 (Green).
Default state: green is on.
Pressing the button runs one full sequence: Green -> Yellow -> Red -> Red+Yellow -> Green, then returns to green.
A short press is enough - the button isn't checked again once the sequence starts.
![Schematic](schaltplan/TrafficLight.png)