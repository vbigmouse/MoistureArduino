void setup() {
  // initiallize serial communication bit rate 9600
  Serial.begin(9600);
}

void loop() {
  // read input on pin 0
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  
  delay(100);
}
