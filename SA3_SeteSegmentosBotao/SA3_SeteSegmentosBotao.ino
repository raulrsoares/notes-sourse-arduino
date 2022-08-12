// Raul Soares
//============================================
// Essa aplicação oferece a disponibildade
// de poder ter um botaão que possa ir de
// 0 a 9 e poder voltar consequentemente.
//============================================
// Projeto feito para as aulas de programação
// arduino no Senai Vila Mariana.
//============================================
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
// ============Vai de 9 direto para 0============
    if (digitalRead(7) == 1) {
        VaiVolta();
    }
}
// ============Adiciona 1 até 9, chegando lá manda para 0============
void Adiciona(){
    Incrementa();
    if (cnt >= 9){
    cnt = -1;//Atribui 0 a contador 
    }
}  
// ============Vai de 9 a 0 e de 0 a 9============
void VaiVolta(){
    if (cnt >= -1){
        Incrementa();
    }
    if (cnt >= 9){
        Decrementa();
        while (cnt != 0)
        {
            Decrementa();
        }
        
    }
    
}
// ============Adiciona 1 na cnt============
void Incrementa(){
    if (digitalRead(7) == 1) {
        cnt++;//Incrementa contador em 1
        PORTD = cnt;
        delay(timer);
    }
}
// ============Tira 1 na cnt============
void Decrementa(){
    if (digitalRead(7) == 1) {
        cnt--;//Decrementa contador em 1
        PORTD = cnt;
        delay(timer);
    }
}
