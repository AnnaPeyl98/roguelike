//
// Created by anna on 25.06.19.
//

#include <iostream>
#include "../include/Map.h"
using namespace std;
Map::Map(const char *name){
        getMap(name);
    }
    void Map::getMap(const char *name) {
        char ch;
        char buf[5];
        int index = 0;
        FILE *file;
        file = fopen(name, "r");


        while ((ch = fgetc(file)) != '\n') {
            buf[index] = ch;

            index++;
        }
        sscanf(buf, "%d%d", &width, &length);

        arr = new char *[width];
        for (int i = 0; i < width; i++)
            arr[i] = new char[length];
        for (int i = 0; i < width; i++) {
            int j = 0;
            while ((ch = fgetc(file)) != '\n') {
                arr[i][j] = ch;
                j++;
            }

        }
        for(int i=0;i<width;i++){
            for(int j=0;j<length;j++)
                cout<<arr[i][j];
            cout<<" "<<endl;
        }

    }


    void Map::Update(){
        for(int i=0;i<width;i++){
            for(int j=0;j<length;j++){
                terminal_put(j,i,arr[i][j]);
            }
        }
    }


