
void setup()
{
pinMode(23, OUTPUT);
pinMode(22, OUTPUT);
pinMode(19, OUTPUT);
pinMode(18, OUTPUT);
}

void loop() 
{
digitalWrite(23, HIGH); 
delay(50); 
digitalWrite(23, LOW); 
delay(50);
digitalWrite(19, HIGH); 
delay(50); 
digitalWrite(19, LOW); 
delay(50);
digitalWrite(22, HIGH); 
delay(3000); 
digitalWrite(22, LOW); 
delay(3000);
digitalWrite(18, HIGH); 
delay(3000); 
digitalWrite(18, LOW); 
delay(3000);
}
