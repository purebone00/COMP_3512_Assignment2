#ifndef TIMER_H
#define TIMER_H
#include <atomic>
#include <list>
#include <thread>
#include <chrono>
#include "Subject.h"
#include "KeyboardController.h"

class Timer: public Observer, public Subject {
public:
  Timer(); // ctor (see below)
  void start(); // start the timer
  void stop(); // stop the timer
  void reset(); // reset timer to 0
  unsigned long get() const; // returns number of seconds elapsed
  Timer(const Timer&) = delete; // (*)
  Timer& operator=(const Timer&) = delete; // (*)
  virtual void update(Subject *s);
private:
  std::atomic<unsigned long> sec_; // number of seconds elapsed
  std::atomic<bool> ticking_; // is timer ticking or not?
  void run(); // function executed by thread (see below)
  // additional members if necessary
};

#endif
