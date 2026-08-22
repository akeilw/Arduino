int potPen=A0;
int readValue;
float lVoltage;
float rVoltage;

void setup() {
pinMode(potPen, INPUT);
Serial.begin(1200);
}

void loop() {
  readValue = analogRead(potPen);
  lVoltage = readValue/151.6;
  rVoltage = abs(5 - lVoltage);
  Serial.print("Left: ");
  Serial.print(lVoltage);
  Serial.print("V Right: ");
  Serial.print(rVoltage);
  Serial.println("V");
}
