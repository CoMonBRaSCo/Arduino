#define Pot A0
#define Led 3

void setup() {
  Serial.begin(9600); //Starts serial communication between arduino and computer and sets communication speed  
  Serial.println("Led Voltage Value");
}

void loop() {
  int convertion = map(analogRead(Pot), 0, 1023, 0, 255); // Analog reading bits interval "Pot"(max 1024 bits) is converting to analog writing bits interval(max 256 bits)
  
  Serial.println((5.00/255.00)*convertion); // Prints the voltage value of system to serial monitor 
                                            // When you print to serial monitor only "convertion" you can see bits values of analog writing(between 0 to 255)
  analogWrite(Led, convertion);  
  delay(300);  
}
