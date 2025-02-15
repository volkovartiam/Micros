// RUN Leds scetch
const int b0 = 0;
const int b1 = 1;
const int b2 = 2;
const int b3 = 3;

const int b4 = 4;
const int b5 = 5;
const int b6 = 6;
const int b7 = 7;

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
