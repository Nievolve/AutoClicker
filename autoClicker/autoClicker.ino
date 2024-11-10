#include <Servo.h>

Servo myServo;

int potVal;
int baseWait = 20000;
int programClick = 75;

int clickCount = 0;

void setup() {
  myServo.attach(9);
}

void loop() {
  if (clickCount < programClick) {
    int randomDelay = baseWait + random(-3000, 3000);
    potVal = 180;

    myServo.write(potVal);  
    delay(500);

    potVal = 110;
    myServo.write(potVal);

    delay(randomDelay);
    clickCount++;  // Här är semikolonet tillagt
  }
  else {
    myServo.detach(); // Koppla bort servon
    while (true) {
      // Arduino stannar här, gör inget mer
    } 
  }
}
