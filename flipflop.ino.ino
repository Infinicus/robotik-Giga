const int ledPinA = 3;
const int ledPinB = 4;

void setup() {
  Serial.begin(9600);
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, LOW);
  delay(1000);

  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, HIGH);
  delay(1000);
}
