//
// Created by anna on 04.07.19.
//

#ifndef MYGAME_MONEY_H
#define MYGAME_MONEY_H
#include "MapObject.h"
class Money : public MapObject {
  const char symbol = '$';
  int x_;
  int y_;

 public:
  Money(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
  ~Money()override {};
};
#endif  // MYGAME_MONEY_H
