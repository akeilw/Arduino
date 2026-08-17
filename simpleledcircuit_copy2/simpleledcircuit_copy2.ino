int yellowPin=2;
int redPin=3;
int yellowOnTime=1000;
int yellowOffTime=1000;
int redOnTime=1000;
int redOffTime=1000;
int numYellowBlink; 
int numRedBlink;  
String yelMessage="Yellow Blinking";  // Declare string variable
String redMessage="Red Blinking";   
void setup() {
  Serial.begin(921600);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {

Serial.println("How many times do you want the yellow LED to blink? ");
while (Serial.available()==0) { };   // Wait {} til User Inputs Data -> key note == means test for value
numYellowBlink = Serial.parseInt();   // Serial means input to serial port, parse means read, Int means an integer is the expected variable
Serial.println("How many times do you want the red LED to blink? ");
while (Serial.available()==0) { };
numRedBlink = Serial.parseInt();   

Serial.println(yelMessage);
for (int i=1; i<=numYellowBlink; i=i+1) {
  Serial.print("    Blink #:  ");
  Serial.println(i);
  digitalWrite(yellowPin, HIGH);
  delay(yellowOnTime);
  digitalWrite(yellowPin, LOW);
  delay(yellowOffTime);

}
Serial.println("    ");
Serial.println(redMessage);
for (int i=1; i<=numRedBlink; i=i+1) {
  Serial.print("    Blink #:  ");
  Serial.println(i);
  digitalWrite(redPin, HIGH);
  delay(redOnTime);
  digitalWrite(redPin, LOW);
  delay(redOffTime);

}

Serial.println("    ");

}