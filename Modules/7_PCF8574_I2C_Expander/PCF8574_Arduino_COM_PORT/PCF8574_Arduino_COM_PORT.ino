#include <Adafruit_PCF8574.h>

Adafruit_PCF8574 pcf;

void setup() {
  while (!Serial) { 
    delay(10); 
  }
  
  Serial.begin(9600);
  print_All_I2C_Addresses();
  delay(500);
  
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
  delay(500);
}

void loop() {
  Serial.println("Enter data:");
  while (Serial.available() == 0) {
  }

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



void print_All_I2C_Addresses(){
    byte error, address;
    int nDevices;
 
    Serial.println("Scanning...");
 
    nDevices = 0;
    for(address = 8; address < 127; address++ ){
        Wire.beginTransmission(address);
        error = Wire.endTransmission();
 
        if (error == 0){
            Serial.print("I2C device found at address 0x");
            if (address<16)
                Serial.print("0");
            Serial.print(address,HEX);
            Serial.println(" !");
 
            nDevices++;
        }
        else if (error==4) {
            Serial.print("Unknow error at address 0x");
            if (address<16)
                Serial.print("0");
            Serial.println(address,HEX);
        } 
    }
    if (nDevices == 0)
        Serial.println("No I2C devices found\n");
    else
        Serial.println("All devices founded\n");
 
    Serial.println();
}

//  -- END OF FILE --

