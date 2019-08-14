//
// Created by anna on 25.06.19.
//

#include "../include/Controls.h"
#include <BearLibTerminal.h>
#include <signal.h>
#include <iostream>
using namespace std;
bool Controls::IsUp() const {
  return is_up;
}
bool Controls::IsRight() const {
  return is_right;
}
bool Controls::IsLeft() const {
  return is_left;
}
bool Controls::IsDown() const {
  return is_down;
}
bool Controls::IsExit() const {
  return is_exit;
}
bool Controls::IsSubmit() const {
  return is_submit;
}
bool Controls::IsMeny() const {
  return is_meny;
}
void Controls::Update() {
  is_up = false;
  is_right = false;
  is_left = false;
  is_down = false;
  is_exit = false;
  is_submit = false;
  is_meny = false;
  while (terminal_has_input()) {
    auto event = terminal_read();
    if (event == TK_UP) {
      is_up = true;
    }
    if (event == TK_RIGHT) {
      is_right = true;
    }
    if (event == TK_LEFT) {
      is_left = true;
    }
    if (event == TK_DOWN) {
      is_down = true;
    }
    if (event == TK_CLOSE) {
      is_exit = true;
    }
    if (event == TK_ENTER) {
      is_submit = true;
    }
    if (event == TK_ESCAPE) {
      is_meny = true;
    }
  }
}
