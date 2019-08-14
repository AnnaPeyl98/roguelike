//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_GAMEOVERSCENE_H
#define MYGAME_GAMEOVERSCENE_H
#include "../Being/Player.h"
#include "../Controls.h"
#include "IScene.h"
class GameOverScene : public IScene {
  const Controls& controls;

 public:
  GameOverScene(Context* const ctx, const Controls& controls);
  void OnCreate() override;
  void OnRender() override;
  void OnExit() override;
  bool IsExit();
};
#endif  // MYGAME_GAMEOVERSCENE_H
