#include "Wire.h"
const int MPU_addr = 0x68; // адрес датчика
// массив данных
// [accX, accY, accZ, temp, gyrX, gyrY, gyrZ]
// acc - ускорение, gyr - угловая скорость, temp - температура (raw)
int16_t data[7];  
float transformed_data[7];
void setup() {
  // инициализация
  Wire.begin();
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B);  // PWR_MGMT_1 register
  Wire.write(0);     // set to zero (wakes up the MPU-6050)
  Wire.endTransmission(true);
  
  Serial.begin(9600);
}
void loop() {
  getData();  // получаем

  for (byte i = 0; i < 3; i++) {
    float fl = data[i];
    transformed_data[i] = fl / 32768 * 2;
  }

  transformed_data[3] = data[3];

  for (byte i = 4; i < 7; i++) {
    float fl = data[i];
    transformed_data[i] = fl / 32768 * 250;
  }
  
  // выводим 
  for (byte i = 0; i < 7; i++) {
    Serial.print(transformed_data[i]);
    Serial.print('\t');
  }
  Serial.println();
  delay(200);
}
void getData() {
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x3B);  // starting with register 0x3B (ACCEL_XOUT_H)
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_addr, 14, true); // request a total of 14 registers
  for (byte i = 0; i < 7; i++) {
    data[i] = Wire.read() << 8 | Wire.read();
  }
}
