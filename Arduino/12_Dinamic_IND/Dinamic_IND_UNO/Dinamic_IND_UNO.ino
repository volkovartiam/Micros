#include "led.c"

uint32_t timer;
uint32_t timerDelay = 1000;

int i = 9998;

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

  if(millis() - timer >= timerDelay){
    timer = millis();  
    change_i();
  }
  ledprint(i);
  
}

void change_i(){
  if(i >= 9999){
    i = 0;
  } else {
    i++;
  }

}




