int timer = 350;
int pino;
int cnt;
void setup() {
  for (pino = 0; pino < 4; pino ++) {
    pinMode(pino, OUTPUT);
  }
}

void loop()
{
  for (cnt = 0; cnt < 10; cnt++) {
  PORTD = cnt;
  delay(timer);
  }
}
