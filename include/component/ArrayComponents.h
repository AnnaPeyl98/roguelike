//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_ARRAYCOMPONENTS_H
#define MYGAME_ARRAYCOMPONENTS_H
#include <vector>
class ArrayComponents: public IComponent {
 public:
  char** arr_;

 public:
  explicit ArrayComponents(char** arr) : arr_(arr) {}
};
#endif  // MYGAME_ARRAYCOMPONENTS_H
