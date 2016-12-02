#include "MinSecView.h"

void MinSecView::display(std::ostream& os) const {
  os << (timer_->get() / 60) << ":" << (timer_->get() % 60) << std::endl;
}
