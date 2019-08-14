//
// Created by anna on 04.07.19.
//

#include "../../include/Object/Wall.h"
#include <BearLibTerminal.h>

Wall::Wall(int x, int y) : x_(x), y_(y) {}
int Wall::GetX() {
  return x_;
}
int Wall::GetY() {
  return y_;
}
void Wall::SetX(int x) {
  x_ = x;
}
void Wall::SetY(int y) {
  y_ = y;
}
void Wall::Update() {
  terminal_color("#63314f");
  terminal_put(y_, x_, symbol);
}
char Wall::GetSymbol() {
  return symbol;
}
