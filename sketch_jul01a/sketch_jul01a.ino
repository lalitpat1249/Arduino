//#define button 15
#define LED1 18
#define LED2 17
const int LEDred = 21; 
const int LEDyellow = 22;
const int LEDgreen = 23;
void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LEDred,OUTPUT);
  pinMode(LEDyellow,OUTPUT);
  pinMode(LEDgreen,OUTPUT);
}

void loop() {
  char ch1;
  ch1 = Serial.read();
  if (ch1 == 'a'){
    digitalWrite(LED1, HIGH);
    Serial.println("LED1 ON");
  }else if(ch1 == 'b'){
    digitalWrite(LED1, LOW);
    Serial.println("LED1 OFF");
  }else if(ch1 == 'c'){
    digitalWrite(LED2, HIGH);
    Serial.println("LED2 ON");
  }else if(ch1 == 'd'){
    digitalWrite(LED2, LOW);
    Serial.println("LED2 OFF");
  }
  
}
