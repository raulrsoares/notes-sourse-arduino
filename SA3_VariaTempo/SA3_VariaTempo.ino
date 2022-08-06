int timer = 50; // Tempo que vai ser multiplicado
void setup() {
  for (int cnt = 0; cnt < 8; cnt++) {
    pinMode(8, OUTPUT);
  }
}

void loop() {
  for (int cnt = 0; cnt < 8; cnt++){
    digitalWrite(8, HIGH); //  Liga o pino:
    delay(timer);
    digitalWrite(8, LOW); //  Desliga o pino:
    delay(timer);
  }
  timer = timer * 2;
}
