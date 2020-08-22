// Alteração velocidade do blink led
int led = 13;
int pot = A2;
int valor;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  valor = analogRead(pot);
  digitalWrite(led, HIGH);
  delay(valor);
  digitalWrite(led, LOW);
  delay(valor);
}
