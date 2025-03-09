#include "led.c"

void setup() {
  initSPITransfer();

}

void loop() {
  for (int number = 0; number < 10; number++) {
    segchar(number);
    delay(1000);                                                 
  }

}


