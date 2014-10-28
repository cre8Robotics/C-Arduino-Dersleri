int fotoDirencPini=0;
int ledPini=13;
void setup(){
  Serial.begin(9600);
  pinMode(ledPini,OUTPUT);
}

void loop(){
  int value=analogRead(fotoDirencPini);
  if(value<700){
    digitalWrite(ledPini,HIGH);
  }
  else{
    digitalWrite(ledPini,LOW);
  }
  
  Serial.println(value);
  delay(100); 
}

