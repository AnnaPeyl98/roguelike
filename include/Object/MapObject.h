//
// Created by anna on 04.07.19.
//

#ifndef MYGAME_MAPOBJECT_H
#define MYGAME_MAPOBJECT_H
class MapObject {
 public:
  virtual char GetSymbol() = 0;
  virtual int GetX() = 0;
  virtual int GetY() = 0;
  virtual void SetX(int x) = 0;
  virtual void SetY(int y) = 0;
  virtual void Update() = 0;
  virtual ~MapObject(){}
};

#endif  // MYGAME_MAPOBJECT_H
