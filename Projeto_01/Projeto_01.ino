//Projeto 1 - LED piscando 
//declaração do pino
int ledPin=10;
//declaração da função do pino
void setup() {
  //ledPin local do led pino 10
  //OUTPUT quer dizer porta de saida 
  pinMode(ledPin, OUTPUT);
}
//declaração do codigo
void loop() {
  //digitalWrite(,); fução para ligar ou desligar 5V na porta indicada
  //ledPin local do led pino 10
  //HIGH sinal alto 5V
  //LOW sinal baixo 0V
  digitalWrite(ledPin, HIGH);
  //delay pausa pelo tempo em milisegundos
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
