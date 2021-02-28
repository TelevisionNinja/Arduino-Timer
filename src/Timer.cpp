#include <Timer.h>

// creates a timer that starts at zero
Timer::Timer() {
}

// creates a timer with an initial starting value (in milliseconds)
Timer::Timer(unsigned long startingValue) {
  timeStartValue = startingValue;
}

// starts the timer and resets the elapsed time
void Timer::start() {
  initialTime = millis();
  isRunning = true;
  elapsedTime = timeStartValue;
}

// stops the timer and sets the elapsed time
void Timer::stop() {
  if (isRunning) {
    elapsedTime = millis() - initialTime + timeStartValue;
    isRunning = false;
  }
}

// sets the starting point of the timer to a given initial value (in milliseconds)
void Timer::setStartValue(unsigned long value) {
  timeStartValue = value;
}

// returns the set starting value (in milliseconds)
unsigned long Timer::getStartValue() {
  return timeStartValue;
}

// returns the time the timer is currrently at or stopped on
unsigned long Timer::getTime() {
  if (isRunning) {
    return millis() - initialTime + timeStartValue;
  }

  return elapsedTime;
}

// sets the timer back to 0 or the starting value if one is set and stops the timer if it's running
void Timer::reset() {
  elapsedTime = timeStartValue;
  isRunning = false;
}