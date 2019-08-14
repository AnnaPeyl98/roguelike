//
// Created by anna on 29.07.19.
//

#include "../../include/scene/RecordScene.h"
#include <algorithm>
#include <iostream>
#include <vector>

RecordScene::RecordScene(Context* const ctx, const Controls& controls) : IScene(ctx), controls(controls) {}
void RecordScene::OnCreate() {
  RecordReader recordReader = RecordReader();
  recordReader.Read("record");
  record = recordReader.GetMap();
}
void RecordScene::OnRender() {
  if (controls.IsSubmit()) {
    ctx_->scene_ = "title";
  }
  int i = 10;
  terminal_color("#63314f");
  terminal_print(25, 8, "The best of the best!");
  for (const auto& element : record) {
    terminal_printf(30, i, "%d. %s %d", i-9, element.second.c_str(), element.first);
    i++;
    if (i == 15) break;
  }
}
void RecordScene::OnExit() {}
bool RecordScene::IsExit() {
  return false;
}
