int led1 = 16;
void setup() {
  pinMode(16, OUTPUT);

}

void loop() {
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led1, HIGH);
  delay(500);
}
