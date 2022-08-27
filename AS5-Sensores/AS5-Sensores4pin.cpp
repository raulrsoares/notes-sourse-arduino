// Placa de 4 Pino

#define PinoTrigger 6 // O Trigger emite o pulso
#define PinoEcho 5	  // O Echo recebe o pulso

int duracao = 0;
int distancia = 0;

void setup()
{
	pinMode(PinoTrigger, OUTPUT);
	pinMode(PinoEcho, INPUT);
	pinMode(12, OUTPUT); // Led verme
	pinMode(11, OUTPUT); // Led Amarelalha
	pinMode(10, OUTPUT); // Led Verde
	Serial.begin(9600);
}

void loop()
{
	Distancia();
}

void Distancia()
{
	digitalWrite(PinoTrigger, HIGH);
	delayMicroseconds(10);
	digitalWrite(PinoTrigger, LOW);

	duracao = pulseIn(PinoEcho, HIGH); // Armazena
	distancia = duracao * 0.017175;
	Serial.print(distancia);
	Serial.println("cm");
	delay(100);
	Adistancia();
}

void Adistancia()
{
	if (distancia == 335)
	{
		digitalWrite(10, LOW);
		digitalWrite(11, LOW);
		digitalWrite(12, LOW);
	}
	if ((distancia < 335) && (distancia > 200))
	{
		digitalWrite(10, HIGH);
		digitalWrite(11, LOW);
		digitalWrite(12, LOW);
	}
	if ((distancia < 200) && (distancia > 100))
	{
		digitalWrite(10, LOW);
		digitalWrite(11, HIGH);
		digitalWrite(12, LOW);
	}
	if (distancia < 100)
	{
		digitalWrite(10, LOW);
		digitalWrite(11, LOW);
		digitalWrite(12, HIGH);
	}
}