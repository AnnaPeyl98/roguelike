//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_MENY_H
#define MYGAME_MENY_H
#include <vector>
#include "Controls.h"
class Meny {
  int i = 1;
  const Controls& controls;
  std::vector<char*> menu;

 public:
  explicit Meny(const Controls& controls);
  void Update();
  int GetItem();
};
#endif  // MYGAME_MENY_H
