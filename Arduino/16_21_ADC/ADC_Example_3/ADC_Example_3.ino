/*
 * LAB Name: Arduino AnalogRead Speed Measurement
 * Author: Khaled Magdy
 * For More Info Visit: www.DeepBlueMbedded.com
*/

/* 
// ---[ Arduino Pin Manipulation Macros ]---
#define SET_PIN_MODE_OUTPUT(port, pin) DDR ## port |= (1 << pin)
#define SET_PIN_HIGH(port, pin) (PORT ## port |= (1 << pin))
#define SET_PIN_LOW(port, pin) ((PORT ## port) &= ~(1 << (pin)))
 
int AN0_Result = 0;
 
void setup()
{
  SET_PIN_MODE_OUTPUT(B, 0);  // Set Pin8 (PB0) As Output
}
 
void loop()
{
  SET_PIN_HIGH(B, 0);
  delay(100);
  AN0_Result = analogRead(A0);

  AN0_Result = analogRead(A0);
  AN0_Result = analogRead(A0);
  AN0_Result = analogRead(A0);

  SET_PIN_LOW(B, 0);
  delay(100);
}
*/
#define LED_PIN 13
void setup()
{
  pinMode(LED_PIN, OUTPUT);
  delay(250);
}

void loop()
{
  /*
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(200);
  */
  analogWrite(LED_PIN, (analogRead(A0)>>2));
  //analogWrite(LED_PIN, (analogRead(A0)));
  delay(200);
}

