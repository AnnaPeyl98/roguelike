#include "../include/Meny.h"
//
// Created by anna on 29.07.19.
//
Meny::Meny(const Controls& controls) : controls(controls) {
  menu.push_back("1.New Game");
  menu.push_back("2.Records");
  menu.push_back("3.Exit");
}
void Meny::Update() {
  if (controls.IsDown()) {
    if (i < 3) {
      i++;
    } else {
      i = 1;
    }
  }
  if (controls.IsUp()) {
    if (i > 1) {
      i--;
    } else {
      i = 3;
    }
  }
  int j = 1;
  for (char* cr : menu) {
    if (j == i) {
      terminal_color("#63314f");
      terminal_print(25, j+6, cr);
    } else {
      terminal_color("#96848f");
      terminal_print(25, j+6, cr);
    }
    j++;
  }
}
int Meny::GetItem() {
  return i;
}
