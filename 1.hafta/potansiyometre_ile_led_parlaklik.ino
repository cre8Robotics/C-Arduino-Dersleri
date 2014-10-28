const int analogGirisPini=A0;
const int LEDpini=3;
int potansDegeri=0;
float gerilimDegeri;
void setup(){
Serial.begin(9600);
}
void loop(){
potansDegeri=analogRead(analogGirisPini);
gerilimDegeri=(potansDegeri/1023)*5;
Serial.print("Sensor Degeri=");
Serial.println(potansDegeri);
Serial.print("Gerilim=");
Serial.println(gerilimDegeri);

delay(700);
}
