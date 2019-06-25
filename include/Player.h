//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_PLAYER_H
#define MYGAME_PLAYER_H

#include "Controls.h"
#include "Map.h"

class Player{
    const Controls &controls;
    Map &map;
    bool enemy =false;
public:
    int x_;
    int y_;
    int money_;
    int steps_;
    int health_;
private:

    void Move();
    void Render();
public:
    void SetX(int x);
    void SetY(int y);
    void SetMoney(int money);
    void SetSteps(int steps);
    void SetHealth(int health);
    int GetX();
    int GetY();
    int GetMoney();
    int GetSteps();
    int GetHealth();
    Player(const Controls &controls, int x, int money, int steps, int health, int y, Map &map);
    void Update();

};
#endif //MYGAME_PLAYER_H
