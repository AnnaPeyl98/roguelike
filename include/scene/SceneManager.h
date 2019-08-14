//
// Created by anna on 26.07.19.
//

#ifndef MYGAME_SCENEMANAGER_H
#define MYGAME_SCENEMANAGER_H
#include <map>
#include <memory>
#include <string>
#include "IScene.h"
class SceneManager {
  std::map<std::string, std::unique_ptr<IScene>> scenes_;
  const Context& ctx_;
  std::string current_scene_ = "";

 public:
  explicit SceneManager(const Context& context);
  void OnRender();
  void OnExit() const;
  void Put(const std::string& name, IScene* scene);
  bool IsExit();
};
#endif  // MYGAME_SCENEMANAGER_H
