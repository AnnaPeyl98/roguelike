//
// Created by anna on 04.07.19.
//

#ifndef MYGAME_EARTH_H
#define MYGAME_EARTH_H
#include "MapObject.h"
class Earth: public MapObject{
  const char symbol = '.';
  int x_;
  int y_;

 public:
  Earth(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
  //~Earth() override{};
};
#endif  // MYGAME_EARTH_H
