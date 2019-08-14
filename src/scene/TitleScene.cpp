#include "../../include/scene/TitleScene.h"
//
// Created by anna on 29.07.19.
//
TitleScene::TitleScene(Context * const ctx, const Controls & controls) : IScene(ctx), controls_(controls) {
    meny = new Meny(controls_);
}
void TitleScene::OnCreate() {}
void TitleScene::OnRender() {
    meny->Update();
    if (controls_.IsSubmit()) {
        int key = meny->GetItem();
        if (key == 1) ctx_->scene_="next_level";
        if (key == 2) ctx_->scene_="record";
        if (key == 3) is_exit = true;
    }
}
void TitleScene::OnExit() {}
bool TitleScene::IsExit() {
    return is_exit;
}
