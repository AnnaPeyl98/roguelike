//
// Created by anna on 25.06.19.
//

#include "../include/Being/Player.h"
#include <iostream>
#include "../include/Controls.h"
#include "../include/Map.h"
using namespace std;

void Player::SetX(int x) {
  x_ = x;
}
void Player::SetY(int y) {
  y_ = y;
}
void Player::SetMoney(int money) {
  money_ = money;
}
void Player::SetSteps(int steps) {
  steps_ = steps;
}
void Player::SetHealth(int health) {
  health_ = health;
}
int Player::GetX() {
  return x_;
}
int Player::GetY() {
  return y_;
}
int Player::GetMoney() {
  return money_;
}
int Player::GetSteps() {
  return steps_;
}
int Player::GetHealth() {
  return health_;
}

Player::Player(int x, int money, int steps, int health, int y)
    : x_(x), y_(y), money_(money), steps_(steps), health_(health) {}
void Player::Update() {
  terminal_color("#2c2557");
  terminal_put(x_, y_, '@');
}
void Player::SetOneStep(int countStep) {
  countSteps_ = countStep;
}
int Player::GetCountStep() {
  return countSteps_;
}
int Player::GetKeys() {
  return countKeys_;
}
void Player::SetKey(int newCountKey) {
  countKeys_ = newCountKey;
}
