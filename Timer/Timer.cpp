#include <Timer.h>
#include <Arduino.h>

int initialTime = 0,
  elapsedTime = 0,
  timeStartValue = 0;

Timer::Timer() {
}

//starts the timer
void Timer::start() {
  initialTime = millis();
}

//stops the timer
void Timer::stop() {
  elapsedTime = millis() - initialTime + timeStartValue;
}

//sets the starting point of the timer to a given initial amount in milliseconds
void Timer::setTime(int amount) {
  timeStartValue = amount;
}

/*
  if check is true, getTime() returns the time the timer is currrently at
  if check is false, getTime() returns the time that the timer is stopped on
  */
int Timer::getTime(bool check) {
  if (check) {
    elapsedTime = millis() - initialTime + timeStartValue;
  }
  return elapsedTime;
}

//sets the timer back to 0 or a given starting point
void Timer::reset() {
  initialTime = timeStartValue;
}