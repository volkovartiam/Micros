#include "led.c"

int ms_delay = 100;

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

  delay(ms_delay);
  
}

void loop() {

  //set_ON_LED_3;
  for(int i = 100; i < 1020; i++){
    ledprint(1234);
    delay(ms_delay);  
  }
  
}






