#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>

int pinCS = 10;
int numberOfHorizontalDisplays = 3;
int numberOfVerticalDisplays = 1;
Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays,numberOfVerticalDisplays); 
String tape = "Ettron";
int wait = 50;

int spacer = 1;
int width = 5 + spacer;

void setup() {
  matrix.setIntensity(7);

}
void loop() {
  for ( int i = 0; i < width * tape.length() + matrix.width () -1 - spacer; i++){
  
       matrix.fillScreen(LOW);

       int letter = i/width;
       int x = (matrix.width() - 1) - i % width;
       int y = (matrix.height() - 8)/ 2;

         while (x + width - spacer >= 0 && letter >= 0)
         {
         
          if (letter < tape.length())
          {
            matrix.drawChar(x, y, tape[letter], HIGH,LOW, 1);
  }
     letter--;
     x -= width;
  }
  matrix.write();
  delay(wait);
  }
}


/*
#include "led.c"
void setup() {
  initSPITransfer();
}
void loop() {
    ledprint(1234);
}
*/

