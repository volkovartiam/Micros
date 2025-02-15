// RUN Leds scetch
const int b0 = 2;
const int b1 = 3;
const int b2 = 4;
const int b3 = 5;

const int b4 = 6;
const int b5 = 7;
const int b6 = 8;
const int b7 = 9;

int pins[] = {b0,b1,b2,b3,b4,b5,b6,b7};
int arrayLength = sizeof(pins) /sizeof(pins[0]);
int ms_delay = 500;


void setup() {

  for(int i =0; i<arrayLength; i++ ){
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW); 
  }

}


void loop() {
 
 /**/
  for(int i=0; i<arrayLength; i++ ){
    digitalWrite(pins[i], LOW);
    for(int j=0; j<arrayLength; j++ ){
      if(i != j){
        digitalWrite(pins[j], HIGH); 
      }
    }
    delay(ms_delay);
  }
  /**/
}
