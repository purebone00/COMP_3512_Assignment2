#include "Timer.h"

Timer::Timer():sec_(0), ticking_(false) {
  std::thread t(&Timer::run, this);
  t.detach();
}

void Timer::run() {
  while (1) {
    if (ticking_) {
      std::this_thread::sleep_for(std::chrono::seconds(1));
      sec_++;
      notify();
    }
  }
}

void Timer::start() {
    ticking_=true;
}

void Timer::stop() {
  ticking_=false;
}

void Timer::reset() {
  ticking_=false;
  sec_=0;
  notify();
}

void Timer::update(Subject *s) {
  if (static_cast<KeyboardController*>(s)->getCommand() == 's') {
    start();
  } else if (static_cast<KeyboardController*>(s)->getCommand() == 'h') {
    stop();
  } else if (static_cast<KeyboardController*>(s)->getCommand() == 'r') {
    reset();
  }
}

unsigned long Timer::get() const {
  return sec_;
}
