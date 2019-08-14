#include "../../include/Object/DoorOne.h"
#include <BearLibTerminal.h>
//
// Created by anna on 05.08.19.
//
DoorOne::DoorOne(int x, int y) : x_(x), y_(y) {}
void DoorOne::SetX(int x) {
    x_ = x;
}
void DoorOne::SetY(int y) {
    y_ = y;
}
int DoorOne::GetX() {
    return x_;
}
int DoorOne::GetY() {
    return y_;
}
void DoorOne::Update() {
    terminal_color("#d1047f");
    terminal_put(y_, x_, symbol);
}
char DoorOne::GetSymbol() {
    return symbol;
}
