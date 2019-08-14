#include "../../include/Object/OpenDoor.h"
#include <BearLibTerminal.h>
//
// Created by anna on 08.08.19.
//
OpenDoor::OpenDoor(int x, int y) : x_(x), y_(y) {}
void OpenDoor::SetX(int x) {
    x_ = x;
}
void OpenDoor::SetY(int y) {
    y_ = y;
}
int OpenDoor::GetX() {
    return x_;
}
int OpenDoor::GetY() {
    return y_;
}
void OpenDoor::Update() {
    terminal_color("#d1047f");
    terminal_put(y_, x_, symbol);
}
char OpenDoor::GetSymbol() {
    return symbol;
}
