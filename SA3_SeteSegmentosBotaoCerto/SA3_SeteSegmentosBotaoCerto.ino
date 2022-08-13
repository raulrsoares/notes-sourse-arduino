int timer = 500;
int cnt = 0;
int pino;
bool aux = 0;
void setup() {
  for (pino = 0; pino < 4; pino ++) {
    pinMode(pino, OUTPUT);
  }
  pinMode(7, INPUT);
  PORTD = 0;
}
void loop()
{
  if ((digitalRead(7) == 1) && (aux == 0)) {  // Teste de entrada e var Auxiliar;
    if (cnt == 8) {                           // Se entrada =1 e Aux =0;
      aux = 1;                                // Sinar de = -> Atribui valor;
    }                                         // Sinal de == -> usado para este lógico;
    cnt++;//Incrementa contador em 1
    PORTD = cnt;
    delay(timer);
  }

  if ((digitalRead(7) == 1) && (aux == 1)) {
    if (cnt == 1) {
      aux = 0;
    }
    cnt--;//Decrementa contador em 1
    PORTD = cnt;
    delay(timer);
  }
}
