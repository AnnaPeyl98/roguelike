//
// Created by anna on 16.07.19.
//

#ifndef MYGAME_LEVELS_H
#define MYGAME_LEVELS_H
#include "MapObject.h"
class Levels : public MapObject {
  const char symbol = '>';
  int x_;
  int y_;

 public:
  Levels(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
  ~Levels() override{};
};
#endif  // MYGAME_LEVELS_H
