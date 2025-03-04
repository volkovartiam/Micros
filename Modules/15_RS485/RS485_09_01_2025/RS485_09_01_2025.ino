/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-rs485
 */

const byte ENABLE_PIN = 2;
const byte ENABLE_PIN_2 = 3;
const byte LED_PIN = 13;

void setup() {
  // start communication with baud rate 9600
  Serial.begin(9600);

  pinMode (ENABLE_PIN, OUTPUT);  // driver output enable
  pinMode (ENABLE_PIN_2, OUTPUT);  // driver output enable
  pinMode (LED_PIN, OUTPUT);  // built-in LED

  digitalWrite (ENABLE_PIN, HIGH);  // enable sending
  digitalWrite (ENABLE_PIN_2, HIGH);  // enable sending
  digitalWrite (LED_PIN, HIGH);  // enable sending
  
  // sendMsg (fWrite, msg, sizeof msg);
  // digitalWrite (ENABLE_PIN, LOW);  // disable sending

  // wait a moment to allow serial ports to initialize
  delay(100);
}

void loop() {
  // Check if there's data available on Serial
  if (Serial.available()) {
    char data = Serial.read();  // read the received character
    Serial.print(data);         // echo back to data to the sender
  }
}
