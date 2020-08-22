// leitura do potenciomentro e intencidade do led
int led=11;
int potenc=A2;
int intenc=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(potenc,INPUT);
}

void loop() {
  intenc=analogRead(potenc)/4;//divide o valor por 4 pois ele retorna o valor de 0 a 1024 como o PWM só varia de 0 a 255
  analogWrite(led,intenc);
}
