byte potenciometro[]={0,1,2};

int i;
byte led[]={11,10,9};

void setup(){
  Serial.begin(9600);
  for(i=0;i<3;i++){
  pinMode(led[i],OUTPUT);
}}
void loop(){
  
  if(analogRead(potenciometro[0])>0){
  analogWrite(led[0],(analogRead(potenciometro[0])/4));
Serial.println(analogRead(potenciometro[0]));} 
  if(analogRead(potenciometro[1])>0){
  analogWrite(led[1],(analogRead(potenciometro[1])/4));
Serial.println(analogRead(potenciometro[1]));}
if(analogRead(potenciometro[2])>0){
  analogWrite(led[2],(analogRead(potenciometro[2])/4));
Serial.println(analogRead(potenciometro[2]));}
} 
  
