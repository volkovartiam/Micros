
int latchPin = 8;   //Pin connected to ST_CP of 74HC595
int clockPin = 12;  //Pin connected to SH_CP of 74HC595
int dataPin = 11;   //Pin connected to DS of 74HC595

void setup() {

  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

}


void loop() {
  // count from 0 to 255 and display the number on the LEDs
  for (int numberToDisplay = 0; numberToDisplay < 256; numberToDisplay++) {
    digitalWrite(latchPin, LOW);                                // take the latchPin low so the LEDs don't change while you're sending in bits:
    shiftOut(dataPin, clockPin, MSBFIRST, numberToDisplay);     // shift out the bits:
    digitalWrite(latchPin, HIGH);                               //take the latch pin high so the LEDs will light up:
    delay(500);                                                 // pause before next value:
  }

}


