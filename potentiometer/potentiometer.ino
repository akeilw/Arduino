int potPen=A0;  //declare potPen as analog pin
int readValue;   //declare readValue as a variable
float lVoltage;
float rVoltage;

void setup() {
pinMode(potPen, INPUT); // set potPen as an input to send signals to code
Serial.begin(1200); // begin serial port
}

void loop() {
  readValue = analogRead(potPen); // set readValue to the value of the raw input signals
  lVoltage = readValue/151.6; //find voltage through this equation
  rVoltage = abs(5 - lVoltage);  //find voltage through other end of potentiometer
  Serial.print("Left: ");
  Serial.print(lVoltage);
  Serial.print("V Right: ");
  Serial.print(rVoltage);
  Serial.println("V");
}
