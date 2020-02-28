#include "Timer.h"
Timer timer;

void setup() {
  Serial.begin(9600);

  // test for getting the time after it is stopped
  timer.start();
  delay(1000);
  timer.stop();
  Serial.print(timer.getTime(false));//check bool is set to false to get the stopped time

  // test for checing the time while it is still running
  timer.start();
  delay(1000);
  Serial.print(timer.getTime(true));//check bool is set to true to check the time
  timer.stop();
}

void loop() {
  
}