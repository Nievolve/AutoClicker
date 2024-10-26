#include <Servo.h>

Servo myServo;

int potVal;
int choice;

void setup() {
  myServo.attach(5);


}

void loop() {

  // Cycle
  potVal = 160; // Push contact
  
  myServo.write(potVal);  

  delay(30000);//ms, wait time
  
  potVal = 90; // Neutral
  
  myServo.write(potVal);  

  delay(200); //ms
  //Cycle off
}
