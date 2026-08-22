# Potentiometer Circuit
## Notes
- assume circuit has been made

## Materials
- 5x jumper wires
- 1x potentiometer

##Instructions
1. Setup circuit, on outer end of the potentiometer should be + and one end of the other end should be -
2. The middle pin should connect to an analog pin on the arduino
3. Create this first code, declaring all global variables
  int potPen=A0;
  int readValue;
  float voltage;
4. in void setup, begin the serial port and make the analog pin an input
  pinMode(potPen, INPUT);
  Serial.begin(baudrate);
  if baud rate is low enough, no need to write delay in void loop
5. in void loop, set the readValue variable to the analog value
   readValue = analogRead(potPen);
6. set voltage variable to readValue and make the serial monitor print out the raw analog signals
   voltage = readValue
   Serial.print(voltage)
   note: you can just make the serial monitor print readValue -> Serial.print(readValue). voltage variable is needed for whats next
7. Using a linear math equation, find the voltage out
   - find max raw analog input, mine is ~750 when knob twisted all the way
   - create a slope, i did max raw input divided by voltage in(mine is 5V into the circuit, so 750/5)
   - if 0V in means zero raw analog input (0,0), then y = (input/voltage)x, where input/voltage is the slope; y is raw input; x is voltage
   - voltage = rawinput/150 for me
8. create a line in the void loop, where voltage  = readValue/slope
9. You will now be reading on the serial monitor the voltage through one of the ends

Optional:  I went a bit further to produce two readings from the left pin and the right pin of the potentiometer
