int led=11;
void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop(){
  int tecla;
  int X=0;
  
  
  tecla = Serial.read();
  if(tecla=='0')
  {
    analogWrite(led,LOW);
  }

    else if(tecla=='1')
    {
      analogWrite(led,HIGH);
    }
 
    else if(tecla=='2')
    {
      analogWrite(led,X);
      X=X+20;
      
    }

  delay(500);
}
