//
// Created by anna on 04.07.19.
//

#ifndef MYGAME_WALL_H
#define MYGAME_WALL_H
#include "MapObject.h"
class Wall : public MapObject {
  const char symbol = '#';
  int x_;
  int y_;

 public:
  Wall(int x, int y);
  char GetSymbol() override;
  int GetX() override;
  int GetY() override;
  void SetX(int x) override;
  void SetY(int y) override;
  void Update() override;
  ~Wall() override{};
};
#endif  // MYGAME_WALL_H
