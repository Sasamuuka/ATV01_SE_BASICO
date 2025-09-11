float celsius = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {                
  float tensao = analogRead(A0)*(5.0 / 1023.0); 
  celsius = (tensao - 0.5) * 100.0;

  Serial.print(celsius);
  Serial.println(" C");
  delay(1000);
}
