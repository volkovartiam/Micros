/*
 * LAB Name: Arduino LED Dimmer (Potentiometer + PWM)
 * Author: Khaled Magdy
 * For More Info Visit: www.DeepBlueMbedded.com
*/
#define LED_PIN 3

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  analogWrite(LED_PIN, (analogRead(A0)>>2));
}
