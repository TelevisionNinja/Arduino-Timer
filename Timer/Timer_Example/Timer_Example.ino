#include "Timer.h"
Timer timer;

void setup() {
  Serial.begin(9600);
  timer.start();
  delay(2000);
  timer.stop();
  Serial.print(timer.getTime(false));
  timer.start();
  delay(3000);
  Serial.print(timer.getTime(true));
  timer.stop();
}

void loop() {
  
}
