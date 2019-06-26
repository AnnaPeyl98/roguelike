//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_GAME_H
#define MYGAME_GAME_H
#include <iostream>
#include <cstdio>
#include <fcntl.h>
#include <stdio.h>
#include "Map.h"
#include "Player.h"
using namespace std;
class Game{
    const char * levels = "/home/anna/Рабочий стол/coding garden/mygame/adress";
    FILE *file;
    char buf[200];
   // char *end="end";
    std::string s;
public:
    Game(){
        file = fopen(levels, "r");

    }
    void GetAddress() {
       char bf[200];
       char *add;
        int index = 0;
        char ch;

        int length;
        while ((ch = fgetc(file)) != '\n') {
            buf[index] = ch;
            index++;
        }
        sscanf(buf, "%d",&length);
        fgets(bf,200,file);
        add = new char [length];
        for(int i=0;i<length;i++){
            add[i]=bf[i];

        }
        for(int i=0;i<length;i++){
            cout<<(char)add[i]<<endl;

        }

        cout<<add;
        /*char *add;
        char ch;
        int index = 0;
        int length;
        while ((ch = fgetc(file)) != '\n') {
            buf[index] = ch;
            index++;
        }
        sscanf(buf, "%d",&length);
        add = new char [length];
        index=0;
        while ((ch = fgetc(file)) != '\n') {
            add[index] = ch;
            index++;
        }
        cout<<add;*/
        //Map map = Map(add);

    }
    void NextLevel(Map &map,Player &player,int steps){
        GetAddress();
        //if()
        Controls controls;
        map=Map(buf);
        player = Player(player.x_, player.money_, steps, player.health_, player.y_, map, controls);
    }


};
#endif //MYGAME_GAME_H
