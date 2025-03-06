// ЦАП MCP4725 + RGB LED + Аналоговый мультиплексор CD74HC4067

// Линейная интерполяция производится по формуле:
// (value - from_min) * (to_max - to_min) / (from_max - from_min) + to_min
// Диапазон значений RGB - (0, 255)
// Диапазон значений MCP4725 - (0, 4095)
// Следовательно, формула принимает вид:
// value * 4095 / 255

// Мультиплексор передаёт только по 1 каналу за раз, следовательно, комбинацию цветов создать не получится
// Вывод: можно использовать встроенный генератор ШИМ на Arduino для этой задачи

#include <Wire.h>
#include <Adafruit_MCP4725.h>
Adafruit_MCP4725 dac;

#define S0 4
#define S1 5
#define S2 6
#define S3 7 

void setup() {

  Serial.begin(9600);
  delay(100);
 
  if (dac.begin(0x60))        // 0x60 или 0x62
  {
    Serial.println("MCP4725 Initialized Successfully.");
  }
  else
  {
    Serial.println("Failed to Initialize MCP4725.");
    while (1) {}
  }

  dac.setVoltage(0, false);

  pinMode(S0, OUTPUT); 
  pinMode(S1, OUTPUT); 
  pinMode(S2, OUTPUT); 
  pinMode(S3, OUTPUT);   
  digitalWrite(S0, LOW);
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

}

void loop() {

  Serial.println("Красный (0 - 255):");
  while (Serial.available() == 0) {}
  String input_str = Serial.readString();
  input_str.trim();
  int red_ch = input_str.toInt() * 4095 / 255;
  writeMux(0);
  dac.setVoltage(red_ch, false);
  
  Serial.println("Зелёный (0 - 255):");
  while (Serial.available() == 0) {}
  input_str = Serial.readString();
  input_str.trim();
  int green_ch = input_str.toInt() * 4095 / 255;
  writeMux(1);
  dac.setVoltage(green_ch, false);
  
  Serial.println("Синий (0 - 255):");
  while (Serial.available() == 0) {}
  input_str = Serial.readString();
  input_str.trim();
  int blue_ch = input_str.toInt() * 4095 / 255;
  writeMux(2);
  dac.setVoltage(blue_ch, false);

}





void writeMux(int channel){
  int controlPin[] = {S0, S1, S2, S3};

  int muxChannel[16][4]={
    {0,0,0,0}, //channel 0
    {1,0,0,0}, //channel 1
    {0,1,0,0}, //channel 2
    {1,1,0,0}, //channel 3
    {0,0,1,0}, //channel 4
    {1,0,1,0}, //channel 5
    {0,1,1,0}, //channel 6
    {1,1,1,0}, //channel 7
    {0,0,0,1}, //channel 8
    {1,0,0,1}, //channel 9
    {0,1,0,1}, //channel 10
    {1,1,0,1}, //channel 11
    {0,0,1,1}, //channel 12
    {1,0,1,1}, //channel 13
    {0,1,1,1}, //channel 14
    {1,1,1,1}  //channel 15
  };

  //loop through the 4 sig
  for(int i = 0; i < 4; i ++){
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }
}
