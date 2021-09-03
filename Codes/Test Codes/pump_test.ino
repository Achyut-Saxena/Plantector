#define pump 3

void setup() {
  // put your setup code here, to run once:
  pinMode(pump,OUTPUT);
  digitalWrite(pump,LOW);

}

void loop() {
  digitalWrite(pump,HIGH);
  delay(500);
  digitalWrite(pump,LOW);
  delay(5000);
}
