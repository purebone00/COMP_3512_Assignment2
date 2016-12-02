#ifndef TIMERVIEW_H
#define TIMERVIEW_H

#include <iostream>
#include "Observer.h"
#include "Timer.h"

class TimerView: public Observer {

public:
  TimerView(Timer *timer);
  virtual void update(Subject *s); // from  class
  virtual void display(std::ostream& os) const = 0;
protected:
  Timer *timer_;
};

#endif
