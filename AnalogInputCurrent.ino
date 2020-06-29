#define voltageInput A12    
int32_t sensorValue = 0;  

void setup() {
  Serial.begin(115200);
  Serial.println("ADC  4_20mA");
}

void loop() {

  //for(int i=0; i <1000; i++){
    sensorValue = analogRead(voltageInput);
   // delayMicroseconds(30);
  //}
 // sensorValue = sensorValue / 1000;
  Serial.println("Valor do ADC");
  Serial.print(sensorValue);
  Serial.println(" ");
  delay(2000);
}
