#include <Servo.h>

Servo myServo;

int potVal;

void setup() {
  myServo.attach(5); //Pin for servo
  Serial.begin(9600);

}

void loop() {
  Serial.print("cycle");
  // Cycle
  potVal = 160; //Push contact
  
  myServo.write(potVal);  

  delay(1500);
  
  potVal = 90; //Neutral
  
  myServo.write(potVal);  

  delay(1500);
  //Cycle off
}
