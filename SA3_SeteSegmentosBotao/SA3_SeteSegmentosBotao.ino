int timer = 500;
int pino;
int cnt = 0;

void setup() {
  for (pino = 0; pino < 4; pino ++) {
    pinMode(pino, OUTPUT);
  }
  pinMode(7, INPUT);
}

void loop()
{
  if (digitalRead(7) == 1) {
    cnt++;
    PORTD = cnt;
    delay(timer);
	if (cnt >= 9) { //Se contador for maior ou igual a 9
    cnt = -1; //Atribui 0 a contador
  	}
  }
}
