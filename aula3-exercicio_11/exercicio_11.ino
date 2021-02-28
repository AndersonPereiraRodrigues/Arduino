int led=13;
void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop(){
  char tecla;
  
  tecla = Serial.read();
  if(tecla=='l')
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    if(tecla=='d')
    {
      digitalWrite(led,LOW);
    }
  }
  delay(1000);
}
