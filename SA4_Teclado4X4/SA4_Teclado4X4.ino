#include <LiquidCrystal.h>

//Passado definicao dos pinos para a funcao LCD:
//LiquidCrystal lcd(rs, en, d4, d3, d2, d1);
LiquidCrystal lcd_1(6, 5, 4, 3, 2, 1);

//======= Pino =======
int pino;
//======= Teclas =======
char ctecla;

void setup()
{
  Inicial();
  Pinos();
  ctecla = 0x20;
}

void loop()
{
  Imprimir();
  linhas();
  delay(100);
}

void Inicial()
{
  lcd_1.begin(16, 2);           // Definição do LCD
  lcd_1.setCursor(0, 0);        //+- no meio para essa palavra
  lcd_1.print("Tecl. Matricial");
  lcd_1.setCursor(3, 1); //+- no meio para essa palavra
  lcd_1.print("4X4 Branco");
  delay(5000);
  lcd_1.clear();
  lcd_1.setCursor(0, 0);
  lcd_1.print("Botao Apertado:");
  lcd_1.setCursor(4, 1); //centralizar
  lcd_1.print(":      :");
}

void Pinos()
{
  for (pino = 8; pino < 12; pino ++) {
    pinMode(pino, OUTPUT);
  }
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
}

void Imprimir()
{
  lcd_1.setCursor(8, 1); //centralizar
  lcd_1.print(ctecla);
}

void linhas()
{

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

  if ((digitalRead(8) == 0) && (digitalRead(A3) == 0)) { // colunoa 1
    ctecla = '1';
  }
  if ((digitalRead(8) == 0) && (digitalRead(A2) == 0)) { // colunoa 2
    ctecla = '2';
  }
  if ((digitalRead(8) == 0) && (digitalRead(A1) == 0)) { // colunoa 3
    ctecla = '3';
  }
  if ((digitalRead(8) == 0) && (digitalRead(A0) == 0)) { // colunoa 4
    ctecla = 'A';
  }


  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

  if ((digitalRead(9) == 0) && (digitalRead(A3) == 0)) { // colunoa 1
    ctecla = '4';
  }
  if ((digitalRead(9) == 0) && (digitalRead(A2) == 0)) { // colunoa 2
    ctecla = '5';
  }
  if ((digitalRead(9) == 0) && (digitalRead(A1) == 0)) { // colunoa 3
    ctecla = '6';
  }
  if ((digitalRead(9) == 0) && (digitalRead(A0) == 0)) { // colunoa 4
    ctecla = 'B';
  }

  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  if ((digitalRead(10) == 0) && (digitalRead(A3) == 0)) { // colunoa 1
    ctecla = '7';
  }
  if ((digitalRead(10) == 0) && (digitalRead(A2) == 0)) { // colunoa 2
    ctecla = '8';
  }
  if ((digitalRead(10) == 0) && (digitalRead(A1) == 0)) { // colunoa 3
    ctecla = '9';
  }
  if ((digitalRead(10) == 0) && (digitalRead(A0) == 0)) { // colunoa 4
    ctecla = 'C';
  }

  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  if ((digitalRead(11) == 0) && (digitalRead(A3) == 0)) { // colunoa 1
    ctecla = '*';
  }
  if ((digitalRead(11) == 0) && (digitalRead(A2) == 0)) { // colunoa 2
    ctecla = '0';
  }
  if ((digitalRead(11) == 0) && (digitalRead(A1) == 0)) { // colunoa 3
    ctecla = '#';
  }
  if ((digitalRead(11) == 0) && (digitalRead(A0) == 0)) { // colunoa 4
    ctecla = 'D';
  }
}
