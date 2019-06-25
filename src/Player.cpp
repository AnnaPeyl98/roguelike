//
// Created by anna on 25.06.19.
//


#include "../include/Controls.h"
#include "../include/Map.h"
#include "../include/Player.h"

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


        if(controls.IsDown()&& y_ < map.width - 2 && map.arr[y_ + 1][x_] != '#'){
            y_++;
            steps_--;

        }
        if(controls.IsLeft()&& x_ > 1 && map.arr[y_][x_ - 1] != '#'){
            x_--;
            steps_--;
        }
        if(controls.IsRight() && x_ < map.length - 2 && map.arr[y_][x_ + 1] != '#'){
            x_++;
            steps_--;

        }
        if(controls.IsUp() && y_ > 1 && map.arr[y_ - 1][x_] != '#'){
            y_--;
            steps_--;
        }
        if(controls.IsKill()){
            enemy=false;
            if (map.arr[y_ + 1][x_] == '*') {
                map.arr[y_ + 1][x_] = '.';
                health_--;
                enemy=true;
            }
            if (map.arr[y_][x_ + 1] == '*') {
                if(!enemy) {
                    map.arr[y_][x_ + 1] = '.';
                    health_--;
                    enemy=true;
                }else{
                    // game_over=true;
                }

            }
            if (map.arr[y_ - 1][x_] == '*') {
                if(!enemy) {
                    map.arr[y_ - 1][x_] = '.';
                    health_--;
                    enemy=true;
                }else{
                    // game_over=true;
                }

            }
            if (map.arr[y_][x_ - 1] == '*') {
                if(!enemy) {
                    map.arr[y_][x_ - 1] = '.';
                    health_--;
                    enemy=true;
                }else{
                    // game_over=true;
                }

            }
        }
        if(controls.IsMoney()&& map.arr[y_][x_] == '$'){
            money_++;
            map.arr[y_][x_] = '.';
        }
    }
    void Player::Render(){
        terminal_put(x_,y_,'@');

    }
Player::Player(const Controls &controls, int x, int money, int steps, int health, int y, Map &map)
            : y_(y), x_(x), health_(health), money_(money), steps_(steps), controls(controls), map(map) {}
    void Player::Update(){
        Move();
        Render();
    }