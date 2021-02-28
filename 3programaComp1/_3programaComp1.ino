byte led[]={13,12,11};
int i;

void setup(){
  for(i=0;i<=2;i++){
    pinMode (led[i],OUTPUT);
  }
}
    
void loop(){
  
 for(i=0;i<=2;i++){
    digitalWrite(led[i],HIGH);
    delay(500);
  }
 for(i=0;i<=2;i++){
    digitalWrite(led[i],LOW);
  }
  delay(1000);  
}
