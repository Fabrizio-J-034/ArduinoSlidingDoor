int IRSensor = 2;
int LED = 13;
int pin7=7;
int pin8=8;
void setup()
{
pinMode (IRSensor, INPUT);
pinMode (LED, OUTPUT);
pinMode(pin7,OUTPUT);
pinMode(pin8,OUTPUT);
}
void loop()
{
int statusSensor = digitalRead (IRSensor);
if (statusSensor == 1)
{
digitalWrite(LED,LOW);
digitalWrite(pin7,LOW);
digitalWrite(pin8,HIGH);
}
else
{
digitalWrite(LED,HIGH);
digitalWrite(pin8,LOW);
digitalWrite(pin7,HIGH);
}
}
