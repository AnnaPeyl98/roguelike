//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_RECORDSCENE_H
#define MYGAME_RECORDSCENE_H
#include <utility>
#include <string>
#include <map>
#include <vector>
#include "../Controls.h"
#include "../Reader/RecordReader.h"
#include "IScene.h"
class RecordScene : public IScene {
  const Controls& controls;
  std::map<int, std::string> record;

 public:
  RecordScene(Context* const ctx, const Controls& controls);
  void OnCreate() override;
  void OnRender() override;;
  void OnExit() override;
  bool IsExit();
};
#endif  // MYGAME_RECORDSCENE_H
