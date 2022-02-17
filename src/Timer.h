#ifndef TIMER_H
#define TIMER_H

#include <Arduino.h>

class Timer {
    public:
        Timer();
        ~Timer();

        unsigned long getTime();

        void reset(),
            start(),
            stop();

        bool isRunning();
    private:
        unsigned long initialTime,
            elapsedTime;

        bool running;
};

#endif
