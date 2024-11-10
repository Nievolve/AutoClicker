#include <Servo.h>

Servo myServo;
// Declare variable

int potVal;
int choice;

//I/O
// 5 Servo (PWD)
// 1 LED1
// 2 LED2
// 3 Button1 - programcycle1
// 4 BUtton2 - programcycle2 
// 6 Button3 - standby
//LED
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
digitalWrite(1,LOW);
digitalWrite(2,LOW);
//button
buttonProgramcycle1(3, INPUT)
buttonProgramcycle2(4,INPUT)
buttonStandby(6, INPUT)
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