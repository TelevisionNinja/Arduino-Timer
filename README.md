# Arduino-Timer
A simple stopwatch like timer for arduino


start()
  starts the timer

stop()
  stops the timer

setTime(int amount)
  sets the starting point of the timer to a given initial amount in milliseconds

getTime(bool check)
  if check is true, getTime() returns the time the timer is currrently at
  if check is false, getTime() returns the time that the timer is stopped on

reset()
  sets the timer back to 0 or a given starting point
