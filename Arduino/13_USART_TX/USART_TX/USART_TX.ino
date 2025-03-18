
String LED_ON = "LED;ON;";
String LED_OFF  = "LED;OFF;";

String VERSION_GET  = "GET;VERSION;" ;
String VERSION = "0.10;";

String command = "";                       // Переменная для хранения команды
///////////////////////////////////////////////////////////////////////////////////////////////


// Настройки порта
int delaySerialPrint = 25;
int serialBaudRate = 9600;

// Настройки таймеров
uint32_t timerReadPort;
uint32_t timerReadPortDelay = 25;

////// Конфигурация выводов
int LED = 13;


void setup() {

    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);

    Serial.begin(serialBaudRate);  // Открываем порт на скорости 9600 бод.

}


void loop() {
    
    if (millis() - timerReadPort >= timerReadPortDelay ) {          // чтение порта
      timerReadPort = millis();                                     // сброс таймера
      print_to_serial("Hello_world");




      
      //readFromPort();
    }

}


void readFromPort(){

  if(Serial.available()){
      char ch = Serial.read();
      if(ch == '\n') {
        if(command.length() > 1){
              command = command.substring(0, command.length() - 1 );      //исключаем символ переноса строки
        }
        setCommand(command);
        command = "";
      }
      else {
          command += ch;
          if(command.length() > 25 ) {
            command = "";
          }
      }
  }
}


void print_to_serial(String str){
    //Serial.println(str);
    Serial.print(str);
    delay(delaySerialPrint);
}


/////////////////////////////////////////////////////////////////////////////////////////////
void setCommand(String com){
  setLED(com);
  getVersion(com);
}

/////////// Управление светодиодами
void setLED( String coms ){
    if(coms.equals(LED_ON) ){
      digitalWrite(LED, HIGH);
      print_to_serial(LED_ON + "OK");
    }
    if(coms.equals(LED_OFF) ){
      digitalWrite(LED, LOW);
      print_to_serial(LED_OFF + "OK");
    }
}

/////////// Получение версии ПО
void getVersion( String coms ){
    if(coms.equals(VERSION_GET) ){
      print_to_serial("Current version " + VERSION);
    }
}

