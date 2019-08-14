//
// Created by anna on 05.08.19.
//

#ifndef MYGAME_DOORONE_H
#define MYGAME_DOORONE_H
#include "MapObject.h"
class DoorOne : public MapObject {
  const char symbol = '|';
  int x_;
  int y_;

 public:
  DoorOne(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
  //~Earth() override{};
};
#endif  // MYGAME_DOORONE_H
