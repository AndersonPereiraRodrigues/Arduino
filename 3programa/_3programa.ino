int Led = 12;//onde esta ligado o led
int i=1;

  void setup(){

    pinMode (Led,OUTPUT);}
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
       delay(500);
     }
     else if(i>6&&i<10){
       digitalWrite(Led,HIGH);
       delay(500);
       digitalWrite(Led,LOW);
       delay(500);
     }
     
 }
   
}

