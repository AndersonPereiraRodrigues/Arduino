int i;
byte led[]={12,11,10};

void setup(){
  for(i=0;i<3;i++){
    pinMode(led[i],OUTPUT);
  }}
  void loop(){
    digitalWrite(led[0],HIGH);
    delay(5000);
    digitalWrite(led[0],LOW);
    digitalWrite(led[1],HIGH);
    delay(2000);
    digitalWrite(led[1],LOW);
    digitalWrite(led[2],HIGH);
    delay(5000);
    digitalWrite(led[2],LOW);
}
