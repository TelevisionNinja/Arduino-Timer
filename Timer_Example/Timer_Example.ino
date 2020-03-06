#include "Timer.h"
Timer timer;

void setup() {
  Serial.begin(9600);

  // test for getting the time after it is stopped
  timer.start();
  delay(1000);
  timer.stop();
  Serial.println(timer.getTime(false));//check bool is set to false to get the stopped time

  // test for checing the time while it is still running
  timer.start();
  delay(1000);
  Serial.println(timer.getTime(true));//check bool is set to true to check the time
  timer.stop();

  timer.start();//start the timer for the loop example
}

void loop() {
  //loop example
  if (timer.getTime(true) >= 1000) {//every set time, perform an action
    Serial.println("check inside a loop");
    timer.start();//no need to stop and reset the timer, just call start() to set a new initial starting point
  }
}