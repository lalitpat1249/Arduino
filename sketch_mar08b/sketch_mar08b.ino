int ledpin = 13;
int LDRpin = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT);
pinMode(LDRpin, OUTPUT);
Serial.begin(9600)
}

void loop() {
int LDR_Value = digitalWrite(LDRpin)

if (LDR_Value == 1){
digitalWrite("ledPin",HIGH);

}
else {
digitalWrite(ledpin,LOW)

}
delay(10);
}
