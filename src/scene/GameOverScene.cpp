//
// Created by anna on 29.07.19.
//

#include "../../include/scene/GameOverScene.h"
#include "../../include/Reader/RecordReader.h"
std::wstring my_read_str(int x, int y, int max) {
  std::wstring s;
  terminal_clear();
  string str;
  while (true) {
    int key = terminal_read();

    if (key == TK_RETURN || key == TK_ESCAPE || key == TK_CLOSE) {
      // Не делаем различия между подтвеждением и отменой ввода
      break;
    } else if (key == TK_BACKSPACE && s.length() > 0) {
      // Удаляем один символ с конца
      s.resize(s.length() - 1);
    } else if (terminal_check(TK_WCHAR) && s.length() < max) {
      // Добавляем символ в конец
      s += (wchar_t) terminal_state(TK_WCHAR);
    }

    // Визуализация ввода
    terminal_printf(x, y, "%s", s.c_str());
  }

  return s;
}
void GameOverScene::OnCreate() {}
void GameOverScene::OnRender() {
  terminal_color("#63314f");
  if (ctx_->game_over) {
    terminal_print(1, 1, "WOW, you WIN! Yor result:");
    terminal_printf(40, 11, "Money %d", ctx_->money);
    terminal_printf(40, 12, "Steps %d", ctx_->steps);
  } else {
    terminal_print(1, 1, "You lose:(");
    terminal_printf(40, 11, "Money %d", ctx_->money);
    terminal_printf(40, 12, "Steps %d", ctx_->steps);
  }

  if (controls.IsSubmit()) {
    if (ctx_->game_over) {
      int k = 0;
      terminal_refresh();
      RecordReader recordReader = RecordReader();
      terminal_print(1, 1, "Enter your name");
      std::wstring s = my_read_str(2, 2, 10);
      /*wchar_t s[32] = L"";
      if (terminal_read_wstr(2, 2, s, sizeof(s) - 1) >= 0 || k < 10) {
        terminal_wprintf(2, 2, s);
      }*/
      recordReader.Write("record", s, ctx_->steps);
    }
    ctx_->scene_ = "title";
    ctx_->game_over = false;
  }
}
void GameOverScene::OnExit() {}
bool GameOverScene::IsExit() {
  return false;
}
GameOverScene::GameOverScene(Context* const ctx, const Controls& controls) : IScene(ctx), controls(controls) {}
