//
// Created by anna on 25.06.19.
//

#include <BearLibTerminal.h>
#include <signal.h>
#include "../include/Controls.h"

bool Controls::IsUp()const {return is_up;}
    bool Controls::IsRight()const { return is_right;}
    bool Controls::IsLeft()const { return is_left;}
    bool Controls::IsDown()const { return is_down;}
    bool Controls::IsKill()const { return kill;}
    bool Controls::IsMoney()const { return take_money;}
    bool Controls::IsExit()const { return is_exit;}
    void Controls::Update(){
        is_up = false;
        is_right = false;
        is_left = false;
        is_down = false;
        take_money=false;
        kill=false;
        is_exit = false;
        while(terminal_has_input()){
            auto event = terminal_read();
            if (event == TK_KP_8) {
                is_up=true;
            }
            if (event == TK_KP_6 ) {
                is_right=true;
            }
            if (event == TK_KP_4 ) {
                is_left=true;

            }
            if (event == TK_KP_2 ) {
                is_down=true;
            }
            if (event == TK_ENTER) {
                take_money=true;
            }
            if(event==TK_KP_5) {
                kill=true;
            }
            if (event == TK_CLOSE) {
                is_exit=true;
            }
        }

    }
