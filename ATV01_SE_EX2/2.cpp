int btn = 4;
int lde = 3;
int ldd = 2;
void setup()
{
  pinMode(btn, INPUT);
  pinMode(lde, OUTPUT);
  pinMode(ldd, OUTPUT);
}

void loop()
{
  if(digitalRead(btn) == 1){
  	digitalWrite(lde, HIGH);
    delay(200);
    digitalWrite(lde, LOW);

    digitalWrite(ldd, HIGH);
    delay(350);
    digitalWrite(ldd, LOW);
  }
}