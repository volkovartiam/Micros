 
void setup() 
{
}
 
void loop() {
  int value = 2048;           // A 12-bit value, half of the DAC range
  analogWrite(DAC0, value);    // Output analog voltage to DAC0
  delay(500);                 // Wait for 1 second
  analogWrite(DAC0, 1024);     // Output a lower analog voltage to DAC1
  delay(500);                 // Wait for 1 second
}
