#include "led.c"

void setup() {
  
  initSPITransfer();

}

void loop() {

    ledprint(1234);

}


