byte led[]={13,12,11};
int i;

void setup(){
  for(i=0;i<=2;i++){
    pinMode (led[i],OUTPUT);
  }
}
    
void loop(){
  
 for(i=1;i<=2;i=i+2){
    digitalWrite(led[i],HIGH);
    delay(500);
    digitalWrite(led[i],LOW);
    delay(500);
  }
 for(i=0;i<=2;i=i+2){
    digitalWrite(led[i],HIGH);
  }
  delay(500);
for(i=0;i<=2;i=i+2){
    digitalWrite(led[i],LOW);
  }  
 for(i=1;i<=2;i=i+2){
    digitalWrite(led[i],HIGH);
  }
  delay(500);
 for(i=1;i<=2;i=i+2){
    digitalWrite(led[i],LOW);
  }
  delay(1000);
}
