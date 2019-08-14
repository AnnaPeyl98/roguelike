
#include "../../include/Object/Earth.h"
#include <BearLibTerminal.h>
#include <iostream>
//
// Created by anna on 04.07.19.
//
Earth::Earth(int x, int y) : x_(x), y_(y) {}
int Earth::GetX() {
  return x_;
}
int Earth::GetY() {
  return y_;
}
void Earth::SetX(int x) {
  x_ = x;
}
void Earth::SetY(int y) {
  y_ = y;
}
void Earth::Update() {
  terminal_color("#d190b3");
  terminal_put(y_, x_, symbol);
}
char Earth::GetSymbol() {
  return symbol;
}
