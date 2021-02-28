int i,e;
byte led[]={12,11,10,6,5};
int botao=7;
void setup(){
  for(i=0;i<5;i++){
    pinMode(led[i],OUTPUT);
  }
  pinMode(botao,INPUT);
}
  void loop(){
    digitalWrite(led[2],HIGH);
    digitalWrite(led[4],HIGH);
    e=digitalRead(botao);
    if(e==LOW){
      digitalWrite(led[2],LOW);
      digitalWrite(led[1],HIGH);
      delay(2000);
      digitalWrite(led[1],LOW);
      digitalWrite(led[4],LOW);
      digitalWrite(led[0],HIGH);
      digitalWrite(led[3],HIGH);
      delay(5000);
      digitalWrite(led[0],LOW);
      digitalWrite(led[3],LOW);
          }  
  }
