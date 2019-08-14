//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_VECTORCOMPONENT_H
#define MYGAME_VECTORCOMPONENT_H
#include <iostream>
#include <vector>
#include "IComponent.h"
class VectorComponent : public IComponent {
 public:
  std::vector<char *> maps;

 public:
  explicit VectorComponent(const std::vector<char *> &maps) : maps(maps) {}
};
#endif  // MYGAME_VECTORCOMPONENT_H
