#include "../../include/scene/NextLevelScene.h"
//
// Created by anna on 29.07.19.
//
NextLevelScene::NextLevelScene(Context* const ctx, const Controls& controls) : IScene(ctx), controls(controls) {}
void NextLevelScene::OnCreate() {
  ctx_->scene_ = "game";
}
void NextLevelScene::OnRender() {}
void NextLevelScene::OnExit() {}
bool NextLevelScene::IsExit() {
  return false;
}
