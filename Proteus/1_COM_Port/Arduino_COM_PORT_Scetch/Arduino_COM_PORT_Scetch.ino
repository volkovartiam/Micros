 
void setup(){
    Serial.begin(9600);
    while (!Serial);

} 

void loop(){
    Serial.println("\nDatas transmitted"); 
    delay(500);
    
}
