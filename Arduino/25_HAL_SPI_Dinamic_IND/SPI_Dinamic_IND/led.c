#include "led.h"

void displayNumber(int number){
    digitalWrite(latchPin, LOW);                                // take the latchPin low so the LEDs don't change while you're sending in bits:
    shiftOut(dataPin, clockPin, MSBFIRST, number);     // shift out the bits:
    digitalWrite(latchPin, HIGH);                               //take the latch pin high so the LEDs will light up:
}

void initSPITransfer(void ){
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  displayNumber(255);
  delay(delayTimer); 
}

void ledprint(int number)
{
	int R0 = number%10;			
  int R1 = number%100/10;
  int R2 = number%1000/100;
  int R3 = number/1000;

	segchar(R0);
  displayNumber(LED_ON_0);
  delay(delayTimer);

  segchar(R1);
  displayNumber(LED_ON_1);
  delay(delayTimer);

  segchar(R2);
  displayNumber(LED_ON_2);
  delay(delayTimer);
  
  segchar(R3);
  displayNumber(LED_ON_3);
  delay(delayTimer);
	
}


void segchar(int seg)
{
  switch (seg)
  {
    case 1: displayNumber(249); break;    // number = 249;     1 - digit
    case 2: displayNumber(164); break;    // number = 164;     2 - digit
    case 3: displayNumber(176); break;    // number = 176;     3 - digit
    case 4: displayNumber(153); break;    // number = 153;     4 - digit
    case 5: displayNumber(146); break;    // number = 146;     5 - digit
    case 6: displayNumber(130); break;    // number = 130;     6 - digit
    case 7: displayNumber(248); break;    // number = 248;     7 - digit
    case 8: displayNumber(128); break;    // number = 128;     8 - digit
    case 9: displayNumber(144); break;    // number = 144;     9 - digit
    case 0: displayNumber(192); break;    // number = 192;     0 - digit
  }
}
