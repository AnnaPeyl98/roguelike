//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_LEVELCREATER_H
#define MYGAME_LEVELCREATER_H
#include <fcntl.h>
#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include "Being/Player.h"
#include "Map.h"
#include "Reader/MapReader.h"
using namespace std;
class LevelCreater {
  bool game_over = false;
  char **arr;
  int width_;
  int length_;
  std::vector<char *> maps;

 public:
  LevelCreater();
  char *GetAddress(int i);
  void NextLevel(Player *player, int i, bool flag);
  void Update();
  char **getArr();
  int getWidth();
  int getLength();
  bool IsGameOver();
  void SetGameOver();
};

#endif  // MYGAME_LEVELCREATER_H
