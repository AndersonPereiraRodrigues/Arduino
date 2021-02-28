//PROGRAMA PARA PISCAR O LED POR UM DETERMINADO TENPO ESTIPULADO 
//NO DELAY UTILIZANDO UMA DETERMINADA PORTA DECLARADA COMO INT.
int Led = 12;//onde esta ligado o led
  void setup(){
    pinMode (Led,OUTPUT);}
void loop(){
   digitalWrite(Led,HIGH);//LOW
   delay(300);//tempo execução
   digitalWrite(Led,LOW);
   delay(100); 
}

