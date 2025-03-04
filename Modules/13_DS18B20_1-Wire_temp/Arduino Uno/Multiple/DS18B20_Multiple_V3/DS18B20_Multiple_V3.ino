#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into port 2 on the Arduino
#define ONE_WIRE_BUS 2

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);

// Addresses of 3 DS18B20s
uint8_t sensor1[8] = { 0x28, 0x61, 0x64, 0x0A, 0xF3, 0x43, 0x1F, 0x84 };
uint8_t sensor2[8] = { 0x28, 0x61, 0x64, 0x0A, 0xBF, 0x26, 0x3C, 0x6A };


void setup(void)
{
  Serial.begin(9600);
  sensors.begin();
}

void loop(void)
{
  sensors.requestTemperatures();
  
  Serial.print("Sensor 1: ");
  printTemperature(sensor1);
  
  Serial.print("Sensor 2: ");
  printTemperature(sensor2);

   
  Serial.println();
  delay(1000);
}

void printTemperature(DeviceAddress deviceAddress)
{
  float tempC = sensors.getTempC(deviceAddress);
  Serial.print(tempC);
  Serial.print((char)176);
  Serial.print("C  |  ");
  Serial.print(DallasTemperature::toFahrenheit(tempC));
  Serial.print((char)176);
  Serial.println("F");
}
