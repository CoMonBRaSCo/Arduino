#define Pot A0
int Led[] = {6,7,8,9,10,11};

void setup() {
  Serial.begin(9600);
  Serial.println("Led Delay With Millisecond");
  for(int i = 0; i < 6; i++)
    pinMode(Led[i], OUTPUT);
}

void loop() {
  int i;
    
  for(i = 0; i < 6; i++)
  {      
    Serial.println(analogRead(Pot));        
    digitalWrite(Led[i], HIGH);      
    delay(analogRead(Pot));    
    digitalWrite(Led[i], LOW);       
  }  

  for(i = 5; i >= 0; i--)
  {             
    Serial.println(analogRead(Pot));
    digitalWrite(Led[i], HIGH);
    delay(analogRead(Pot));  
    digitalWrite(Led[i], LOW);         
  }    
}
