//
// Created by anna on 08.08.19.
//

#ifndef MYGAME_OPENDOOR_H
#define MYGAME_OPENDOOR_H
#include "MapObject.h"
class OpenDoor : public MapObject {
  const char symbol = '/';
  int x_;
  int y_;

 public:
  OpenDoor(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
  //~Earth() override{};
};
#endif  // MYGAME_OPENDOOR_H
