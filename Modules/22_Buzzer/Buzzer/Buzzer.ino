int buzzer = 11;
unsigned char i = 0;

void setup() {
  pinMode(buzzer, OUTPUT);
}


void loop() {

  for(i = 1; i < 80; i++){
    digitalWrite(buzzer, HIGH);   
    delay(1);   
    digitalWrite(buzzer, LOW);    
    delay(1);   
  }

  for(i = 1; i < 100; i++){
    digitalWrite(buzzer, HIGH);   
    delay(2);   
    digitalWrite(buzzer, LOW);    
    delay(2);   
  }

}
