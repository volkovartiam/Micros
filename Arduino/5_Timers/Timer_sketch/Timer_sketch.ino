// RUN Leds and buttons
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;
int leds[] = {d4,d5,d6,d7};
int lengthLeds = sizeof(leds) /sizeof(leds[0]);

const int b0 = 8;
const int b1 = 9;
const int b2 = 10;
const int b3 = 11;
int buttons[] = {b0,b1,b2,b3};
int lengthButtons = sizeof(buttons) /sizeof(buttons[0]);

int vals[] = {0,0,0,0};
int lengthValues = sizeof(vals) /sizeof(vals[0]);
int ms_delay = 100;

uint32_t myTimer1, myTimer2;
const int d3 = 3;

void setup() {

  if(check() ){
    for(int i=0; i<lengthLeds; i++){
      pinMode(leds[i], OUTPUT);
      digitalWrite(leds[i], LOW);
      pinMode(buttons[i], INPUT);
    }  
  }
  pinMode(d3, OUTPUT);
  digitalWrite(d3, LOW);
}


void loop() {

  if(check() ){
    for(int i=0; i<lengthLeds; i++){
      vals[i] = digitalRead(buttons[i]);
      digitalWrite(leds[i], vals[i]);
    }
    delay(ms_delay);
  }

  if (millis() - myTimer1 >= 250) {   // таймер на 500 мс (2 раза в сек)
    myTimer1 = millis();              // сброс таймера
    digitalWrite(d3, !digitalRead(d3));
  }
  /*
  if (millis() - myTimer2 >= 250) {   // таймер на 500 мс (2 раза в сек)
    myTimer2 = millis();              // сброс таймера
    digitalWrite(d3, HIGH);
  }
  */

}


bool check(){
  bool checkedLedsAndButtons = (lengthLeds == lengthButtons);
  bool checkedLedsAndValues = (lengthLeds == lengthValues);
  bool checkedButtonsAndValues = (lengthButtons == lengthValues);
  return (checkedLedsAndButtons && checkedLedsAndValues && checkedButtonsAndValues);
}


