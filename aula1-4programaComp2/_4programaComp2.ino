byte led[]={13,12,11,10,9};
int i;

void setup(){
  for(i=0;i<=4;i++){
    pinMode (led[i],OUTPUT);
  }
}
    
void loop(){
  
 for(i=0;i<=4;i++){
    digitalWrite(led[i],HIGH);
    delay(500);
    digitalWrite(led[i],LOW);
    delay(500);
  }
  for(i=3;i>=0;i--){
    digitalWrite(led[i],HIGH);
    delay(500);
    digitalWrite(led[i],LOW);
    delay(500);
  }
  for(i=0;i<=4;i++){
    digitalWrite(led[i],HIGH);
  }
  delay(500);
  for(i=0;i<=4;i++){
    digitalWrite(led[i],LOW);
  }
  delay(1000); 
}
/*int led1=13,led2=12,led3=11,led4=10,led5=9;
int i=1;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  pinMode (led5,OUTPUT);}
void loop(){
    digitalWrite(led1,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led1,LOW);
    delay(300);
    
    digitalWrite(led2,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led2,LOW);
    delay(300);
    
    digitalWrite(led3,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led3,LOW);
    delay(300);
    
    digitalWrite(led4,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led4,LOW);
    delay(300);
    
    digitalWrite(led5,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led5,LOW);
    delay(300);
    
    digitalWrite(led4,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led4,LOW);
    delay(300);
    
    digitalWrite(led3,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led3,LOW);
    delay(300);
    
    digitalWrite(led2,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led2,LOW);
    delay(300);
    
    digitalWrite(led1,HIGH);//LOW
    delay(500);//tempo execução
    digitalWrite(led1,LOW);
    delay(300);
    
    digitalWrite(led1,HIGH);//LOW
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    delay(1000);//tempo execução
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    delay(500);
  }*/
