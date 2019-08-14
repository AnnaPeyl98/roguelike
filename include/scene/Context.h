//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_CONTEXT_H
#define MYGAME_CONTEXT_H
#include <string>
class Context {
 public:
  std::string scene_ = "";
  int money;
  int steps;
  bool game_over = false;
};
#endif  // MYGAME_CONTEXT_H
