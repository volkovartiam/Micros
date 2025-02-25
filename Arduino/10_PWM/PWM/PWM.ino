// RGB and R, G, B LED demo

/* 
https://www.arduino.cc/reference/tr/language/functions/analog-io/analogwrite/
Writes an analog value (PWM wave) to a pin  
(wowki не делает отличий между портами, в железе заметно)
*/

const int pinR = 11;
const int pinG = 9;
const int pinB = 10;

void setup() {
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}


void loop() {
  int ms_delay = 1000;
  int value = 255;

  analogWrite(pinR, value);
  delay(ms_delay);
  analogWrite(pinR, 0);
  delay(ms_delay);


  analogWrite(pinG, value);
  delay(ms_delay);
  analogWrite(pinG, 0);
  delay(ms_delay);


  analogWrite(pinB, value);
  delay(ms_delay);
  analogWrite(pinB, 0);
  delay(ms_delay);


  analogWrite(pinR, value);
  analogWrite(pinG, value);
  analogWrite(pinB, value);
  delay(ms_delay);

  analogWrite(pinR, 0);
  analogWrite(pinG, 0);
  analogWrite(pinB, 0);
  delay(ms_delay);

}
