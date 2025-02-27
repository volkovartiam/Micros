/*
  DS1307 RTC (Real-Time-Clock) Example
  Uno       A4 (SDA), A5 (SCL)
*/

#include <Bonezegei_DS1307.h>
#include <LiquidCrystal.h>

// Номера пинов Arduino, к которым подключен дисплей
constexpr uint8_t LCD_DB4_PIN = 4;
constexpr uint8_t LCD_DB5_PIN = 5;
constexpr uint8_t LCD_DB6_PIN = 6;
constexpr uint8_t LCD_DB7_PIN = 7;
constexpr uint8_t LCD_RS_PIN = 8;
constexpr uint8_t LCD_EN_PIN = 9;
constexpr uint8_t LCD_RW_PIN = 10;


LiquidCrystal lcd(LCD_RS_PIN, LCD_EN_PIN, LCD_DB4_PIN, LCD_DB5_PIN, LCD_DB6_PIN, LCD_DB7_PIN);

Bonezegei_DS1307 rtc(0x68);

int delayMs = 250;


void setup()
{
  
  // Начинаем работу с дисплеем
  lcd.begin(16, 2);
  // Устанавливаем положение курсора, 0-й столбец, 0-я строка
  lcd.setCursor(0, 0);
  // Выводим текст
  lcd.print("Arduino is a power");
  // Устанавливаем положение курсора, 0-й столбец, 1-я строка
  lcd.setCursor(0, 1);
  // Выводим еще немного текста, уже на другой строке
  lcd.print("Hi there, LCD!");

  rtc.begin();
  /*
  rtc.setFormat(24);        //Set 12 Hours Format
  rtc.setTime("8:55:15");  //Set Time    Hour:Minute:Seconds
  rtc.setDate("2/27/25");   //Set Date    Month/Date/Year
  */
}


void loop()
{
  
  uint8_t sec, min, hour, day, month;
  uint16_t year;

  if(rtc.getTime() ) {
    sec = rtc.getSeconds();
    min = rtc.getMinute();
    hour = rtc.getHour();
    
    day = rtc.getDate();
    month = rtc.getMonth();
    year = rtc.getYear();
  }

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
  delay(100);
  lcd.clear();
/**/
}







