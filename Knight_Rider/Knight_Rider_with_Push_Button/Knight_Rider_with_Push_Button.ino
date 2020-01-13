int Led[] = {2,3,4,5,6,7};
#define Buton 8

void setup() {
  for(int i = 0; i < 6; i++)
    pinMode(Led[i], OUTPUT);   
  pinMode(Buton, INPUT);
}

void loop() {
  int i;

  for(i = 0; i < 6; i++)
  {
    if(digitalRead(Buton) == 1)
    {
      digitalWrite(Led[i], HIGH);      
      delay(100);
      digitalWrite(Led[i], LOW);
    }
  }  

  for(i = 5; i >= 0; i--)
  {
    if(digitalRead(Buton) == 1)
    {
      digitalWrite(Led[i], HIGH);
      delay(100);
      digitalWrite(Led[i], LOW);
    }
   }
} 
