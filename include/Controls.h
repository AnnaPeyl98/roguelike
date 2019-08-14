//
// Created by anna on 25.06.19.
//

#ifndef MYGAME_CONTROLS_H
#define MYGAME_CONTROLS_H

#include <BearLibTerminal.h>

class Controls {
  bool is_up = false;
  bool is_right = false;
  bool is_left = false;
  bool is_down = false;
  bool is_exit = false;
  bool is_submit = false;
  bool is_meny = false;

 public:
  bool IsUp() const;
  bool IsRight() const;
  bool IsLeft() const;
  bool IsDown() const;
  bool IsExit() const;
  bool IsSubmit() const;
  bool IsMeny() const;
  void Update();
};
#endif  // MYGAME_CONTROLS_H
