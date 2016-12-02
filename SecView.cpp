#include "SecView.h"

void SecView::display(std::ostream& os) const {
  os << timer_->get() << std::endl;
}
