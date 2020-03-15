int buton = 2, kir = 9, sari = 7, yes = 5, durum;
unsigned long int zaman = 0;
long int sayac = 0;
void setup() {
  pinMode(kir, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(yes, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(yes, LOW);
  while (1) { 
    digitalWrite(kir, HIGH); 
    if (millis() > (sayac + 1000)) 
      break;
  }
  digitalWrite(kir, LOW);
  while (1) { 
    digitalWrite(sari, HIGH);
    if (digitalRead(buton) == HIGH || millis() > (sayac + 2000))
      break;
  }
  digitalWrite(sari, LOW);
  while (1) {
    digitalWrite(yes, HIGH);
    if (digitalRead(buton) == HIGH || millis() > (sayac + 3000))
      break;
  }
  sayac += 3000;
}
