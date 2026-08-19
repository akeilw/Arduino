int yellowPin=3;
int redPin=5;
int yellowOnTime=500;
int yellowOffTime=500;
int redOnTime=500;
int redOffTime=500;
int numYellowBlink; 
int numRedBlink; 
int writeValYel;
int writeValRed;
int WVtoVolY;
int WVtoVolR;
String yelMessage="Yellow Blinking at";  // Declare string variable
String redMessage="Red Blinking at";   
void setup() {
  Serial.begin(921600);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
Serial.println("How many times do you want the yellow LED to blink? ");
  while (Serial.available()==0) { };   // Wait {} til User Inputs Data -> key note == means test for value
  numYellowBlink = Serial.parseInt();   // Serial means input to serial port, parse means read, Int means an integer is the expected variable
Serial.println("What brightness/voltage do you want it at? 0-5");
  while (Serial.available()==0) { };
  writeValYel = Serial.parseInt();
  WVtoVolY = writeValYel*51;
Serial.println("How many times do you want the red LED to blink? ");
  while (Serial.available()==0) { };
  numRedBlink = Serial.parseInt();
Serial.println("What brightness/voltage do you want it at? 0-5");
  while (Serial.available()==0) { };
  writeValRed = Serial.parseInt();
  WVtoVolR = writeValRed*51;
}

void loop() {

int i=1;
Serial.println(yelMessage + " "+ writeValYel + "V");
  while (i<=numYellowBlink) {
   Serial.print("    Blink #:  ");
   Serial.println(i);
   analogWrite(yellowPin, WVtoVolY);
   delay(yellowOnTime);
   analogWrite(yellowPin, 0);
   delay(yellowOffTime);
   i=i+1;

}

  i=1;
Serial.println("    ");
Serial.println(redMessage + " " + writeValRed + "V");
  while (i<=numRedBlink) {
   Serial.print("    Blink #:  ");
   Serial.println(i);
   analogWrite(redPin, WVtoVolR);
   delay(redOnTime);
   analogWrite(redPin, 0);
   delay(redOffTime);
   i=i+1;
}

Serial.println("    ");

}