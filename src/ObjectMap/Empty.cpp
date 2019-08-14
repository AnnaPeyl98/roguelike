#include "../../include/Object/Empty.h"
#include <BearLibTerminal.h>
//
// Created by anna on 23.07.19.
//
void Empty::SetX(int x) {
  x_ = x;
}
void Empty::SetY(int y) {
  y_ = y;
}
int Empty::GetX() {
  return x_;
}
int Empty::GetY() {
  return y_;
}
void Empty::Update() {
    terminal_put(y_, x_, symbol);
}
char Empty::GetSymbol() {
  return symbol;
}
Empty::Empty(int x, int y) {}
