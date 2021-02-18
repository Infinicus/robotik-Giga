void setup() {
  Serial.begin(9600);
}

void loop() {
  countdown(10);
}

void countdown(int number){
  for(int i = number; i > 0; i--){
    Serial.println(i);
  }
  Serial.println("Finished");
}
