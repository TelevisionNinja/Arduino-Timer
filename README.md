# Arduino-Timer
A simple stopwatch like timer for arduino


Methods

- start()
  - starts the timer and resets the elapsed time

- stop()
  - stops the timer and sets the elapsed time

- setStartValue(unsigned long value)
  - sets the starting point of the timer to a given initial value (in milliseconds)

- getStartValue()
  - returns the set starting value (in milliseconds)

- getTime()
  - returns the time the timer is currrently at or stopped on

- reset()
  - sets the timer back to 0 or the starting value if one is set and stops the timer if it's running
