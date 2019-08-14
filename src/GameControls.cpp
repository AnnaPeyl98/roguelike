//
// Created by anna on 23.07.19.
//

#include "../include/GameControls.h"

void GameControls::Move() {
  if (controls.IsDown()) {
    state->down();
  }
  if (controls.IsLeft()) {
    state->left();
  }
  if (controls.IsRight()) {
    state->right();
  }
  if (controls.IsUp()) {
    state->up();
  }
  state->takeMoney();
  state->kill();
  state->takeKey();
  next_level_ = state->nextLevel();

  game_over_ = state->gameOver();
  prev_level_ = state->prevLevel();
}
void GameControls::Render() {
  player->Update();
}
void GameControls::Update() {
  Move();
  Render();
  terminal_printf(3, 10, "Money %d", player->GetMoney());
  terminal_printf(3, 11, "Health %d", player->GetHealth());
  terminal_printf(3, 12, "Steps %d", player->GetSteps());
  terminal_printf(3, 13, "Key %d", player->GetKeys());
}
bool GameControls::IsNextLevel() {
  return next_level_;
}
bool GameControls::IsGameOver() {
  return game_over_;
}
GameControls::GameControls(StateSteps* state, const Controls& controls, Player* player)
    : state(state), controls(controls), player(player) {}
bool GameControls::IsPrevLevel() {
  return prev_level_;
}
void GameControls::SetGameOver() {
  game_over_ = false;
}
