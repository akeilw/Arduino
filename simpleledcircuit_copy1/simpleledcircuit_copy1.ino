int yellowPin=2;
int redPin=3;
int yellowOnTime=1000;
int yellowOffTime=1000;
int redOnTime=1000;
int redOffTime=1000;
int numYellowBlink=6;
int numRedBlink=7;
String yelMessage="Yellow Blinking";  // Declare string variable
String redMessage="Red Blinking";   
void setup() {
  Serial.begin(74880);
  delay(2000);
  String oh1= "Only In ";   // Declare string variable oh1 and assign a value
  String oh2= "Ohio";    // Declare string variable oh2 and assign a value
  String oh3;           // Declare string variable oh3
  oh3=oh1 + oh2;        // Concatenating strings oh1 and oh2 into oh3
  Serial.print(oh3);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {

Serial.println("    ");
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

}