#include "Timer.h"

// creates a timer that starts at zero
Timer::Timer() {
  initialTime = 0,
    elapsedTime = 0;

  running = false;
}

// destructor
Timer::~Timer() {
  initialTime = 0,
    elapsedTime = 0;

  running = false;
}

// starts or resumes the timer. the timer resumes if reset() was not called before start() is called
void Timer::start() {
  if (!running) {
    initialTime = millis();
    running = true;
  }
}

// stops the timer and sets the elapsed time
void Timer::stop() {
  if (running) {
    if (elapsedTime == 0) {
      elapsedTime = millis() - initialTime;
    }
    else {
      elapsedTime += millis() - initialTime;
    }

    running = false;
  }
}

// returns the time the timer is currrently at or stopped on
unsigned long Timer::getTime() {
  if (running) {
    return millis() - initialTime + elapsedTime;
  }

  return elapsedTime;
}

// sets the timer back to 0 and stops the timer if it's running
void Timer::reset() {
  running = false;
  elapsedTime = 0;
}

// check if the timer is running
bool Timer::isRunning() {
  return running;
}
