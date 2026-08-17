# Simple LED Circuit 2x
## Notes
- this is assuming the circuit is already made
- i used [https://www.youtub](https://www.youtube.com/watch?v=O4JACbIQX_w&list=PLGs0VKk2DiYx6CMdOQR_hmJ2NbB4mZQn-&index=3)

## Installations
- https://downloads.arduino.cc/arduino-ide/arduino-ide_2.3.10_Windows_64bit.exe
    - Arduino IDE to make device and Arduino compatible

## Materials
- 4x breadboard jumpers or male-to-male pin wire
- 2x resistors
- 2x LEDs (used yellow and red in code)
- Breadboard and Arduino

## Instructions
After setup, copy code on https://github.com/akeilw/Arduino/blob/simple-led-circuit/simpleledcircuit/simpleledcircuit.ino

Or follow instructions to understand. You can rewrite your own variables and compare to my code

1. for your first LED, shift the starting code down to 3 and on line 1 write 'int yellowPin=2;' The integer value depends on the hole on the digital line you plugged your jumper cable to. This line represents a global variable when outside the other functions
2. for the second LED, repeat on a new line with different variable name and hole number or digital integer. Mine was 'int redPin=3;'
3. OPTIONAL, WRITE TO PRACTICE... write on a new line 'int yellowOnTime=100;' this will represent time on. Write another similar to this to represent time off 'int yellowOffTime=100;' . Repeat for the other LED
4. under void setup, write 'pinMode(yellowPin, OUTPUT); pinMode(redPin, OUTPUT);' This will run once and set up the loop code
5. under void loop, write 'digitalWrite(yellowPin, HIGH)' remember HIGH represents the LED turning on or producing a high voltage
6. create a new line 'delay(yellowOnTime);'
7. repeat for time off, with LOW
8. repeat 5-7 for the other LED
9. press the arrow to upload code
10. to make it blink a specific number of ties, read below

what the for () {} means:

for (initialization; condition; increment/decrement) {}

(runs once, like a setup; if true it will loop, if false it ends ; executes after every iteration of the loop) {code that loops}

11. write 'for ()' and separate and close both the first LED loop and the second LED loop with {}
12. rewrite the for() to 'for (int i=1; i<=10; i=i+1)' this means it begins with 1, checks if condition is satisfied, and adds 1 to make i=2 so it represents a second loop and so on
13. OPTIONAL you can rewrite the 10 as a new global variable. I wrote 'int numYellowBlink=6;' and in the loop i wrote 'for (int i=1; i<=numYellowBlink; i=i+1)'
14. repeat 11-13 for the second LED
15. upload and debug

Manipulate timer values, or try moving around the circuit to understand the breadboard (make sure to not fry the LEDs)

