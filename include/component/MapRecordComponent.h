//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_MAPRECORDCOMPONENT_H
#define MYGAME_MAPRECORDCOMPONENT_H
#include <iostream>
#include <map>
#include <string>
#include "IComponent.h"
class MapRecordComponent : public IComponent {
 public:
  std::map<int, std::string> record;
};
#endif  // MYGAME_MAPRECORDCOMPONENT_H
