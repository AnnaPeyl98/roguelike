//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_PREVLEVEL_H
#define MYGAME_PREVLEVEL_H
#include "MapObject.h"
class PrevLevel : public MapObject {
  const char symbol = '<';
  int x_;
  int y_;

 public:
  PrevLevel(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
  ~PrevLevel() override{};
};
#endif  // MYGAME_PREVLEVEL_H
