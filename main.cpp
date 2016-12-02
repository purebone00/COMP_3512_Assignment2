#include "KeyboardController.h"
#include "MinSecView.h"
#include "Observer.h"
#include "SecView.h"
#include "Subject.h"
#include "TickView.h"
#include "Timer.h"
#include "TimerView.h"

int main() {
  Timer *t = new Timer();
  KeyboardController k;
  MinSecView *m = new MinSecView(t);
  SecView *s = new SecView(t);
  TickView *v = new TickView(t);

  t->subscribe(m);
  t->subscribe(s);
  t->subscribe(v);

  k.subscribe(t);

  k.start();
}
