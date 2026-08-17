# Tutorial Project
## Notes
- make sure code always ends in semicolons, ";"
- when code changes colour, it means it is a legit function or input, ie. 'digitalWrite' turns orange
- if it does not change colour, it means it *may* not work, ie. 'digitalwrite' stays white

- - -

## Installations
- https://downloads.arduino.cc/arduino-ide/arduino-ide_2.3.10_Windows_64bit.exe
    - Arduino IDE to make device and Arduino compatible

## Materials
- Arduino, using an Elegoo Uno R3
- USB-A to USB-B cord
- PC or laptop

## Instructions
1. Open Arduino IDE
2. Under void setup, between the squiggly lines {}, type 'pinMode(13,OUTPUT);'
4. Under void loop, between the squiggly lines {}, type 'digitalWrite(13,HIGH);'
5. On the top left of the application, press the arrow button and upload code to Arduino
6. The Arduino should have a static light emitting
7. Under void loop, rewrite your first line to 'digitalWrite(13,LOW);'
8. The light should turn off
9. Now, write these new lines of code under void loop
'digitalWrite(13,HIGH);
delay(50);
digitalWrite(13,LOW);
delay(50);'
10. The light should blink every 50 ms, where the 'delay()' function acts as a timer in milliseconds between codes
11. OPTIONAL: Manipulate the time variable and test the blinking
