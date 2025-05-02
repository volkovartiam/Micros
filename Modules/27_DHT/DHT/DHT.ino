#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temp = dht.readTemperature();

  if(isnan(humidity)|isnan(temp)) {
      Serial.println("Can't read from DHT11");
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\t");

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.println("°C");

  delay(500);
}
