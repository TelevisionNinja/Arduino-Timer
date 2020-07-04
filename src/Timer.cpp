#include <Timer.h>
#include <Arduino.h>

unsigned long initialTime = 0,
  elapsedTime = 0,
  timeStartValue = 0;

//creates a timer that starts at zero
Timer::Timer() {
}

//creates a timer with a set initial starting time
Timer::Timer(unsigned long startingTime) {
  timeStartValue = startingTime;
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
void Timer::setStartValue(unsigned long amount) {
  timeStartValue = amount;
}

//returns the set starting amount
unsigned long Timer::getStartValue() {
  return timeStartValue;
}

/*
  if check is true, getTime() returns the time the timer is currrently at
  if check is false, getTime() returns the time that the timer is stopped on
  */
unsigned long Timer::getTime(bool check) {
  if (check) {
    return millis() - initialTime + timeStartValue;
  }
  return elapsedTime;
}

//sets the timer back to 0 or a given starting point
void Timer::reset() {
  elapsedTime = timeStartValue;
}