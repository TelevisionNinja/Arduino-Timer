#ifndef Timer_h
#define Timer_h

class Timer {
    public:
        Timer();
        Timer(int initialTime);
        int getTime(bool check);
        int getStartValue();
        void reset();
        void setStartValue(int amount);
        void start();
        void stop();
};

#endif