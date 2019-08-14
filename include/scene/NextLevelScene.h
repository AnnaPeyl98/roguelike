//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_NEXTLEVELSCENE_H
#define MYGAME_NEXTLEVELSCENE_H
#include "../Controls.h"
#include "../LevelCreater.h"
#include "IScene.h"
class NextLevelScene : public IScene {
  const Controls& controls;

 public:
  NextLevelScene(Context* const ctx, const Controls& controls);
  void OnCreate() override;
  void OnRender() override;
  void OnExit() override;
  bool IsExit();
};
#endif  // MYGAME_NEXTLEVELSCENE_H
