// RUN Leds scetch

const int b0 = 13;
const int d0 = 0;
int ms_delay = 100;

void setup() {

  pinMode(d0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  delay(ms_delay);

}

void loop() {

  int value = digitalRead(d0);
  digitalWrite(LED_BUILTIN, value);
  delay(ms_delay);

}
