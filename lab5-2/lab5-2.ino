int LED[] = {9,10,11};
void setup() {
{
pinMode(led[0], OUTPUT);
pinMode(led[1], OUTPUT);
pinMode(led[2], OUTPUT);
attachInterrupt(1, blink, RISING);
}
void loop(){
 for(int i=0; i<3; i++){
  digitalWrite(led[i], HIGH);
  delay(1000);
  digitalWrite(led[i], LOW);
  delay(1000);
 }
}
void blink(){
  digitalWrite(led[0], HIGH);
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], HIGH);
  delay(1000);
}
