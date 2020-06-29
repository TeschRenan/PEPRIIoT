#define DIG_OUT_3 30
#define DIG_OUT_4 31
#define DIG_OUT_5 32
#define DIG_OUT_6 33

void setup() {

  DDRJ |= 1 << DDJ3; //DIG_OUT_1
  DDRJ |= 1 << DDJ2; //DIG_OUT_2
  
  pinMode(DIG_OUT_3, OUTPUT);
  pinMode(DIG_OUT_4, OUTPUT);
  pinMode(DIG_OUT_5, OUTPUT);
  pinMode(DIG_OUT_6, OUTPUT);

  
}

void loop() {
  
  PORTJ |= 1 << PORTJ3; //DIG_OUT_1 HIGH
  PORTJ |= 1 << PORTJ2; //DIG_OUT_2 HIGH
  
  digitalWrite(DIG_OUT_3, HIGH);
  digitalWrite(DIG_OUT_4, HIGH);
  digitalWrite(DIG_OUT_5, HIGH);
  digitalWrite(DIG_OUT_6, HIGH);
  
  delay(1000);                       // wait for a second
  
  PORTJ &= ~(1 << PORTJ3); //DIG_OUT_1 LOW
  PORTJ &= ~(1 << PORTJ2); //DIG_OUT_1 HIGH
  
  digitalWrite(DIG_OUT_3, LOW);
  digitalWrite(DIG_OUT_4, LOW);
  digitalWrite(DIG_OUT_5, LOW);
  digitalWrite(DIG_OUT_6, LOW);
  delay(1000);                       // wait for a second
}
