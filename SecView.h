#ifndef SECVIEW_H
#define SECVIEW_H

class SecView: public TimerView {
public:
  SecView(Timer *timer): TimerView(timer) {}
  virtual void display(std::ostream& os) const;
};

#endif
