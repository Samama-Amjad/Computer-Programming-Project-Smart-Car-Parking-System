const char* secretKey = "ACCESS_123";

void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char incomingByte = Serial.read();

    if (incomingByte == 'R') {
      digitalWrite(2, HIGH);
      Serial.print(secretKey);
      delay(500);
      digitalWrite(2, LOW);
    }
  }
}