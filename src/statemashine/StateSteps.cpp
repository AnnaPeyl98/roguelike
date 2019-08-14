//
// Created by anna on 16.07.19.
//

#include "../../include/statemashine/StateSteps.h"

void StateSteps::left() {
  if (map->GetElement(player->GetY(), player->GetX() - 1)->GetSymbol() == '/') {
    player->SetX(player->GetX() - 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
  }
  if (map->GetElement(player->GetY(), player->GetX() - 1)->GetSymbol() == '|' && player->GetKeys() != 0) {
    map->SetElement(player->GetY(), player->GetX() - 1, '|');
    player->SetX(player->GetX() - 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
    player->SetKey(player->GetKeys() - 1);
  }
  if (player->GetX() > 1 && map->GetElement(player->GetY(), player->GetX() - 1)->GetSymbol() != '#' &&
      map->GetElement(player->GetY(), player->GetX() - 1)->GetSymbol() != '|') {
    player->SetX(player->GetX() - 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
  }
}
void StateSteps::right() {
  if (map->GetElement(player->GetY(), player->GetX() + 1)->GetSymbol() == '/') {
    player->SetX(player->GetX() + 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
  }
  if (map->GetElement(player->GetY(), player->GetX() + 1)->GetSymbol() == '|' && player->GetKeys() != 0) {
    map->SetElement(player->GetY(), player->GetX() + 1, '|');
    player->SetX(player->GetX() + 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
    player->SetKey(player->GetKeys() - 1);
  }
  if (player->GetX() < map->GetLength() - 2 &&
      map->GetElement(player->GetY(), player->GetX() + 1)->GetSymbol() != '#' &&
      map->GetElement(player->GetY(), player->GetX() + 1)->GetSymbol() != '|') {
    player->SetX(player->GetX() + 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
  }
}

void StateSteps::down() {
  if (map->GetElement(player->GetY() + 1, player->GetX())->GetSymbol() == '/') {
    player->SetY(player->GetY() + 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
  }
  if (map->GetElement(player->GetY() + 1, player->GetX())->GetSymbol() == '_' && player->GetKeys() != 0) {
    map->SetElement(player->GetY() + 1, player->GetX(), '_');
    player->SetY(player->GetY() + 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
    player->SetKey(player->GetKeys() - 1);
  }
  if (player->GetY() < map->GetWidth() - 2 && map->GetElement(player->GetY() + 1, player->GetX())->GetSymbol() != '#' &&
      map->GetElement(player->GetY() + 1, player->GetX())->GetSymbol() != '_') {
    player->SetY(player->GetY() + 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
  }
}
void StateSteps::up() {
  if (map->GetElement(player->GetY()-1, player->GetX())->GetSymbol() == '/') {
    player->SetY(player->GetY() - 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
  }
  if (map->GetElement(player->GetY() - 1, player->GetX())->GetSymbol() == '_' && player->GetKeys() != 0) {
    map->SetElement(player->GetY() - 1, player->GetX(), '_');
    player->SetY(player->GetY() - 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
    player->SetKey(player->GetKeys() - 1);
  }
  if (player->GetY() > 1 && map->GetElement(player->GetY() - 1, player->GetX())->GetSymbol() != '#' &&
      map->GetElement(player->GetY() - 1, player->GetX())->GetSymbol() != '_') {
    player->SetY(player->GetY() - 1);
    player->SetSteps(player->GetSteps() - 1);
    player->SetOneStep(player->GetCountStep() + 1);
  }
}
bool StateSteps::nextLevel() {
  return map->GetElement(player->GetY(), player->GetX())->GetSymbol() == '>';
}
bool StateSteps::prevLevel() {
  return map->GetElement(player->GetY(), player->GetX())->GetSymbol() == '<';
}
void StateSteps::kill() {
  if (map->GetElement(player->GetY(), player->GetX())->GetSymbol() == 'E') {
    map->SetElement(player->GetY(), player->GetX(), 'E');
    player->SetHealth(player->GetHealth() - 1);
  }
}
void StateSteps::takeMoney() {
  if (map->GetElement(player->GetY(), player->GetX())->GetSymbol() == '$') {
    player->SetMoney(player->GetMoney() + 1);
    player->SetSteps(player->GetSteps() + 5);
    if (map->GetElement(player->GetY(), player->GetX())->GetX() % 2 == 0) {
      player->SetHealth(player->GetHealth() + 2);
    }
    map->SetElement(player->GetY(), player->GetX(), '$');
  }
}
bool StateSteps::gameOver() {
  return player->GetHealth() == 0 || player->GetSteps() == 0;
}
StateSteps::StateSteps(Player* player, Map* map) : player(player), map(map) {}
void StateSteps::takeKey() {
  if (map->GetElement(player->GetY(), player->GetX())->GetSymbol() == '%') {
    player->SetKey(player->GetKeys() + 1);
    map->SetElement(player->GetY(), player->GetX(), '%');
  }
}
