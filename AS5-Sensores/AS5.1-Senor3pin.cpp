// Placa 3 Pinos

int pol = 0;
int cm = 0;

long leDistancia(int PinoTrigger, int PinoEco)
{
  pinMode(PinoTrigger, OUTPUT);
  digitalWrite(PinoTrigger, LOW);
  delayMicroseconds(2);

  digitalWrite(PinoTrigger, HIGH);
  delayMicroseconds(10);

  digitalWrite(PinoTrigger, LOW);
  pinMode(PinoEco, INPUT);

  return pulseIn(PinoEco, HIGH);
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Distância em cm
  cm = 0.01723 * leDistancia(7, 7);
  
  pol = (cm / 2.54);
  Serial.print(pol);
  Serial.print("Pol, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
}