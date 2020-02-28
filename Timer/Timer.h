#ifndef Timer_h
#define Timer_h

class Timer {
    public:
        Timer();
        long getTime(bool check);
        void reset();
        void setTime(long amount);
        void start();
        void stop();
};

#endif