#include "Timer.h"

Timer timer;

void setup() {
  Serial.begin(9600);

  // test for getting the time after it is stopped
  timer.start();
  delay(1000);
  timer.stop();
  Serial.println(timer.getTime());

  //----------------------------------

  // test for getting the time while it is still running
  timer.start();
  delay(1000);
  Serial.println(timer.getTime());
  timer.stop();

  //----------------------------------

  // start the timer for the loop example
  timer.start();
}

void loop() {
  // loop example
  unsigned long currentTime = timer.getTime();

  if (currentTime >= 1000) { // every set time, perform an action
    Serial.print("This is printed every second. Elapsed time: ");
    Serial.println(currentTime);

    // no need to stop and reset the timer, just call start() to set a new starting point
    timer.start();
  }
}