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
    if (cnt >= -1){
            if (digitalRead(7) == 1) {
            cnt++;//Incrementa contador em 1
            PORTD = cnt;
            delay(timer);
            }
        }
        if (cnt >= 9){
            if (digitalRead(7) == 1) {
            cnt--;//Decrementa contador em 1
            PORTD = cnt;
            delay(timer);
        }
            while (cnt != 0)
            {
                if (digitalRead(7) == 1) {
                cnt--;//Decrementa contador em 1
                PORTD = cnt;
                delay(timer);
                }
            }
        }
    }
}
