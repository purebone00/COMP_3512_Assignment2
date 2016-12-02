#include "KeyboardController.h"

void KeyboardController::start() {
  char c;
  while (std::cin >> c) {
    command_ = c;
    if (command_ == 'x') {
      break;
    }
    notify();
  }
}

char KeyboardController::getCommand() const {
  return command_;
}
