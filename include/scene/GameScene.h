//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_GAMESCENE_H
#define MYGAME_GAMESCENE_H
#include "../Controls.h"
#include "../GameControls.h"
#include "../LevelCreater.h"
#include "IScene.h"
class GameScene : public IScene {
  const Controls& controls_;
  Player* player;
  Map* map;
  StateSteps* stateSteps;
  GameControls* gameControls;
  LevelCreater levelCreater;
  int i = -1;
  bool prev_level = false;

 public:
  GameScene(Context* const ctx, const Controls& controls);
  void OnCreate() override;
  void OnRender() override;
  void OnExit() override;
  bool IsExit();
};
#endif  // MYGAME_GAMESCENE_H
