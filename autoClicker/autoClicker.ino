#include <Servo.h>

Servo myServo;

int potVal;
int choice;
i
void setup() {
  myServo.attach(5);


}

void loop() {

  // Cycle
  potVal = 180;
  
  myServo.write(potVal);  

  delay(30000);
  
  potVal = 100; 
  
  myServo.write(potVal);  

  delay(200);
  //Cycle off
}