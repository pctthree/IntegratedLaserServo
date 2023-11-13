#include <Arduino.h>

void fireLaser(int laserPin, int laserOnOff) {
   if ( laserOnOff > 0) {
     digitalWrite(laserPin, LOW);
   }
   else {
     digitalWrite(laserPin, HIGH);
   }
}