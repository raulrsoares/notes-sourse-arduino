//  * LCD RS pin to digital pin 12
//  * LCD Enable pin to digital pin 11
//  * LCD D4 pin to digital pin 5
//  * LCD D5 pin to digital pin 4
//  * LCD D6 pin to digital pin 3
//  * LCD D7 pin to digital pin 2
//  * LCD R/W pin to ground
//  * LCD VSS pin to ground
//  * LCD VCC pin to 5V
//  * 10K resistor:
//  * ends to +5V and ground
//  * wiper to LCD VO pin (pin 3)
// ====================================
//  * Botão 1 - Start = pin 7
//  * Botão 1 - Reset = pin 8
//  * Botão 1 - Stop = pin 9

/*biblioteca pode ser encontrada em:
  https://www.arduino.cc/reference/en/libraries/liquidcrystal/
*/

#include <LiquidCrystal.h>

int tempo = 0;
int pino = 0;
int msegundo = 0;
int segundo = 0;
int minuto = 0;
int hora = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  lcd_1.begin(16, 2); // Definição do LCD
  lcd_1.setCursor(5, 0); //+- no meio para essa palavra
  lcd_1.print("Digital");
  lcd_1.setCursor(3, 1); //+- no meio para essa palavra
  lcd_1.print("Cronograph");
  delay(5000);
  lcd_1.clear();
  lcd_1.setCursor(0, 0);
  lcd_1.print("Tempus Fugit:");
}

void loop()
{

  TempoComecaH ();
  lcd_1.setCursor(4, 1);
  lcd_1.print(":");
  TempoComecaM ();
  lcd_1.setCursor(7, 1);
  lcd_1.print(":");
  TempoComecaS ();
  lcd_1.setCursor(10, 1);
  lcd_1.print(":");
  TempoComecaMS ();
}

void TempoComecaH ()
{
  lcd_1.setCursor(2, 1);
  lcd_1.print(hora);
  if (minuto == 60)
  {
    minuto = 0;
    hora++;
  }
  if ((hora == 23) && (minuto == 59))
  {
    hora = 0;
    minuto = 0;
    segundo = 0;
    msegundo = 0;
  }
}

void TempoComecaM ()
{
  lcd_1.setCursor(5, 1);
  lcd_1.print(minuto);
  if (segundo == 60)
  {
    minuto = 0;
    hora++;
  }
}

void TempoComecaS ()
{
  lcd_1.setCursor(8, 1);
  lcd_1.print(segundo);
  if (segundo == 60)
  {
    segundo = 0;
    minuto++;
  }
}

void TempoComecaMS ()
{
  lcd_1.setCursor(11, 1);
  lcd_1.print(msegundo);
  delay(1);
  msegundo++;
  if (msegundo == 1000)
  {
    msegundo = 0;
    segundo = segundo + 1;
  }
}
