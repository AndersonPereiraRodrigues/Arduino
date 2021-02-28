byte led[]={13,12,11,10,9};
int i=0,t;

void setup(){
  for(i=0;i<=4;i++){
    pinMode (led[i],OUTPUT);
  }
}
    
void loop(){
  t=600;
 for(i=0;i<=4;i++){
    digitalWrite(led[i],HIGH);
    delay(t); 
  }
  
  for(i=4;i>=0;i--){
    digitalWrite(led[i],LOW);
    delay(t);
    }
    
    for(i=0;i<4;i++){
    digitalWrite(led[i],HIGH);
    delay(t);
    }
    
    for(i=4;i>=0;i--){
    digitalWrite(led[i],LOW);
    delay(t);
    }
    
    for(i=0;i<3;i++){
    digitalWrite(led[i],HIGH);
    delay(t);
    }
    
     for(i=4;i>=0;i--){
    digitalWrite(led[i],LOW);
    delay(t);
    }
    
    for(i=0;i<2;i++){
    digitalWrite(led[i],HIGH);
    delay(t);
    }
    
    for(i=4;i>=0;i--){
    digitalWrite(led[i],LOW);
    delay(t);
    }
    
    for(i=0;i<1;i++){
    digitalWrite(led[i],HIGH);
    delay(t);
    }
    
    for(i=4;i>=0;i--){
    digitalWrite(led[i],LOW);
    delay(t);}
}
