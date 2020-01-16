#define Red 9
#define Green 10
#define Blue 11

#define Pot_R A0
#define Pot_G A1
#define Pot_B A2

void setup() {

}

void loop() {
  
  int red_value;
  int green_value;
  int blue_value;
  
  red_value = map(analogRead(Pot_R), 0, 1023, 0, 255);
  green_value = map(analogRead(Pot_G), 0, 1023, 0, 255);
  blue_value = map(analogRead(Pot_B), 0, 1023, 0, 255);
  
  analogWrite(Red, red_value);
  analogWrite(Green, green_value);
  analogWrite(Blue, blue_value);
}
