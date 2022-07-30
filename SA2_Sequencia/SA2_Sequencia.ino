void setup() {
  pinMode (8, OUTPUT); // Led_8
  pinMode (7, OUTPUT); // Led_7
  pinMode (6, OUTPUT); // Led_6
  pinMode (5, OUTPUT); // Led_5
  pinMode (4, OUTPUT); // Led_4
  pinMode (3, OUTPUT); // Led_3
  pinMode (2, OUTPUT); // Led_2
  pinMode (1, OUTPUT); // Led_1
}

void loop() {
  
  digitalWrite (1, HIGH);
  delay (250);
  digitalWrite (1, LOW);
  delay (250);
  digitalWrite (2, HIGH);
  delay (250);
  digitalWrite (2, LOW);
  delay (250);
  digitalWrite (3, HIGH);
  delay (250);
  digitalWrite (3, LOW);
  delay (250);
  digitalWrite (4, HIGH);
  delay (250);
  digitalWrite (4, LOW);
  delay (250);
  digitalWrite (5, HIGH);
  delay (250);
  digitalWrite (5, LOW);
  delay (250);
  digitalWrite (6, HIGH);
  delay (250);
  digitalWrite (6, LOW);
  delay (250);
  digitalWrite (7, HIGH);
  delay (250);
  digitalWrite (7, LOW);
  delay (250);
  digitalWrite (8, HIGH);
  delay (250);
  digitalWrite (8, LOW);
  delay (250);
}
