#include "led.c"

void setup() {

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);

  pinMode(ON_LED_0, OUTPUT);
  pinMode(ON_LED_1, OUTPUT);
  pinMode(ON_LED_2, OUTPUT);
  pinMode(ON_LED_3, OUTPUT);

  reset_a;
  reset_b;
  reset_c;
  reset_d;
  reset_e;
  reset_f;
  reset_g;
  reset_dp;

  reset_ON_LED_0;
  reset_ON_LED_1;
  reset_ON_LED_2;
  reset_ON_LED_3;
  
}

void loop() {

  for(int i = 0; i < 9999; i++){
    ledprint(i);
    //delay(500);
  }
  
}






