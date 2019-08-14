#include "../../include/Object/Levels.h"
#include <BearLibTerminal.h>
//
// Created by anna on 16.07.19.
//
void Levels::SetX(int x) {
  x_ = x;
}
void Levels::SetY(int y) {
  y_ = y;
}

int Levels::GetX() {
  return x_;
}
int Levels::GetY() {
  return y_;
}
void Levels::Update() {
  terminal_color("#2c2557");
  terminal_put(y_, x_, symbol);
}
char Levels::GetSymbol() {
  return symbol;
}
Levels::Levels(int x, int y) : x_(x), y_(y) {}
