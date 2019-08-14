//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_PLAYER_H
#define MYGAME_PLAYER_H

#include "../Controls.h"
#include "../Map.h"
#include "../statemashine/IState.h"
#include "../statemashine/StateSteps.h"

class Player {
  int x_;
  int y_;
  int money_;
  int steps_;
  int health_;
  int countSteps_ = 0;
  int countKeys_ = 0;

 public:
  void SetX(int x);
  void SetY(int y);
  void SetMoney(int money);
  void SetSteps(int steps);
  void SetHealth(int health);
  int GetX();
  int GetY();
  int GetMoney();
  int GetSteps();
  int GetHealth();
  void SetOneStep(int countStep);
  int GetCountStep();
  Player(int x, int money, int steps, int health, int y);
  void Update();
  int GetKeys();
  void SetKey(int);
  Player& operator=(const Player& player) {
    x_ = player.x_;
    y_ = player.y_;
    money_ = player.money_;
    health_ = player.health_;
    steps_ = player.steps_;
    countSteps_ = player.countSteps_;
    return *this;
  }
};
#endif  // MYGAME_PLAYER_H
