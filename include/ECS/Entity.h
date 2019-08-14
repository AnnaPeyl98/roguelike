//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_ENTITY_H
#define MYGAME_ENTITY_H
#include <map>
#include <memory>
#include <typeindex>
#include <utility>
#include "../component/IComponent.h"

class Entity {
  friend class EntityManager;

 private:
  std::map<std::type_index, std::unique_ptr<IComponent>> components;
  size_t id = 0;

 public:
  explicit Entity(size_t id) : id(id) {}

  // вставляем новую компоненту в сущность
  template<typename Component, typename... Args>
  Entity* Add(Args&&... args) {
    components[typeid(Component)] = std::make_unique<Component>(std::forward<Args>(args)...);
    return this;
  }
  //вернуть айди сущности
  size_t GetId() const {
    return id;
  }
  //получить сущность по ее типу
  template<typename Component>
  Component* Get() const {
    auto c = components.at(typeid(Component)).get();
    return dynamic_cast<Component*>(c);
  }
  //есть ли компонента этого типа в сущности или нет
  template<typename Component>
  bool Contains() const {
    return components.count(typeid(Component)) != 0;
  }

  template<typename Component>
  void Delete() {
    components.erase(typeid(Component));
  }
};

#endif  // MYGAME_ENTITY_H
