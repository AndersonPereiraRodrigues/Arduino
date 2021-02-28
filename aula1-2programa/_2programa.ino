int Led = 12;//onde esta ligado o led
int i=1;

  void setup(){

    pinMode (Led,OUTPUT);}
void loop(){
   
  for(;i<=10;i++)
  {
     if(i<=10){

   digitalWrite(Led,HIGH);//LOW
   delay(300);//tempo execução
   digitalWrite(Led,LOW);
   delay(100);
   
     }
     else
     {
       digitalWrite(Led,LOW);
       delay(100);
     }
     
   }
   
}

