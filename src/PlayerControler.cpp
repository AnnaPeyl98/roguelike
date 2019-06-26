#include "../include/PlayerControler.h"
#include "../include/Map.h"

//
// Created by anna on 25.06.19.
//
void PlayerControler::LeftStep(int &x,int &steps){
    x--;
    steps--;
};
void PlayerControler::RightStep(int &x,int &steps){
    x++;
    steps--;
};
void PlayerControler::UpStep(int &y, int &steps){
    y--;
    steps--;
};
void PlayerControler::DownSteps(int &y, int &steps){
    y++;
    steps--;
};
void PlayerControler::Money(int &money,int &health,int x,int y, Map map){
    money++;
    map.arr[y][x] = '.';
};
void PlayerControler::Enemy(int health_, int x_, int y_, Map map){
    if (map.arr[y_ + 1][x_] == '*') {
        map.arr[y_ + 1][x_] = '.';
        health_--;
    }
    if (map.arr[y_][x_ + 1] == '*') {
        map.arr[y_][x_ + 1] = '.';
        health_--;

    }
    if (map.arr[y_ - 1][x_] == '*') {

        map.arr[y_ - 1][x_] = '.';
        health_--;
    }
    if (map.arr[y_][x_ - 1] == '*') {
        map.arr[y_][x_ - 1] = '.';
        health_--;

    }
};
