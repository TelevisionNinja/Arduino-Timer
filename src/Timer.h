#ifndef Timer_h
#define Timer_h

class Timer {
    public:
        Timer();
        Timer(unsigned long initialTime);
        unsigned long getTime(bool check);
        unsigned long getStartValue();
        void reset();
        void setStartValue(unsigned long amount);
        void start();
        void stop();
};

#endif