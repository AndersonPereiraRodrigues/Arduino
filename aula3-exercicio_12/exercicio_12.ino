int botao=6;
int i;
void setup(){
  Serial.begin(9600);
  pinMode(botao,INPUT);
  digitalWrite(botao,HIGH);
}
void loop(){
  i=digitalRead(botao);
  
  if(i==LOW){
    
  Serial.println("botao precionado");
  delay(1000);
  }
}
