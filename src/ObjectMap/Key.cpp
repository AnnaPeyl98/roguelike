#include "../../include/Object/Key.h"
#include <BearLibTerminal.h>
//
// Created by anna on 05.08.19.
//
Key::Key(int x, int y) : x_(x), y_(y) {}
void Key::SetX(int x) {
  x_ = x;
}
void Key::SetY(int y) {
  y_ = y;
}
int Key::GetX() {
  return x_;
}
int Key::GetY() {
  return y_;
}
void Key::Update() {
  terminal_color("#325869");
  terminal_put(y_, x_, symbol);
}
char Key::GetSymbol() {
  return symbol;
}
