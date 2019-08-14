//
// Created by anna on 16.07.19.
//

#ifndef MYGAME_STATESTEPS_H
#define MYGAME_STATESTEPS_H
#include "../Being/Player.h"
#include "../Map.h"
#include "IState.h"
class Player;
class StateSteps : public IState {
  Player* player;
  Map* map;

 public:
  StateSteps(Player* player, Map* map);
  void left() override;
  void right() override;
  void down() override;
  void up() override;
  bool nextLevel() override;
  void kill() override;
  void takeMoney() override;
  bool gameOver() override;
  bool prevLevel() override;
  void takeKey() override;
};

#endif  // MYGAME_STATESTEPS_H
