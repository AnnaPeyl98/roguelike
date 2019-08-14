//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_STEPSCOMPONENT_H
#define MYGAME_STEPSCOMPONENT_H
#include "IComponent.h"
class StepsComponent : public IComponent {
 public:
  int steps_;
  int count_steps_ = 0;

  explicit StepsComponent(int steps) : steps_(steps) {}
};
#endif  // MYGAME_STEPSCOMPONENT_H
