#include <Arduino.h>

void fireLaser(int laserPin, int laserOnDuration, int laserOffDuration) {
    digitalWrite(laserPin, HIGH);
    delay(laserOnDuration);
    digitalWrite(laserPin, LOW);
    delay(laserOffDuration);
}