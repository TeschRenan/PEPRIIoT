#define voltageOutput A14    

//Tensão no lado isolado = 3,76V
//Tensão no lado uC = 5,0V
void setup() {
  Serial.begin(115200);
  Serial.println("DAC 0-10v");
  pinMode(voltageOutput, OUTPUT);
  analogWrite(voltageOutput,255);
}

void loop() {
  /*
  for(int i = 0; i<=255;i++){
    analogWrite(voltageOutput,i);
    delay(5);
  }
  for(int i = 255; i>=0;i--){
    analogWrite(voltageOutput,i);
    delay(5);
  }
*/
  delay(2000);
}
