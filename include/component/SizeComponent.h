//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_SIZECOMPONENT_H
#define MYGAME_SIZECOMPONENT_H
#include "IComponent.h"
class SizeComponent : public IComponent {
 public:
  int width_;
  int length_;

 public:
  SizeComponent(int width, int length) : width_(width), length_(length) {}
};
#endif  // MYGAME_SIZECOMPONENT_H
