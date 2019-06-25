//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_CONTROLS_H
#define MYGAME_CONTROLS_H

#include <BearLibTerminal.h>

class Controls{
    bool is_up = false;
    bool is_right = false;
    bool is_left = false;
    bool is_down = false;
    bool take_money=false;
    bool kill=false;
    bool is_exit = false;
public:
    bool IsUp()const;
    bool IsRight()const;
    bool IsLeft()const;
    bool IsDown()const;
    bool IsKill()const;
    bool IsMoney()const;
    bool IsExit()const;
    void Update();
};
#endif //MYGAME_CONTROLS_H
