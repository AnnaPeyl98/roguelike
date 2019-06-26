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
    void SetMap(Map &map);
    int GetX();
    int GetY();
    int GetMoney();
    int GetSteps();
    int GetHealth();
    Player(int x, int money, int steps, int health, int y, Map &map, const Controls &controls);
    void Update();
    Player& operator=(const Player& player) {
        //проверка на самоприсваивание
        if (this == &player) {
            return *this;
        }
        x_=player.x_;
        y_=player.y_;
        money_=player.money_;
        steps_=player.steps_;
        health_=player.health_;

        return *this;
    }
};
#endif //MYGAME_PLAYER_H
