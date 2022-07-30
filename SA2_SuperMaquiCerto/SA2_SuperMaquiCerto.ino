int timer = 100;    //Quanto maior o tempo, mais devagar
void setup() {
  // Usando o laço de repetição para configurar o modo de uso de que use o menos de linhas possiveis
  for (int pino = 1; pino <= 8; pino++) {
    pinMode(pino, OUTPUT);
  }
}

void loop() {
  for (int pino = 1; pino <= 8; pino++) { // Loop do mais baixo para o mais alto:
    digitalWrite(pino, HIGH); //  Liga o pino
    delay(timer);
    digitalWrite(pino, LOW); //  Desliga o pino:
  }
  for (int pino = 8; pino >= 1; pino--) { // Loop do mais alto para o mais baixo:
    digitalWrite(pino, HIGH); //  Liga o pino
    delay(timer);
    digitalWrite(pino, LOW); //  Desliga os pinos:
  }
}
