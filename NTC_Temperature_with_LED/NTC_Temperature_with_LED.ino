#include <math.h>

#define Led 8
#define NTC A0

void setup() {
  
  Serial.begin(9600);
  pinMode(Led,OUTPUT);
}

double Thermistor(int analogReading){

  double temp;
  
  temp= log(((10240000 / analogReading) - 10000));
  temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * temp * temp)) * temp);
  temp = temp - 273.15;
  
  return (temp);
}


void loop() {
    
  double temp = Thermistor(analogRead(NTC));
  Serial.print(temp);
  Serial.println("°C");

  if(temp > 25)
    digitalWrite(Led, HIGH);  
  else
    digitalWrite(Led, LOW);

  delay(300);
}
