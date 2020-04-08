#define RED_PIN D1

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED_PIN, LOW);
  delay(1000);
  digitalWrite(RED_PIN, HIGH);
  delay(1000);
}
