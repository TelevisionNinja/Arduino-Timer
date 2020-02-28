#include <Timer.h>
#include <Arduino.h>

int timerTime = 0,
  elapsedTime = 0,
  timeStartValue = 0;

Timer::Timer() {
}

int Timer::getTime(bool check) {
  if (check) {
    elapsedTime = millis() - timerTime + timeStartValue;
  }
  return elapsedTime;
}

void Timer::reset() {
  timerTime = timeStartValue;
}

void Timer::setTime(int amount) {
  timeStartValue = amount;
}

void Timer::start() {
  timerTime = millis();
}

void Timer::stop() {
  elapsedTime = millis() - timerTime + timeStartValue;
}
