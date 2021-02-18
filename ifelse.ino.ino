const int ledPinA = 3;
const int ledPinB = 4;

void setup() {
  Serial.begin(9600);
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  if(ledPinA == HIGH){
    digitalWrite(ledPinA, LOW);
    digitalWrite(ledPinB, HIGH);
    delay(1000);
  }
  else if(ledPinA == LOW){
    digitalWrite(ledPinA, HIGH);
    digitalWrite(ledPinB, LOW);
    delay(1000);
  }
}
