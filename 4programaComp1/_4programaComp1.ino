int led1=13,led2=12,led3=11,led4=10,led5=9;
int i=1;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  pinMode (led5,OUTPUT);}
void loop(){
  digitalWrite(led1,HIGH);//LOW
  digitalWrite(led5,HIGH);//LOW
  delay(1000);//tempo execução
  digitalWrite(led1,LOW);
  digitalWrite(led5,LOW);//LOW
  delay(500);
  
  digitalWrite(led2,HIGH);//LOW
  digitalWrite(led4,HIGH);//LOW
  delay(1000);//tempo execução
  digitalWrite(led2,LOW);
  digitalWrite(led4,LOW);//LOW
  delay(500);
  
  digitalWrite(led3,HIGH);//LOW
  delay(1000);//tempo execução
  digitalWrite(led3,LOW);
  delay(500);
  
  digitalWrite(led2,HIGH);//LOW
  digitalWrite(led4,HIGH);//LOW
  delay(1000);//tempo execução
  digitalWrite(led2,LOW);
  digitalWrite(led4,LOW);//LOW
  delay(500);
  
  digitalWrite(led1,HIGH);//LOW
  digitalWrite(led5,HIGH);//LOW
  delay(1000);//tempo execução
  digitalWrite(led1,LOW);
  digitalWrite(led5,LOW);//LOW
  delay(500);
}
