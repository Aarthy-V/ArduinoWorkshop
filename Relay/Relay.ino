int vccpin = 3;
int gndpin = 2;

void setup() {
  pinMode(vccpin, OUTPIN); digitalWrite(vccpin,HIGH);
  pinMode(gndpin, OUTPIN); digitalWrite(gndpin, LOW);

}

void loop() {
  if(thermocouple_read >= 200 && times>=1800)
    digitalWrite(10,LOW);
   else
    digitalWrite(10,HIGH);

    delay(1000);

}
