#include <Arduino.h>
#include <IntegratedLaserServo.h>

void setup() {
  // laser setup
  pinMode(laserPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  horizontalServo.attach(2);
  verticalServo.attach(3);

}

void loop() {
  // put your main code here, to run repeatedly:
  distanceSensor(trigPin, echoPin, distance);
  if ( distance < 5) {
    Serial.println("close enough");
    fireLaser(laserPin, 1);
    laserTime = millis();
    while ((millis() - laserDuration) < laserTime) {
      //both servos
    }
    fireLaser(laserPin, 0);
  }
}

