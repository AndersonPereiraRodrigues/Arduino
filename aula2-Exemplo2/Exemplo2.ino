int Led = 12;//onde esta ligado o led
int botao = 6;

void setup(){

    pinMode (Led,OUTPUT);
    pinMode (botao,INPUT);}
void loop(){
  
  if(digitalRead(botao)==HIGH){
    digitalWrite(Led,HIGH);//LOW
  }
  else{
    digitalWrite(Led,LOW);
  }
}
