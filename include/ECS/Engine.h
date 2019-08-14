//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_ENGINE_H
#define MYGAME_ENGINE_H
#include <memory>
#include "EntityManager.h"
#include "SystemManager.h"

class Engine {
 private:
  std::unique_ptr<EntityManager> entity_manager_;
  std::unique_ptr<SystemManager> system_manager_;

 public:
  Engine()
      : entity_manager_(std::make_unique<EntityManager>()),
        system_manager_(std::make_unique<SystemManager>(entity_manager_.get())) {}

  EntityManager* GetEntityManager() const {
    return entity_manager_.get();
  }
  SystemManager* GetSystemManager() const {
    return system_manager_.get();
  }

  void OnUpdate() const {
    system_manager_->OnUpdate();
  }
};

#endif  // MYGAME_ENGINE_H
