//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_PLAYERCONTROLER_H
#define MYGAME_PLAYERCONTROLER_H

#include "Map.h"

class PlayerControler{
public:
    void LeftStep(int &x,int &steps);
    void RightStep(int &x,int &steps);
    void UpStep(int &y, int &steps);
    void DownSteps(int &y, int &steps);
    void Money(int &money,int &health,int x,int y, Map map);
    void Enemy(int health_, int x_, int y_, Map map);
};

#endif //MYGAME_PLAYERCONTROLER_H
