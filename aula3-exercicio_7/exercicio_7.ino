int potenciometro=0;
int valor=0;
int led=3;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop(){
  valor=analogRead(potenciometro);
  if(valor>0){
  analogWrite(led,(valor/4));
Serial.println(valor);} 
} 
  
