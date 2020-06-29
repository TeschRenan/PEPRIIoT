
// DIG_IN_1 = PL1 = DigitalPin 48
// DIG_IN_2 = PL0 = DigitalPin 49
// DIG_IN_3 = PG4 
// DIG_IN_4 = PG3
// DIG_IN_5 = PH7
// DIG_IN_6 = PB7 = DigitalPin 13

#define DIG_IN_1 48
#define DIG_IN_2 49
#define DIG_IN_6 13

void setup() {
  pinMode(DIG_IN_1, INPUT);
  pinMode(DIG_IN_2, INPUT);
  DDRG &= ~(DDG4); // SET DIG_IN_3 = PG4 como entrada.
  DDRG &= ~(DDG3); // SET DIG_IN_4 = PG3 como entrada.
  DDRH &= ~(DDH7); // SET DIG_IN_5 = PH7 como entrada.
  pinMode(DIG_IN_6, INPUT);
  
  pinMode(30, OUTPUT); //DIG_OUT_3
  pinMode(31, OUTPUT); //DIG_OUT_4
  pinMode(32, OUTPUT); //DIG_OUT_5
  pinMode(33, OUTPUT); //DIG_OUT_6
}

void loop() {

  if (!(PING & (1<<PING3))){
    digitalWrite(30, HIGH);
    digitalWrite(31, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(33, HIGH);
  } else {
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
  }
}
