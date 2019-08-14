#include "../../include/Object/Money.h"
#include <BearLibTerminal.h>
//
// Created by anna on 04.07.19.
//
Money::Money(int x, int y) : x_(x), y_(y) {}
int Money::GetX() {
  return x_;
}
int Money::GetY() {
  return y_;
}
void Money::SetX(int x) {
  x_ = x;
}
void Money::SetY(int y) {
  y_ = y;
}
void Money::Update() {
  terminal_color("#4b8299");
  terminal_put(y_, x_, symbol);
}
char Money::GetSymbol() {
  return symbol;
}
