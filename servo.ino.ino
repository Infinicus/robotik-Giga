#include <Servo.h>
Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(6);
}

void loop() {
  myservo.write(90);
}
