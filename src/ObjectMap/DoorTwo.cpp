#include "../../include/Object/DoorTwo.h"
#include <BearLibTerminal.h>
//
// Created by anna on 05.08.19.
//
DoorTwo::DoorTwo(int x, int y) : x_(x), y_(y) {}
void DoorTwo::SetX(int x) {
    x_ = x;
}
void DoorTwo::SetY(int y) {
    y_ = y;
}
int DoorTwo::GetX() {
    return x_;
}
int DoorTwo::GetY() {
    return y_;
}
void DoorTwo::Update() {
    terminal_color("#d1047f");
    terminal_put(y_, x_, symbol);
}
char DoorTwo::GetSymbol() {
    return symbol;
}
