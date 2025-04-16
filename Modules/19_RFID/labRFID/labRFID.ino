#include <SPI.h>
#include <MFRC522.h>

#define RELAY_PIN 6 // Вывод для управления реле
#define RELAY_ON 0  // Уровень для включения реле
#define RELAY_OFF 1 // Уровень для выключения реле

#define RST_PIN 7   // Вывод RST для RFID-модуля
#define SS_PIN 10   // Вывод SS для RFID-модуля
MFRC522 mfrc522(SS_PIN, RST_PIN); // Создание экземпляра MFRC522

void setup() {
  Serial.begin(9600); // Инициализация последовательного порта
  SPI.begin();        // Инициализация SPI
  mfrc522.PCD_Init(); // Инициализация MFRC522
  pinMode(RELAY_PIN, OUTPUT); // Настройка вывода реле как выход
  digitalWrite(RELAY_PIN, RELAY_OFF); // Выключение реле
}

void loop() {
  // Проверка наличия новой RFID-карты
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    // Сравнение UID карты с разрешенными значениями
    if (compare_uid(mfrc522.uid.uidByte, mfrc522.uid.size)) {
      digitalWrite(RELAY_PIN, RELAY_ON); // Включение реле
      delay(4000); // Время активации реле
      digitalWrite(RELAY_PIN, RELAY_OFF); // Выключение реле
    }
  }
}

// Функция сравнения UID
boolean compare_uid(byte *buffer, byte bufferSize) {
  boolean isSizeEqual = false;

  if(bufferSize==4) {
    isSizeEqual = true;
  }

  boolean isHexEqual = false;
  byte bufferForCheck[] = {0xC3, 0x6A, 0xCC, 0x2C};
  for (byte i = 0; i < bufferSize; i++)
  {
    if(buffer[i] == bufferForCheck[i]){
      isHexEqual = true;
    }else{
      i = bufferSize;
    }
  }

  return (isSizeEqual&&bufferForCheck);
}

  /*
  Card UID:4
  C3 6A CC 2C
  PICC type: MIFARE 1KB
  */

    

