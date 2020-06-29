
// 
// IN_VCA_2 = PE3 = DigitalPin 5
// IN_VCA_3 = PE4 = DigitalPin 2
// IN_VCA_4 = PE5 = DigitalPin 3
// IN_VCA_5 = PCO = DigitalPin 37
// IN_VCA_6 = PC1 = DigitalPin 36
// IN_VCA_7 = PC2 = DigitalPin 35


void setup() {

  DDRE &= ~(DDE2); // SET IN_VCA_1 = PE2 como entrada.
  pinMode(30, OUTPUT);

}

void loop() {

  if (!(PINE & (1<<PINE2))){ //Aplicado apenas para a IN_VCA_1 = PE2
    digitalWrite(30, HIGH);
  } else {
    digitalWrite(30, LOW);
  }
}
