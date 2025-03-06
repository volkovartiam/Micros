// Arduino DUE + PCF8574 + Led Bar
// ввод числа в Serial moninor, преобразование его в двоичную с.с. и вывод результата на панель с 8 светодиодами

#include <Adafruit_PCF8574.h>


Adafruit_PCF8574 pcf;



void setup() {
  while (!Serial) { delay(10); }
  Serial.begin(9600);
  Serial.println("Adafruit PCF8574 LED blink test");

  if (!pcf.begin(0x20, &Wire)) {
    Serial.println("Couldn't find PCF8574");
    while (1);
  }

    for (int i = 0; i < 8; i++) {
        pcf.pinMode(i, OUTPUT);
    }

    
    for (int i = 0; i < 8; i++) {
      pcf.digitalWrite(i, HIGH);
    }
}

void loop() {

  Serial.println("Enter data:");
  while (Serial.available() == 0) {}
  String input_str = Serial.readString();
  input_str.trim();  

  int nb = input_str.toInt();
  if (nb > 255) {
    return;
  }
  if (nb < 0) {
    return;
  }

  int data_arr[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  int i = 7;
  while (i >= 0) {
    if ((nb >> i) & 1)
      data_arr[7 - i] = 1;
    else
      data_arr[7 - i] = 0;
    --i;
  }

  for (int i = 0; i < 8; i++) {
    pcf.digitalWrite(i, !data_arr[i]);
  }
  
}
