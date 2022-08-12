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
    /*if (digitalRead(7) == 1) {
    cnt++;
    PORTD = cnt;
    delay(timer);
	if (cnt >= 9) {//Se contador for maior ou igual a 9
     cnt = -1;//Atribui 0 a contador
  	}
    }*/

// ============Vai de 9 direto para 0============
    if (digitalRead(7) == 1) {
        VaiVolta();
    }
}
// ============Adiciona 1 na cnt============
void Incrementa() {
    cnt++;//Incrementa contador em 1
    PORTD = cnt;
    delay(timer);
}

// ============Tira 1 na cnt============
void Decrementa(){
    cnt--;//Decrementa contador em 1
    PORTD = cnt;
    delay(timer);
    
}

// ============Adiciona 1 até 9, chegando lá manda para 0============
void Adiciociona (){
    Incrementa();
    if (cnt >= 9){
    cnt = -1;//Atribui 0 a contador 
    }
}  

// ============Vai de 9 a 0 e de 0 a 9============
void VaiVolta(){
    if (cnt <= 9){
    Incrementa();
    }
    else {
        Decrementa();
    }
}
