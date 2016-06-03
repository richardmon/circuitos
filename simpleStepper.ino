#include <Stepper.h>
 
const int stepsPerRevolution = 20; 
 
// Connection pins:
Stepper myStepperY(stepsPerRevolution, 2,3,4,5);
 
void setup() {
 // Set speed:
 myStepperY.setSpeed(100);
 // max 250 steps for dvd/cd stepper motor
 Serial.begin(9600);
 
}
 
void loop() {
  if(Serial.available()){
    int stepps = Serial.parseInt();
    myStepperY.step(stepps);
  }
}
