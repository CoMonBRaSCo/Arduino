#define LDR A0
#define Led 9

void setup() {
  Serial.begin(9600);
}

void loop() { 
  Serial.println(analogRead(LDR));
  delay(100);
  
  if(analogRead(LDR) < 700)
    analogWrite(Led, 700-analogRead(LDR));
  else
    analogWrite(Led, LOW);
}
