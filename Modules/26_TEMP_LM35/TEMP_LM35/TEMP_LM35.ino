int raw = 0;
float temp = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  raw = analogRead(A0);
  temp = (raw/1023.0)*5.0*1000/10;
  Serial.println(temp);
  delay(500);
}
