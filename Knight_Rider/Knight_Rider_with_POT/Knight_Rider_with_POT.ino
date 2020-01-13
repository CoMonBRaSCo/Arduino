#define Pot A0
int Led[] = {3,5,6,9,10,11};

void setup() {
  Serial.begin(9600);
  Serial.println("Led Voltage Value");
}

void loop() {
  int i;
  int convertion = map(analogRead(Pot), 0, 1023, 0, 255);
 
  for(i = 0; i < 6; i++)
  {     
    if(convertion != 0)
    {
      convertion = map(analogRead(Pot), 0, 1023, 0, 255);
      Serial.println((5.00/255.00)*convertion);        
      analogWrite(Led[i], convertion);      
      delay(50);    
      analogWrite(Led[i], LOW);       
    }  
  }

  for(i = 5; i >= 0; i--)
  {     
    if(convertion != 0)
    {
      convertion = map(analogRead(Pot), 0, 1023, 0, 255);
      Serial.println((5.00/255.00)*convertion);        
      analogWrite(Led[i], convertion);
      delay(50);  
      analogWrite(Led[i], LOW);         
    }  
  }  
}
