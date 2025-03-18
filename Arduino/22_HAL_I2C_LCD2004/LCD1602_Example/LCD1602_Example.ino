
/*
int sensorPin = A0;           // select the input pin for the potentiometer
int digitalValue = 0;         // variable to store the value coming from the sensor
float analogVoltage = 0.00;

void setup() {
  Serial.begin(9600);
}

void loop() {
  digitalValue = analogRead(sensorPin);// read the value from the analog channel
  Serial.print("digital value = ");
  Serial.print(digitalValue);        //print digital value on serial monitor
  //convert digital value to analog voltage
  analogVoltage = (digitalValue * 5.00)/1023.00;
  Serial.print("  analog voltage = ");
  Serial.println(analogVoltage);
  delay(1000);
}
*/


#include <Wire.h>
//#include <LiquidCrystal_I2C.h>  
#include "LiquidCrystal_I2C.h" 

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int l2_x=0;
int dir=1;

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Arduino UNO R3!");
  lcd.setCursor(0,1);
  lcd.print("waiting a secend");
  delay(1000);
}

void loop()
{
  if(l2_x >=0 && l2_x <=9)
    {
      lcd.setCursor(0,1);
      lcd.print("                ");
      lcd.setCursor(l2_x,1);
      lcd.print("welcoome");
      delay(500);
    }
  l2_x=l2_x+dir;
  if(l2_x > 9)
    dir=-1;
  if(l2_x < 0)
    dir=1;
 }
