int potenciometro=0;
int tempo=0;
int led=3;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop(){
  tempo=analogRead(potenciometro);
  digitalWrite(led,HIGH);
  delay(tempo*2);
  tempo=analogRead(potenciometro);
  digitalWrite(led,LOW);
  delay(tempo*2);
Serial.println(tempo);
} 
  
