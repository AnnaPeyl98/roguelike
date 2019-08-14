//
// Created by anna on 26.07.19.
//

#include "../../include/Object/PrevLevel.h"
#include <BearLibTerminal.h>

PrevLevel::PrevLevel(int x, int y) : x_(x), y_(y) {}
int PrevLevel::GetX() {
    return x_;
}
int PrevLevel::GetY() {
    return y_;
}
void PrevLevel::SetX(int x) {
    x_ = x;
}
void PrevLevel::SetY(int y) {
    y_ = y;
}
void PrevLevel::Update() {
    terminal_color("#4b8299");
    terminal_put(y_, x_, symbol);
}
char PrevLevel::GetSymbol() {
    return symbol;
}

