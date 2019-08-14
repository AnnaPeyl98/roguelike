//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_ISCENE_H
#define MYGAME_ISCENE_H
#include "Context.h"
class IScene {
 protected:
  Context* const ctx_;

 public:
  explicit IScene(Context* const ctx) : ctx_(ctx) {}
  virtual void OnCreate() = 0;
  virtual void OnRender() = 0;
  virtual void OnExit() = 0;
  virtual bool IsExit() = 0;
  virtual ~IScene() = default;
};

#endif  // MYGAME_ISCENE_H
