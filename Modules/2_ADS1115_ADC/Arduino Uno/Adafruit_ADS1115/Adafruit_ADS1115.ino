#include <Wire.h> // Библиотека для работы с шиной I2C
#include <Adafruit_ADS1X15.h> // Библиотека для работы с модулями ADS1115 и ADS1015
Adafruit_ADS1115 ads; // Создание объекта ads для общения через него с модулем

void setup() {
  Serial.begin(9600); // Инициализация серийного порта

  // Установка коэффициента усиления 2/3
  ads.setGain(GAIN_TWOTHIRDS);

  // ВОЗМОЖНЫЕ ВАРИАНТЫ УСТАНОВКИ КУ:
  // ads.setGain(GAIN_TWOTHIRDS); | 2/3х | +/-6.144V | 1bit = 0.1875mV    |
  // ads.setGain(GAIN_ONE);       | 1х   | +/-4.096V | 1bit = 0.125mV     |
  // ads.setGain(GAIN_TWO);       | 2х   | +/-2.048V | 1bit = 0.0625mV    |
  // ads.setGain(GAIN_FOUR);      | 4х   | +/-1.024V | 1bit = 0.03125mV   |
  // ads.setGain(GAIN_EIGHT);     | 8х   | +/-0.512V | 1bit = 0.015625mV  |
  // ads.setGain(GAIN_SIXTEEN);   | 16х  | +/-0.256V | 1bit = 0.0078125mV |

  ads.begin(); // Инициализация модуля ADS1115
}

void loop() {
  // Переменные для хранения значений АЦП каждого канала
  int16_t adc0, adc1, adc2, adc3;

  adc0 = ads.readADC_SingleEnded(0); // Чтение АЦП нулевого канала
  adc1 = ads.readADC_SingleEnded(1); // Чтение АЦП первого канала
  adc2 = ads.readADC_SingleEnded(2); // Чтение АЦП второго канала
  adc3 = ads.readADC_SingleEnded(3); // Чтение АЦП третьего канала

  // Расчёт фактических напряжений на каждом канале
  float u0 = float(adc0) * 0.1875 / 1000.0;
  float u1 = float(adc1) * 0.1875 / 1000.0;
  float u2 = float(adc2) * 0.1875 / 1000.0;
  float u3 = float(adc3) * 0.1875 / 1000.0;


  // Вывод значения АЦП и фактичесгого напряжения на каналах 0-3
  Serial.print("ADC_AIN0="); Serial.print(adc0);
  Serial.print(" VOLTAGE_AIN0="); Serial.print(u0); Serial.println("V");
  Serial.print("ADC_AIN1="); Serial.print(adc0);
  Serial.print(" VOLTAGE_AIN1="); Serial.print(u1); Serial.println("V");
  Serial.print("ADC_AIN2="); Serial.print(adc0);
  Serial.print(" VOLTAGE_AIN2="); Serial.print(u2); Serial.println("V");
  Serial.print("ADC_AIN3="); Serial.print(adc0);
  Serial.print(" VOLTAGE_AIN3="); Serial.print(u3); Serial.println("V");
  Serial.println(" ");

  delay(1000);
}
