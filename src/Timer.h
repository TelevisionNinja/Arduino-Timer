#ifndef Timer_h
#define Timer_h

class Timer {
    public:
        Timer();
        int getTime(bool check);
        void reset();
        void setTime(int amount);
        void start();
        void stop();
};

#endif