//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_TITLESCENE_H
#define MYGAME_TITLESCENE_H
#include <vector>
#include "../Controls.h"
#include "../Meny.h"
#include "IScene.h"

class TitleScene : public IScene {
  const Controls& controls_;
  Meny* meny;
  bool is_exit = false;

 public:
  TitleScene(Context* const ctx, const Controls& controls);
  void OnCreate() override;
  void OnRender() override;
  void OnExit() override;
  bool IsExit();
};
#endif  // MYGAME_TITLESCENE_H
