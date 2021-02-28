int Led = 12;//onde esta ligado o led
int botao = 7;
int i=1;

  void setup(){

    pinMode (Led,OUTPUT);
    pinMode (botao,INPUT);}
void loop(){
   
  for(;i<10;i++)
  {
     if(i<4){

   digitalWrite(Led,HIGH);//LOW
   delay(1000);//tempo execução
   digitalWrite(Led,LOW);
   delay(500);
   }
   else if(i>3&&i<7){
   digitalWrite(Led,HIGH);
   delay(2000);
   digitalWrite(Led,LOW);
   delay(500);}
   else if(i>6&&i<10){
     digitalWrite(Led,HIGH);
     delay(500);
     digitalWrite(Led,LOW);
     delay(500);
   }
     
   }
   if(digitalRead(botao)==HIGH){
       i=1;}
   
}

