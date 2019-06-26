#include <stdio.h>
#include <BearLibTerminal.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>
#include <map>
#include "include/Map.h"
#include "include/Controls.h"
#include "include/Player.h"
#include "include/Game.h"

//using namespace std;

int main() {
   // Game game = Game();
    //game.GetAddress();


    terminal_open();
    terminal_refresh();
    int player_x=1;
    int player_y=1;
    int money=0;
    int steps = 200;
    bool game_over=false;
    int health=100;
    bool enemy=false;
    bool next_level=false;
    Map map= Map("/home/anna/Рабочи стол/coding garden/mygame/game");
    Controls controls;
    Player player = Player(1, 0, 200, 100, 1, map, controls);

    while (true) {
        terminal_clear();
        controls.Update();
        if (controls.IsExit()) {
            break;
        }

       /* if(arr[player.y_][player.x_] == '>'){
            next_level = true;
        }
        if (arr[player.y_][player.x_] == '*' || player.steps_ == 0) {
            game_over = true;

        }

        if(game_over){
            terminal_print(1,1,"Game over!");
            terminal_refresh();
            continue;
        }
        if(next_level){
            terminal_print(1,1,"Next level!");
            terminal_refresh();
            continue;
        }*/

        map.Update();
        player.Update();
        terminal_refresh();
    }
    terminal_close();
    return 0;
}