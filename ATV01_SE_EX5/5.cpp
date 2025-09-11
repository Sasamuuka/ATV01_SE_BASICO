int pinoLDR = A0;
int pinoLampada = 2;
int limiarLuz = 450;

void setup() {
  pinMode(pinoLampada, OUTPUT);
}

void loop() {
  int valorLDR = analogRead(pinoLDR);
  if (valorLDR < limiarLuz) {
    digitalWrite(pinoLampada, HIGH);
  } else {
    digitalWrite(pinoLampada, LOW);
  }
  delay(100);
}