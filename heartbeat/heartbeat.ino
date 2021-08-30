void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(100);
  int time = millis();
  Serial.print(time);
  Serial.println(" ms have elapsed");
  digitalWrite(13, LOW);
  delay(900);
}
