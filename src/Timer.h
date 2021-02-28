#ifndef TIMER_H
#define TIMER_H

#include <Arduino.h>

class Timer {
    public:
        Timer();
        Timer(unsigned long startingValue);

        unsigned long getTime(),
            getStartValue();

        void setStartValue(unsigned long value),
            reset(),
            start(),
            stop();
    private:
        unsigned long initialTime = 0,
            elapsedTime = 0,
            startValue = 0;

        bool isRunning = false;
};

#endif