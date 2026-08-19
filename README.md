# Journal
## Credits and Resources
https://www.youtube.com/@paulmcwhorter
https://www.youtube.com/playlist?list=PLGs0VKk2DiYx6CMdOQR_hmJ2NbB4mZQn-
- - -
### Aug 16 2026
Got my Arduino parcel. I got an Elegoo Starter kit that comes with the Elegoo Uno R3. My friend suggested to begin with Paul McWhorter, a youtuber tech guy. I completed a tutorial project that works on basic coding. It comprised of turning the LED on pin 13 (I think) on and off. I also took notes on his semiconductor and began diode lesson and working on creating a basic circuit for two LEDs in a circuit, practicing with the breadboard. I was able to loop the LEDs and make the first yellow LED to blink six times and the second red LED to blink seven times.

### Aug 17 2026
I reassembled the LED circuit to play with the LEDs in Arduino IDE. Using C++ coding and pushing through three tutorial videos, I managed to make progress through inputs and outputs in the Serial Monitor. I monitored my progress in testing-codes. I struggled on the third iteration with my global variables like 'numYellowBlink' and with the Serial monitor itself, but I simply forgot a capital in the variable and needed to change the Serial monitor to send no line endings instead of /n since I wass in "New Line".
- - -
## Codes and Funtions

int(name=value)    // set a new variable with a certain integer

pinMode(name, value)    // set a pin to do something idk yet

digitalWrite(name, value)

delay(ms)    // delay code by an amount of ms

for (initialization; condition; increment/decrement) {}   // runs once, like a setup; if true it will loop, if false it ends ; executes after every iteration of the loop

while (condition) {}    // repeats the code in {} as long as the condition remains true

Serial.print() or Serial.println()    // prints on Serial monitor or prints on Serial Monitor and pushes to next line

Serial.parseInt() or Serial.parseFloat()    // pc/code reads an integer or decimal and communicates to microcontroller

Serial.read() or Serial.readString()    // pc/code reads a single letter or an entire string and communicates to microcontroller

