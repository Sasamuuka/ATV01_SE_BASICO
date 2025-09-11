void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500); 
  digitalWrite(10, HIGH);
  delay(250); 
  digitalWrite(10, LOW);
  delay(250);
  digitalWrite(9, HIGH);
  delay(400); 
  digitalWrite(9, LOW);
  delay(400); 
}