#ifndef KEYBOARDCONTROLLER_H
#define KEYBOARDCONTROLLER_H
#include <iostream>
#include <atomic>
#include "Subject.h"


class KeyboardController: public Subject {
public:
  void start(); // start the loop to get user commands
  char getCommand() const; // return the "command"
private:
  std::atomic<char> command_; // store the "command" the user enters
};

#endif
