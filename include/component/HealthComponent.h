//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_HEALTHCOMPONENT_H
#define MYGAME_HEALTHCOMPONENT_H
#include "IComponent.h"
class HealthComponent : public IComponent {
 public:
  int health_;

  explicit HealthComponent(int health) : health_(health) {}
};
#endif  // MYGAME_HEALTHCOMPONENT_H
