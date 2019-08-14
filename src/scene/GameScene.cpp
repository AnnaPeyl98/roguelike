//
// Created by anna on 29.07.19.
//

#include "../../include/scene/GameScene.h"
#include "../../include/LevelCreater.h"
GameScene::GameScene(Context* const ctx, const Controls& controls) : IScene(ctx), controls_(controls) {
  levelCreater = LevelCreater();
}
void GameScene::OnCreate() {
  if (i == -1) {
    player = new Player(0, 0, 0, 0, 0);
  }
  if (prev_level) {
    i--;
  } else {
    i++;
  }
  levelCreater.NextLevel(player, i, prev_level);
  prev_level = false;
  map = new Map(levelCreater.getArr(), levelCreater.getWidth(), levelCreater.getLength());
  stateSteps = new StateSteps(player, map);
  gameControls = new GameControls(stateSteps, controls_, player);
}
void GameScene::OnRender() {
  if (controls_.IsMeny()) {
    levelCreater.SetGameOver();
    gameControls->SetGameOver();
    i = -1;
    prev_level = false;
    ctx_->scene_ = "title";
  }
  if (gameControls->IsGameOver() || levelCreater.IsGameOver()) {
    ctx_->game_over = levelCreater.IsGameOver();
    levelCreater.SetGameOver();
    gameControls->SetGameOver();
    i = -1;
    prev_level = false;
    ctx_->scene_ = "game_over";
  } else if (gameControls->IsNextLevel()) {
    ctx_->scene_ = "next_level";
  } else if (gameControls->IsPrevLevel()) {
    prev_level = true;
    ctx_->scene_ = "next_level";
  } else {
    map->Update();
    gameControls->Update();
  }
  ctx_->money = player->GetMoney();
  ctx_->steps = player->GetCountStep();
}
void GameScene::OnExit() {}
bool GameScene::IsExit() {
  return false;
}
