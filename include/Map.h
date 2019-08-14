//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_MAP_H
#define MYGAME_MAP_H

#include <BearLibTerminal.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <memory>
#include "Object/Earth.h"
#include "Object/Enemy.h"
#include "Object/Money.h"
#include "Object/Wall.h"
#include <list>
using namespace std;
class Map {
  vector<unique_ptr<MapObject>> level;
  int width_;
  int length_;

 public:
  Map(char **arr, int width, int length);
  void SetElement(int i, int j, char symbol);
  MapObject* GetElement(int i, int j);
  int GetLength();
  int GetWidth();
  void Update();
};

#endif  // MYGAME_MAP_H
