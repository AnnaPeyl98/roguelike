//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_MAP_H
#define MYGAME_MAP_H

#include <cstdio>
#include <BearLibTerminal.h>

class Map {
public:
    int width;
    int length;
    char **arr;

    Map(const char *name);
    void getMap(const char *name);
public:
    void Update();
};


#endif //MYGAME_MAP_H
