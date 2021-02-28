int potenciometro=0;
int tempo=0;
int led=3;

void setup(){
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
}
void loop(){
  digitalWrite(ledR,HIGH);
  delay(3000);
  digitalWrite(ledR,LOW);
  digitalWrite(ledG,HIGH);
  delay(3000);
  digitalWrite(ledG,LOW);
  digitalWrite(ledB,HIGH);
  delay(3000);
  digitalWrite(ledB,LOW);
  digitalWrite(ledR,HIGH);
  digitalWrite(ledG,HIGH);
  digitalWrite(ledB,HIGH);
  delay(3000);
  digitalWrite(ledR,LOW);
  digitalWrite(ledG,LOW);
  digitalWrite(ledB,LOW);
  delay(3000);
  Serial.println(ledR);
  Serial.println(ledG);
  Serial.println(ledB);
} 
  
