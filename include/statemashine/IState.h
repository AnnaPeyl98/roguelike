//
// Created by anna on 16.07.19.
//

#ifndef MYGAME_ISTATE_H
#define MYGAME_ISTATE_H
#include "../Map.h"
class Player;
class IState {
 public:
  virtual void left() = 0;
  virtual void right() = 0;
  virtual void down() = 0;
  virtual void up() = 0;
  virtual bool nextLevel() = 0;
  virtual void kill() = 0;
  virtual void takeMoney() = 0;
  virtual bool gameOver() = 0;
  virtual bool prevLevel() = 0;
  virtual void takeKey() = 0;
};
#endif  // MYGAME_ISTATE_H
