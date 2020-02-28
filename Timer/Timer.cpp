#include <Timer.h>
#include <Arduino.h>

long timerTime = 0,
  elapsedTime = 0,
  timeStartValue = 0;

Timer::Timer() {
}

long Timer::getTime(bool check) {
  if (check) {
    elapsedTime = millis() - timerTime + timeStartValue;
  }
  return elapsedTime;
}

void Timer::reset() {
  timerTime = 0;
}

void Timer::setTime(long amount) {
  timeStartValue = amount;
}

void Timer::start() {
  timerTime = millis();
}

void Timer::stop() {
  elapsedTime = millis() - timerTime + timeStartValue;
}