#include <SPI.h>
#include <SoftSPI.h>

// Create a new SPI port with:
// Pin 2 = MOSI,
// Pin 3 = MISO,
// Pin 4 = SCK

#define SS 7
SoftSPI mySPI(2, 3, 4);

void setup() {
  pinMode(SS, OUTPUT);
  digitalWrite(SS, LOW);
	mySPI.begin();
	Serial.begin(9600);
}

void loop() {
	static uint8_t v = 0;

	Serial.print("Sending value: ");
	Serial.print(v, HEX);

  digitalWrite(SS, HIGH);
  digitalWrite(SS, LOW);
	uint8_t in = mySPI.transfer(v);
	Serial.print(" Got value: ");
	Serial.print(in, HEX);
	Serial.println(v == in ? " PASS" : " FAIL");
	delay(1000);
	v++;
}
