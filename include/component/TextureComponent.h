//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_TEXTURECOMPONENT_H
#define MYGAME_TEXTURECOMPONENT_H

#include "IComponent.h"
class TextureComponent : public IComponent {
 public:
  char symbol_;

  explicit TextureComponent(char symbol) : symbol_(symbol) {}
};

#endif //MYGAME_TEXTURECOMPONENT_H

