#include <Arduino.h>

//distance sensor
const int trigPin = 12; 
const int echoPin = 14; 
float distance;
void distanceSensor(int, int, float);

// laser setup
int laserPin = 2;
int laserOnDuration = 500;
int laserOffDuration = 500;
void fireLaser(int, int);

//servo 1 setup