

int latchPin = 8;   //Pin connected to ST_CP of 74HC595
int clockPin = 12;  //Pin connected to SH_CP of 74HC595
int dataPin = 11;   //Pin connected to DS of 74HC595

void setup() {

  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

}

// numberToDisplay = 249;     1 - digit
// numberToDisplay = 164;     2 - digit
// numberToDisplay = 176;     3 - digit
// numberToDisplay = 153;     4 - digit
// numberToDisplay = 146;     5 - digit
// numberToDisplay = 130;     6 - digit
// numberToDisplay = 248;     7 - digit
// numberToDisplay = 128;     8 - digit
// numberToDisplay = 144;     9 - digit



void loop() {
  for (int numberToDisplay = 190; numberToDisplay < 196; numberToDisplay++) {
    digitalWrite(latchPin, LOW);                                // take the latchPin low so the LEDs don't change while you're sending in bits:
    shiftOut(dataPin, clockPin, MSBFIRST, numberToDisplay);     // shift out the bits:
    digitalWrite(latchPin, HIGH);                               //take the latch pin high so the LEDs will light up:
    delay(250);                                                 // pause before next value:
  }

}


