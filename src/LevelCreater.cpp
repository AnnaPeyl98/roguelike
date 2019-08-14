//
// Created by anna on 29.07.19.
//

#include "../include/LevelCreater.h"
LevelCreater::LevelCreater() {
  // maps.push_back("level1");
  maps.push_back("level4");
  maps.push_back("level3");
  maps.push_back("end");
  // file = fopen(levels, "r");
}
char* LevelCreater::GetAddress(int i) {
  /*char ch;
  int index = 0;
  while ((ch = fgetc(file)) != '\n') {
    buf[index] = ch;
    index++;
  }
  cout << buf;*/
  return maps[i];
}
void LevelCreater::NextLevel(Player* player, int i, bool flag) {
  char* address = GetAddress(i);
  if (address == "end") {
    game_over = true;
  }
  if (!game_over) {
    MapReader mapReader = MapReader();
    mapReader.Read(address);
    if (flag) {
      player->SetX(mapReader.GetPrevX());
      player->SetY(mapReader.GetPrevY());
    } else {
      player->SetX(mapReader.GetX());
      player->SetY(mapReader.GetY());
    }
    player->SetSteps(mapReader.GetSteps());
    player->SetHealth(mapReader.GetHealth());
    arr = mapReader.GetArray();
    width_ = mapReader.GetWidth();
    length_ = mapReader.GetLength();
    /* for (int i = 0; i < width_; i++) {
         for (int j = 0; j < length_; j++) {
             cout << arr[i][j];
         }
         cout << endl;
     }*/
  }
}
void LevelCreater::Update() {
  /*terminal_printf(40, 11, "Money %d", player_->GetMoney());
  terminal_printf(40, 12, "Steps %d", player_->GetCountStep());*/
}
char** LevelCreater::getArr() {
  return arr;
}
int LevelCreater::getWidth() {
  return width_;
}
int LevelCreater::getLength() {
  return length_;
}
bool LevelCreater::IsGameOver() {
  return game_over;
}
void LevelCreater::SetGameOver() {
  game_over = false;
}
