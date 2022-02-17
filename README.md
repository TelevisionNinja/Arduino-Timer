# Arduino-Timer
A simple stopwatch like timer for arduino


Methods

- start()
  - starts or resumes the timer. the timer resumes if reset() was not called before start() is called

- stop()
  - stops the timer and sets the elapsed time

- getTime()
  - returns the time the timer is currrently at or stopped on

- reset()
  - sets the timer back to 0 and stops the timer if it's running

- isRunning()
  - check if the timer is running
