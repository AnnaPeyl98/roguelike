//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_COORDINATECOMPONENT_H
#define MYGAME_COORDINATECOMPONENT_H
#include "IComponent.h"
class CoordinateComponent : public IComponent {
 public:
  int x;
  int y;

 public:
  CoordinateComponent(int x, int y) : x(x), y(y) {}
};
#endif  // MYGAME_COORDINATECOMPONENT_H
