// Подключаем библиотеку
#include <LiquidCrystal.h>
// Номера пинов Arduino, к которым подключен дисплей
constexpr uint8_t LCD_DB4_PIN = 4;
constexpr uint8_t LCD_DB5_PIN = 5;
constexpr uint8_t LCD_DB6_PIN = 6;
constexpr uint8_t LCD_DB7_PIN = 7;
constexpr uint8_t LCD_RS_PIN = 8;
constexpr uint8_t LCD_EN_PIN = 9;
constexpr uint8_t LCD_RW_PIN = 10;

int delayMs = 250;

// Создаем объект класса LiquidCrystal
LiquidCrystal lcd(LCD_RS_PIN, LCD_RW_PIN, LCD_EN_PIN, LCD_DB4_PIN, LCD_DB5_PIN, LCD_DB6_PIN, LCD_DB7_PIN);
// LiquidCrystal lcd(LCD_RS_PIN, LCD_EN_PIN, LCD_DB4_PIN, LCD_DB5_PIN, LCD_DB6_PIN, LCD_DB7_PIN);

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