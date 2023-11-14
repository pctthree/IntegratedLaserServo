#include <Arduino.h>
#include <Servo.h>

void activateServo(Servo horizontalServo, Servo verticalServo ) {
for (int pos = 0; pos <= 30; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    horizontalServo.write(pos);
    verticalServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (int pos = 30; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    horizontalServo.write(pos);  
    verticalServo.write(pos);            // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}