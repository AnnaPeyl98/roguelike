//
// Created by anna on 07.08.19.
//

#ifndef MYGAME_CONTROLSCOMPONENT_H
#define MYGAME_CONTROLSCOMPONENT_H
#include <BearLibTerminal.h>
#include <map>
#include <vector>
class ControlsComponent {
  std::map<int, bool> is_pressed_{};

 public:
  void Press(int btn_key) {
    is_pressed_[btn_key] = true;
  }
  //проверяем, нажата ли кнопка или нет
  bool IsPressed(int btn_key) const {
    if (is_pressed_.count(btn_key) == 0) {
      return false;
    }
    return is_pressed_.at(btn_key);
  }
  // функция "обнуляет" все ключи, вызывается в конец игрового цикла
  void Reset() {
    for (auto& btn : is_pressed_) {
      btn.second = false;
    }
  }
  // функция для нажатия кнопки, вызывается в самом начале игрового цикла, с помощью нее кнопки вставляются
  //в карту
  void OnUpdate() {
    while (terminal_has_input()) {
      auto key = terminal_read();
      is_pressed_[key] = true;
    }
  }
};

#endif  // MYGAME_CONTROLSCOMPONENT_H
