//
// Created by anna on 08.07.19.
//

#include "../../include/Object/Enemy.h"
#include <BearLibTerminal.h>
void Enemy::SetX(int x) {
  x_ = x;
}
void Enemy::SetY(int y) {
  y_ = y;
}
int Enemy::GetX() {
  return x_;
}
int Enemy::GetY() {
  return y_;
}
void Enemy::Update() {
  terminal_color("#993457");
  terminal_put(y_, x_, symbol);
}
char Enemy::GetSymbol() {
  return symbol;
}
