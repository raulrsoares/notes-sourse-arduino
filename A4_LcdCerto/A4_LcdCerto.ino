#include <LiquidCrystal.h>

int tempo = 0;
int pino = 0;
//==== Tempo ====
int mseg = 0;
int seg = 0;
int seg10 = 0;
int minu = 0;
int minu10 = 0;
int hora = 0;
int horax0 = 0;
//==== Start, Stop, Restart ====
bool Ini = 0, Para = 0, Zera = 0;
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
  lcd_1.setCursor(0, 1);
  lcd_1.print("  00:00:00:000  ");
}

void loop() {
  TempoComecaMS ();
  TempoComecaS ();
}


void TempoComecaMS ()
{
  lcd_1.setCursor(11, 1);
  lcd_1.print(mseg);
  delay(1);
  mseg++;
  if (mseg == 1000)
  {
    mseg = 0;
    seg++;
  }
}

void TempoComecaS ()
{
  lcd_1.setCursor(9, 1);//posicionando cursor na coluna 12, da linha 2
  lcd_1.print(seg);//Escrevendo o valor da Variável
  if (seg >= 10) //Teste de estouro 10s;
  {
    seg = 0;
    seg10++;
    lcd_1.setCursor(8, 1);
    lcd_1.print(seg10);
    lcd_1.setCursor(10, 1);
    lcd_1.print("+");

  }
  if ((seg10 >= 5) && (seg >= 9))//Teste de estouro 59s;
  {
    seg = 0;
    seg10 = 0;
    minu++;
    lcd_1.setCursor(6, 1);
    lcd_1.print(minu);
    lcd_1.setCursor(7, 1);
    lcd_1.print("=");
  }

}

void TempoComecaM ()
{
  lcd_1.setCursor(7, 1);//posicionando cursor na coluna 12, da linha 2
  lcd_1.print(minu);//Escrevendo o valor da Variável
  if (minu >= 10) //Teste de estouro;
  {
    minu = 0;
    minu10++;
    lcd_1.setCursor(6, 1);
    lcd_1.print(minu10);
    lcd_1.setCursor(5, 1);
    lcd_1.print(":");
  }
  if ((seg10 >= 5) && (seg >= 9) && (minu10 >= 5) && (minu >= 9))//Teste de estouro 59s;
  {
    seg = 0;
    seg10 = 0;
    minu = 0;
    minu10++;
    hora++;
    lcd_1.setCursor(7, 1);
    lcd_1.print(hora);
    lcd_1.setCursor(5, 1);
    lcd_1.print(":");
  }

}

void TempoComecaS ()
{

}
