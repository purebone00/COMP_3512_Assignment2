#include "TimerView.h"

TimerView::TimerView(Timer *timer):timer_(timer) {}

void TimerView::update(Subject *s) {
  if (s)
  display(std::cout);
}
