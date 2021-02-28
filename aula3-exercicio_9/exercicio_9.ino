
int valor=0;
byte led[]={11,10,9};
int i=0;

void setup(){
  Serial.begin(9600);
for(i=0;i<3;i++){
  pinMode(led[i],OUTPUT);
}}
void loop(){

for(i=0;i<7;){
if(i==0){
  for(valor=1;valor<1023;valor++)
 {
  if(valor>0){
  analogWrite(led[0],(valor/4));
  delay(10);
Serial.println(valor);} 
}delay(100);
digitalWrite(led[0],LOW);
i++;
  }
 else if(i==1){
  for(valor=1;valor<1023;valor++)
 {
  if(valor>0){
  analogWrite(led[1],(valor/4));
  delay(10);
Serial.println(valor);} 
}digitalWrite(led[1],LOW);
i++;
  }
 else if(i==2){
  for(valor=1;valor<1023;valor++)
 {
  if(valor>0){
  analogWrite(led[2],(valor/4));
  delay(10);
Serial.println(valor);} 
}delay(100);
digitalWrite(led[2],LOW);
i++;
  }
  
else if(i==3){
 for(valor=1;valor<1023;valor++)
 {
  if(valor>0){
  analogWrite(led[0],(valor/4));
  analogWrite(led[1],(valor/4));
  delay(10);}
}delay(100);
digitalWrite(led[0],LOW);
digitalWrite(led[1],LOW);
i++;
}
else if(i==4){
for(valor=1;valor<1023;valor++)
 {
  if(valor>0){
  analogWrite(led[0],(valor/4));
  analogWrite(led[2],(valor/4));
  delay(10);}
}delay(100);
digitalWrite(led[0],LOW);
digitalWrite(led[2],LOW);
i++;
}
else if(i==5){
 for(valor=1;valor<1023;valor++)
 {
  if(valor>0){
  analogWrite(led[1],(valor/4));
  analogWrite(led[2],(valor/4));
  delay(10);}
}
delay(100);
digitalWrite(led[1],LOW);
digitalWrite(led[2],LOW);
i++; 
}
else if(i==6){
 for(valor=1;valor<1023;valor++)
 {
  if(valor>0){
  analogWrite(led[0],(valor/4));
  analogWrite(led[1],(valor/4));
  analogWrite(led[2],(valor/4));
  delay(10);}
}
delay(100);
digitalWrite(led[0],LOW);
digitalWrite(led[1],LOW);
digitalWrite(led[2],LOW);
i++; 
}
}
}
  
