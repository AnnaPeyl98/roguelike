//
// Created by anna on 04.07.19.
//

#include "../../include/Reader/MapReader.h"
MapReader::MapReader() {}
void MapReader::Read(const char *name) {
  char ch;
  char buf[50];
  int index = 0;
  int wd;
  int ln;
  int x;
  int y;
  int steps;
  int health;
  int px;
  int py;
  FILE *file;
  file = fopen(name, "r");
  while ((ch = fgetc(file)) != '\n') {
    buf[index] = ch;

    index++;
  }
  sscanf(buf, "%d%d%d%d%d%d%d%d", &x, &y, &steps, &health, &py, &px, &wd, &ln);
  x_ = x;
  y_ = y;
  steps_ = steps;
  health_ = health;
  width = wd;
  length = ln;
  x_prev_ = px;
  y_prev_ = py;
  arr = new char *[width];
  for (int i = 0; i < width; i++) arr[i] = new char[length];
  for (int i = 0; i < width; i++) {
    int j = 0;
    while ((ch = fgetc(file)) != '\n') {
      arr[i][j] = ch;
      j++;
    }
  }
}
char MapReader::GetElement(int i, int j) {
  return arr[i][j];
}
int MapReader::GetLength() {
  return length;
}
int MapReader::GetWidth() {
  return width;
}
char **MapReader::GetArray() {
  return arr;
}
int MapReader::GetX() {
  return x_;
}
int MapReader::GetY() {
  return y_;
}
int MapReader::GetSteps() {
  return steps_;
}
int MapReader::GetHealth() {
  return health_;
}
int MapReader::GetPrevX() {
  return x_prev_;
}
int MapReader::GetPrevY() {
  return y_prev_;
}
