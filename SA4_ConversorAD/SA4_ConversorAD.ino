int sensor = 0; // Desafio fazer com um servo motor
int lado = 0;

void setup()
{
  Serial.begin(9800);
  pinMode(A0, INPUT);
  pinMode(7, INPUT);
  pinMode(2, OUTPUT);
  //   ====== Motor =======
  pinMode(3, INPUT); // Entrada positiva
  pinMode(4, INPUT); // Entrada Negativa

}

void loop()
{
  Serial.print(lado);
  conv_ad();
  botao();
  sentido();
}

void conv_ad() {
  sensor = analogRead(A0);

  digitalWrite(2, HIGH);
  delay(sensor);
  digitalWrite(2, LOW);
  delay(sensor/10);
}

void botao()
{
  if (digitalRead(7) == 1)
  {
    lado++;
  }
  if ((digitalRead(7) == 1) && (lado > 1))
  {
    lado = 0;
  }
}

void sentido()
{
  if (lado == 1)
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  if (lado == 0)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
}
