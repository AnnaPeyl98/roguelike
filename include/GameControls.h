//
// Created by anna on 23.07.19.
//

#ifndef MYGAME_GAMECONTROLS_H
#define MYGAME_GAMECONTROLS_H
#include "Being/Player.h"
class GameControls {
  StateSteps* state;
  const Controls& controls;
  Player* player;
  bool next_level_ = false;
  bool game_over_ = false;
  bool prev_level_ = false;

 public:
  GameControls(StateSteps* state, const Controls& controls, Player* player);
  void Move();
  void Render();
  void Update();
  bool IsNextLevel();
  bool IsGameOver();
bool IsPrevLevel();
void SetGameOver();
};

#endif  // MYGAME_GAMECONTROLS_H
