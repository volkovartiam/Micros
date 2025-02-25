/*
  DS1307 RTC (Real-Time-Clock) Example
  Uno       A4 (SDA), A5 (SCL)
*/

#include <Wire.h>
#include <DS1307.h>
#include <LiquidCrystal.h>

// Номера пинов Arduino, к которым подключен дисплей
constexpr uint8_t LCD_DB4_PIN = 4;
constexpr uint8_t LCD_DB5_PIN = 5;
constexpr uint8_t LCD_DB6_PIN = 6;
constexpr uint8_t LCD_DB7_PIN = 7;
constexpr uint8_t LCD_RS_PIN = 8;
constexpr uint8_t LCD_EN_PIN = 9;
constexpr uint8_t LCD_RW_PIN = 10;

// Создаем объект класса LiquidCrystal
LiquidCrystal lcd(LCD_RS_PIN, LCD_EN_PIN, LCD_DB4_PIN, LCD_DB5_PIN, LCD_DB6_PIN, LCD_DB7_PIN);

DS1307 rtc; // Initialize the RTC


int delayMs = 250;



void setup()
{
  /*
  //init Serial port
  Serial.begin(9600);
  lcd.init();                      // initialize the lcd
  while (!Serial); //wait for serial port to connect - needed for Leonardo only

  //init RTC
  Serial.println("Init RTC...");
  */

  // Начинаем работу с дисплеем
  lcd.begin(16, 2);
  // Устанавливаем положение курсора, 0-й столбец, 0-я строка
  lcd.setCursor(0, 0);
  // Выводим текст
  lcd.print("MicroTechnics");
  // Устанавливаем положение курсора, 0-й столбец, 1-я строка
  lcd.setCursor(0, 1);
  // Выводим еще немного текста, уже на другой строке
  lcd.print("Hi there, LCD!");


  /**/
  rtc.begin();

  //only set the date+time one time
  //rtc.set(0, 0, 8, 17, 04, 2021); //08:00:00 24.12.2014 //sec, min, hour, day, month, year

  //stop/pause RTC
  // rtc.stop();

  //start RTC
  rtc.start();
  /**/
}


void loop()
{
  
  uint8_t sec, min, hour, day, month;
  uint16_t year;

  //get time from RTC
  rtc.get(&sec, &min, &hour, &day, &month, &year);

  /*
  //serial output
  Serial.print("nTime: ");
  Serial.print(hour, DEC);
  Serial.print(":");
  Serial.print(min, DEC);
  Serial.print(":");
  Serial.print(sec, DEC);
  Serial.print("nDate: ");
  Serial.print(day, DEC);
  Serial.print(".");
  Serial.print(month, DEC);
  Serial.print(".");
  Serial.print(year, DEC);
  // set cursor to first line
  */
  lcd.setCursor(5, 0);
  lcd.backlight();
  lcd.print("Hello!");
  lcd.setCursor(1, 1);
  lcd.print("MICRODIGISOFT");
  //wait a second
  delay(10);

  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Date:");
  lcd.print(day);
  lcd.print("/");
  lcd.print(month);
  lcd.print("/");
  lcd.print(year);
  lcd.setCursor(1, 1);
  lcd.print("Time:");
  lcd.print(hour);
  lcd.print(":");
  lcd.print(min);
  lcd.print(":");
  lcd.print(sec);
  delay(1000);
  lcd.clear();

}














/*

void setup() 
{  
  // Начинаем работу с дисплеем
  lcd.begin(16, 2);
  // Устанавливаем положение курсора, 0-й столбец, 0-я строка
  lcd.setCursor(0, 0);
  // Выводим текст
  lcd.print("MicroTechnics");
  // Устанавливаем положение курсора, 0-й столбец, 1-я строка
  lcd.setCursor(0, 1);
  // Выводим еще немного текста, уже на другой строке
  lcd.print("Hi there, LCD!");
}
void loop() 
{
  delay(delayMs);
  lcd.clear();
  lcd.home();
  delay(delayMs);
  lcd.write("Hello world");

  delay(delayMs);
  lcd.cursor();
  //lcd.noCursor();

  delay(delayMs);
  lcd.blink();
  //lcd.noBlink();

  delay(delayMs);
  lcd.noDisplay();
  delay(delayMs);
  lcd.display();

  delay(delayMs);
  lcd.home();
  //lcd.scrollDisplayLeft();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.scrollDisplayRight();
  lcd.write("Hello world");
  delay(delayMs);

//  lcd.leftToRight();
  lcd.rightToLeft();
  lcd.write("Welcome");


}
*/
