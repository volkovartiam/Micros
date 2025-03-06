// Тест ЦАП MCP4725

#include <Wire.h>
#include <Adafruit_MCP4725.h>
Adafruit_MCP4725 dac;

#define DAC_RESOLUTION    9


void setup() {
  
  Serial.begin(9600);
  delay(100);  // Small delay to ensure Serial is ready.
 
  Serial.println("MCP4725 Test");
 
  if (dac.begin(0x60))        //could be 0x60 or 0x62
  {
    Serial.println("MCP4725 Initialized Successfully.");
  }
  else
  {
    Serial.println("Failed to Initialize MCP4725.");
    while (1) {}
  }

}

void loop() {
  
  dac.setVoltage((1 * 4095) / 5, false);    //Set voltage to 1V
  delay(2000);
  dac.setVoltage((2 * 4095) / 5, false);    //Set voltage to 2V
  delay(2000);
  dac.setVoltage((3 * 4095) / 5, false);    //Set voltage to 3V
  delay(2000);
  dac.setVoltage((4 * 4095) / 5, false);    //Set voltage to 4V
  delay(2000);
  dac.setVoltage(4095, false);              //Set voltage to 5V or (Vcc)
  delay(2000);

}
