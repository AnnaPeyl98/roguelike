//
// Created by anna on 05.08.19.
//

#ifndef MYGAME_DOORTWO_H
#define MYGAME_DOORTWO_H
#include "MapObject.h"
class DoorTwo : public MapObject {
  const char symbol = '_';
  int x_;
  int y_;

 public:
  DoorTwo(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
  //~Earth() override{};
};
#endif  // MYGAME_DOORTWO_H
