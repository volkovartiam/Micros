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

  delay(1000); 
  displayNumber(255);
  delay(1000); 
}



// number = 249;     1 - digit
// number = 164;     2 - digit
// number = 176;     3 - digit
// number = 153;     4 - digit
// number = 146;     5 - digit
// number = 130;     6 - digit
// number = 248;     7 - digit
// number = 128;     8 - digit
// number = 144;     9 - digit
// number = 192;     9 - digit

void segchar(int seg)
{
        switch (seg)
        {
                case 1: 
                        displayNumber(249);
                        break;
                case 2:
                        displayNumber(164);
                        break;
                case 3:
                        displayNumber(176);
                        break;
                case 4:
                        displayNumber(153);
                        break;
                case 5:
                        displayNumber(146);
                        break;
                case 6:
                        displayNumber(130);
                        break;
                case 7:
                        displayNumber(248);
                        break;
                case 8:
                        displayNumber(128);
                        break;
                case 9:
                        displayNumber(144);
                        break;
                case 0:
                        displayNumber(192);
                        break;
        }
}
