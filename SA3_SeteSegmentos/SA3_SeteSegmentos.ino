int timer = 350;
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(0, LOW); //Monstra 0 no Display
  delay(350); //Tempo de Espera

  //Mostrar 1 no Display
  digitalWrite(0, HIGH);
  delay(timer);

  //Mostrar 2 no Display
  digitalWrite(1, HIGH);
  delay(timer);

  //Mostrar 3 no Display
  digitalWrite(1, LOW);
  delay(timer);
  digitalWrite(1, HIGH);
  delay(timer);

  //Mostrar 4 no Display
  digitalWrite(2, LOW);
  delay(timer);
  digitalWrite(2, HIGH);
  delay(timer);

  //Mostrar 5 no Display
  digitalWrite(1, LOW);
  digitalWrite(1, HIGH);
  delay(timer);

  //Mostrar 6 no Display
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  delay(timer);

  //Mostrar 7 no Display
  digitalWrite(1, LOW);
  digitalWrite(1, HIGH);
  delay(timer);

  //Mostrar 8 no Display
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  delay(timer);

  //Mostrar 9 no Display
  digitalWrite(1, LOW);
  digitalWrite(1, HIGH);
  delay(timer);
}
