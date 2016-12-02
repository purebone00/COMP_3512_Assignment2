#ifndef SECVIEW_H
#define SECVIEW_H

#include <iostream>
#include "TimerView.h"

class SecView: public TimerView {
public:
  SecView(Timer *timer): TimerView(timer) {}
  virtual void display(std::ostream& os) const;
};

#endif
