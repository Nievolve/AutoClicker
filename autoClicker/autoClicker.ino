#include <Servo.h>

Servo myServo;

int potVal;

void setup() {
  myServo.attach(5);

}

void loop() {
  potVal = 180;  // Saknade semikolon åtgärdat
  
  myServo.write(potVal);  

  delay(1500);
  
  potVal = 100;  
  
  myServo.write(potVal);  

  delay(1500);
}