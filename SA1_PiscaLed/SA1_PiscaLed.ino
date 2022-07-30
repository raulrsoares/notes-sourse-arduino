void setup() {
  pinMode (8, OUTPUT); // Led
}

void loop() {
  digitalWrite (8, HIGH); //ligada
  delay (500); //delay
  digitalWrite (8, LOW); //desligada
  delay (100);
  digitalWrite (8, HIGH);
  delay (100);
  digitalWrite (8, LOW);
  delay (1000);
}
