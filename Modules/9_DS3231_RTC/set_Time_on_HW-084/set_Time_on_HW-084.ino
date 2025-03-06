// Установка времени отсчёта
#include <Wire.h>

void setup() {
  Wire.begin(); // старт i2c
  Wire.beginTransmission(0x68); // начинаем обмен с DS3231 с i2c адресом 0x68
  byte arr[] = {0x00, 0x02, 0x30, 0x17, 0x03, 0x02, 0x01, 0x19};
  Wire.write(arr, 8); // записываем 8 байтов массива arr
  Wire.endTransmission(); // завершение передачи
}

void loop() {
// здесь не делаем ничего
}
