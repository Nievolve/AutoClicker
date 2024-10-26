#include <Servo.h>

Servo myServo;

int potVal;
int choice;
void setup() {
  myServo.attach(5); //Pin for servo


}

void loop() {

  // Cycle
  potVal = 160; //Push contact
  
  myServo.write(potVal);  

  delay(1500);
  
  potVal = 90; //Neutral
  
  myServo.write(potVal);  

  delay(1500);
  //Cycle off
}
