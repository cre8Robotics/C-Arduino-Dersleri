const int butonPin=12;
const int ledPin=13;
int butonDurumu=0;

void setup(){
pinMode(butonPin,INPUT);
pinMode(ledPin,OUTPUT);
}
void loop(){
butonDurumu=digitalRead(butonPin);
if(butonDurumu==HIGH){
digitalWrite(ledPin,HIGH);
}
else{
digitalWrite(ledPin,LOW);

}

}
