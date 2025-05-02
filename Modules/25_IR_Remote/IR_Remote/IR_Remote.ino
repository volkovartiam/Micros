#include <IRremote.hpp>

#define IR_RECEIVE_PIN 11

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);

}

void loop() {
  if(IrReceiver.decode() ){
    Serial.println(IrReceiver.decodedIRData.command, HEX);
    delay(100);
    IrReceiver.resume();
  }

}
