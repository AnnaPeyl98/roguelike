//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_LEVELSCOMPONENTS_H
#define MYGAME_LEVELSCOMPONENTS_H
#include "IComponent.h"
class LevelsComponents : public IComponent {
 public:
  bool next_level_ = false;
  bool prev_level_ = false;
};
#endif  // MYGAME_LEVELSCOMPONENTS_H
