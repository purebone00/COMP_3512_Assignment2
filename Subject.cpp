#include "Subject.h"

void Subject::subscribe(Observer *obs) {
  observers_.push_back(obs);
}

void Subject::unsubscribe(Observer *obs) {
  observers_.remove(obs);
}

void Subject::notify() {
  for (auto obs : observers_) {
    obs->update(this);
  }
}
