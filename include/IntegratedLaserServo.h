#include <Arduino.h>

//distance sensor
const int trigPin = 12; 
const int echoPin = 14; 
float distance;
void distanceSensor(int, int, float);

// laser setup
int laserPin = 2;
unsigned long laserTime;
int laserDuration = 5000;
void fireLaser(int, int);

//servo 1 setup