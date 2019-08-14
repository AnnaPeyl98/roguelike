//
// Created by anna on 25.06.19.
//

#include "../../include/Map.h"
#include <iostream>
#include "../../include/Object/DoorOne.h"
#include "../../include/Object/DoorTwo.h"
#include "../../include/Object/Empty.h"
#include "../../include/Object/Key.h"
#include "../../include/Object/Levels.h"
#include "../../include/Object/OpenDoor.h"
#include "../../include/Object/PrevLevel.h"
using namespace std;
Map::Map(char **arr, int width, int length) {
  width_ = width;
  length_ = length;
  int c = width_ * length_;
  level.reserve(c + 1);
  /*for (int i = 0; i < width; i++) {
    for (int j = 0; j < length_; j++) {
      cout << arr[i][j];
    }
    cout << "" << endl;
  }*/
  for (int i = 0; i < width_; i++) {
    for (int j = 0; j < length_; j++) {
      if (arr[i][j] == '$') {
        level.push_back(make_unique<Money>(i, j));
      }
      if (arr[i][j] == '.') {
        level.push_back(make_unique<Earth>(i, j));
      }
      if (arr[i][j] == '#') {
        level.push_back(make_unique<Wall>(i, j));
      }
      if (arr[i][j] == 'E') {
        level.push_back(make_unique<Enemy>(i, j));
      }
      if (arr[i][j] == '>') {
        level.push_back(make_unique<Levels>(i, j));
      }
      if (arr[i][j] == ' ') {
        level.push_back(make_unique<Empty>(i, j));
      }
      if (arr[i][j] == '<') {
        level.push_back(make_unique<PrevLevel>(i, j));
      }
      if (arr[i][j] == '%') {
        level.push_back(make_unique<Key>(i, j));
      }
      if (arr[i][j] == '|') {
        level.push_back(make_unique<DoorOne>(i, j));
      }
      if (arr[i][j] == '_') {
        level.push_back(make_unique<DoorTwo>(i, j));
      }
    }
  }
}

void Map::SetElement(int i, int j, char symbol) {
  int c = i * length_ + j;
  if (symbol == 'E' || symbol == '%' || symbol == '$') {
    level[c] = make_unique<Earth>(i, j);
  }
  if (symbol == '_' || symbol == '|') {
    level[c] = make_unique<OpenDoor>(i, j);
  }
}
MapObject *Map::GetElement(int i, int j) {
  int c = i * length_ + j;
  return dynamic_cast<MapObject *>(level[c].get());
}
int Map::GetLength() {
  return length_;
}
int Map::GetWidth() {
  return width_;
}
void Map::Update() {
  for (int i = 0; i < width_; i++) {
    for (int j = 0; j < length_; j++) {
      GetElement(i, j)->Update();
    }
  }
}
