//
// Created by anna on 23.07.19.
//

#ifndef MYGAME_EMPTY_H
#define MYGAME_EMPTY_H
#include "MapObject.h"
class Empty : public MapObject {
  const char symbol = ' ';
  int x_;
  int y_;

 public:
  Empty(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
};

#endif  // MYGAME_EMPTY_H
