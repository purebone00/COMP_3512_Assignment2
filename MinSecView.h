#ifndef MINSECVIEW_H
#define MINSECVIEW_H
#include <iostream>
#include "TimerView.h"

class MinSecView: public TimerView {
public:
  MinSecView(Timer *timer): TimerView(timer) {}
  virtual void display(std::ostream& os) const;
};

#endif
