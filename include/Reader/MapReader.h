//
// Created by anna on 04.07.19.
//

#ifndef MYGAME_MAPREADER_H
#define MYGAME_MAPREADER_H
#include <cstdio>
#include "Reader.h"
class MapReader : public Reader {
  int width;
  int length;
  char **arr;
  int x_;
  int y_;
  int steps_;
  int health_;
  int y_prev_;
  int x_prev_;
 public:
  MapReader();
  void Read(const char *name) override;
  char GetElement(int i, int j);
  int GetLength();
  int GetWidth();
  char **GetArray();
  int GetX();
  int GetY();
  int GetSteps();
  int GetHealth();
  int GetPrevX();
  int GetPrevY();
};
#endif  // MYGAME_MAPREADER_H
