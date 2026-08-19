int yellowPin=2;   // declare yellow as an int, and set as 2
int redPin=3;    // declare red as an int, and set at 3
int yellowOnTime=1000;   // This is the time yellow will remain on
int yellowOffTime=1000;    // This is the time yellow will remain off
int redOnTime=1000;    // This is the time red will remain on
int redOffTime=1000;   // This is the time red will remain off
int numYellowBlink=6;    // This is the amount of times yellow blinks
int numRedBlink=7;    // This is the amount of times red blinks

void setup() {

pinMode(yellowPin, OUTPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);
}

void loop() {

Serial.println("    ");
Serial.println("Yellow Blinking");
for (int i=1; i<=numYellowBlink; i=i+1) {
  Serial.print("    Blink #:  ");
  Serial.println(i);
  digitalWrite(yellowPin, HIGH);
  delay(yellowOnTime);
  digitalWrite(yellowPin, LOW);
  delay(yellowOffTime);

}
Serial.println("    ");
Serial.println("Red Blinking");
for (int i=1; i<=numRedBlink; i=i+1) {
  Serial.print("    Blink #:  ");
  Serial.println(i);
  digitalWrite(redPin, HIGH);
  delay(redOnTime);
  digitalWrite(redPin, LOW);
  delay(redOffTime);

}

}