//Projeto_02 - Piscar led em 2 configurações
//declaração do pino
int led = 10;

//declaração da função do pino
void setup()
{
  // declarado pino como saida OUTPUT
  pinMode(led, OUTPUT);
}

//declaração do codigo
void loop()
{
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(100);
  }
  delay(100);
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(led, HIGH);
    delay(400);
    digitalWrite(led, LOW);
    delay(100);
  }
  delay(5000);
}
