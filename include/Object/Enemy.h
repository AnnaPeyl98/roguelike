//
// Created by anna on 04.07.19.
//

#ifndef MYGAME_ENEMY_H
#define MYGAME_ENEMY_H
#include "MapObject.h"
class Enemy : public MapObject {
  char symbol = 'E';
  int x_;
  int y_;

 public:
  Enemy(int x, int y) : x_(x), y_(y) {}
  void SetX(int x) override;
  void SetY(int y) override;
  int GetX() override;
  int GetY() override;
  char GetSymbol() override;
  void Update() override;
  ~Enemy() override{};
};
#endif  // MYGAME_ENEMY_H
