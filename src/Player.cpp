//
// Created by anna on 25.06.19.
//

#include <iostream>
#include "../include/Controls.h"
#include "../include/Map.h"
#include "../include/Player.h"
#include "../include/PlayerControler.h"
using namespace std;

void Player::SetX(int x){
        x_=x;
    }
    void Player::SetY(int y){
        y_=y;
    }
    void Player::SetMoney(int money){
        money_=money;
    }
    void Player::SetSteps(int steps){
        steps_=steps;
    }
    void Player::SetHealth(int health){
        health_=health;
    }
    void Player::SetMap(Map &map_) {
    map=map_;
}
    int Player::GetX(){
        return x_;
    }
    int Player::GetY(){
        return y_;
    }
    int Player::GetMoney(){
        return money_;
    }
    int Player::GetSteps(){
        return steps_;
    }
    int Player::GetHealth(){
        return health_;
    }

    void Player::Move(){
PlayerControler pc;

        if(controls.IsDown()&& y_ < map.width - 2 && map.arr[y_ + 1][x_] != '#'){
            cout<<1;
           pc.DownSteps(y_,steps_);

        }
        if(controls.IsLeft()&& x_ > 1 && map.arr[y_][x_ - 1] != '#'){
            cout<<2;
            pc.LeftStep(x_,steps_);
        }
        if(controls.IsRight() && x_ < map.length - 2 && map.arr[y_][x_ + 1] != '#'){
            cout<<3;
            pc.RightStep(x_,steps_);

        }
        if(controls.IsUp() && y_ > 1 && map.arr[y_ - 1][x_] != '#'){
            cout<<4;
            pc.UpStep(y_,steps_);
        }
        if(controls.IsKill()){
            pc.Enemy(health_,x_,y_,map);
        }
        if(controls.IsMoney()&& map.arr[y_][x_] == '$'){
            pc.Money(money_,health_,x_,y_,map);
        }
        if(map.arr[y_][x_]=='>'){

        }
    }
    void Player::Render(){
        terminal_put(x_,y_,'@');

    }
Player::Player(int x, int money, int steps, int health, int y, Map &map, const Controls &controls)
            : y_(y), x_(x), health_(health), money_(money), steps_(steps), map(map), controls(controls) {}
    void Player::Update(){
        Move();
        Render();
    }