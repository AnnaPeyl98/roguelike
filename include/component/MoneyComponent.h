//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_MONEYCOMPONENT_H
#define MYGAME_MONEYCOMPONENT_H
#include "IComponent.h"
class MoneyComponent : public IComponent {
 public:
  int money_;

  explicit MoneyComponent(int money) : money_(money) {}
};
#endif //MYGAME_MONEYCOMPONENT_H
