// RUN Leds and buttons
const int d0 = 0;   //d0   
const int d1 = 1;   //d2  
const int d2 = 2;   //d3  
const int d3 = 3;   //d4  
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;
int led_pins[] = {d0,d1,d2,d3, d4,d5,d6,d7};
int arrayLengthLeds = sizeof(led_pins) /sizeof(led_pins[0]);

const int b0 = 8;
const int b1 = 9;
const int b2 = 10;
const int b3 = 11;
const int b4 = 12;
const int b5 = 13;
const int a0 = a0;
const int a1 = a1;
int button_pins[] = {b0,b1,b2,b3, b4,b5,a0,a1};
int arrayLengthButtons = sizeof(button_pins) /sizeof(button_pins[0]);

int vals[] = {0,0,0,0, 0,0,0,0};
int arrayLengthValues = sizeof(vals) /sizeof(vals[0]);
int ms_delay = 100;

void setup() {

  if(check() ){
    for(int i=0; i<arrayLengthLeds; i++){
      //vals[i]=0;
      pinMode(led_pins[i], OUTPUT);
      digitalWrite(led_pins[i], HIGH);
      pinMode(button_pins[i], INPUT);
    }  
  }
  pinMode(led_pins[0], OUTPUT);
  digitalWrite(led_pins[0], HIGH);
 
}


void loop() {

  if(check() ){
    for(int i=0; i<arrayLengthLeds; i++){
      vals[i] = digitalRead(button_pins[i]);
      digitalWrite(led_pins[i], vals[i]);
    }
    delay(ms_delay);
  }

}


bool check(){
  bool checkedLedsAndButtons = (arrayLengthLeds == arrayLengthButtons);
  bool checkedLedsAndValues = (arrayLengthLeds == arrayLengthValues);
  bool checkedButtonsAndValues = (arrayLengthButtons == arrayLengthValues);
  return (checkedLedsAndButtons && checkedLedsAndValues && checkedButtonsAndValues);
}


