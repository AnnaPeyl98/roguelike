#include <BearLibTerminal.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <map>
#include <memory>
#include <vector>
#include "include/Being/Player.h"
#include "include/Controls.h"
#include "include/ECS/Engine.h"
#include "include/GameControls.h"
#include "include/LevelCreater.h"
#include "include/Map.h"
#include "include/Object/Levels.h"
#include "include/Reader/MapReader.h"
#include "include/component/ArrayComponents.h"
#include "include/component/CoordinateComponent.h"
#include "include/component/GameOverComponents.h"
#include "include/component/HealthComponent.h"
#include "include/component/KeyComponent.h"
#include "include/component/LevelsComponents.h"
#include "include/component/MoneyComponent.h"
#include "include/component/SizeComponent.h"
#include "include/component/StepsComponent.h"
#include "include/component/TextureComponent.h"
#include "include/component/VectorComponent.h"
#include "include/scene/Context.h"
#include "include/scene/GameOverScene.h"
#include "include/scene/GameScene.h"
#include "include/scene/NextLevelScene.h"
#include "include/scene/RecordScene.h"
#include "include/scene/SceneManager.h"
#include "include/scene/TitleScene.h"

using namespace std;

int main() {
 /* Engine engine{};
  auto player = engine.GetEntityManager()->CreateEntity();
  player->Add<HealthComponent>(5);
  player->Add<CoordinateComponent>(3, 10);
  player->Add<MoneyComponent>(0);
  player->Add<StepsComponent>(100);
  player->Add<KeyComponent>();
  player->Add<TextureComponent>('@');
  auto hc = player->Get<HealthComponent>();
  auto cd = player->Get<CoordinateComponent>();
  cout << hc->health_ << endl;
  cout << cd->x << endl;
  cout << cd->y << endl;
  cout << player->Get<MoneyComponent>()->money_ << endl;
  cout << player->Get<StepsComponent>()->steps_ << endl;
  cout << player->Get<StepsComponent>()->count_steps_ << endl;
  cout << player->Get<KeyComponent>()->count_key_ << endl;
  cout << player->Get<TextureComponent>()->symbol_ << endl;

  auto creater = engine.GetEntityManager()->CreateEntity();
  creater->Add<GameOverComponents>();
  char **buf;
  buf = new char *[2];
  for (int i = 0; i < 2; i++) buf[i] = new char[3];
  for(int i=0;i<2;i++){
    for (int j=0;j<3;j++){
      buf[i][j]='i';
    }
  }

  vector<char*> maps;
  maps.push_back("level4");
  maps.push_back("end");
  creater->Add<ArrayComponents>(buf);
  creater->Add<SizeComponent>(2, 3);
  creater->Add<VectorComponent>(maps);
  int c=creater->Get<SizeComponent>()->length_;
  for (int i = 0; i < creater->Get<SizeComponent>()->width_; i++) {
    for (int j = 0; j < creater->Get<SizeComponent>()->length_; j++) {
      cout << creater->Get<ArrayComponents>()->arr_[i][j] ;
    }
    cout << "" << endl;
  }
  cout<<creater->Get<SizeComponent>()->length_<<endl;
  cout<<creater->Get<SizeComponent>()->width_<<endl;
  cout<<creater->Get<VectorComponent>()->maps[0]<<endl;
  cout<<creater->Get<VectorComponent>()->maps[1]<<endl;

  auto game_controler_ = engine.GetEntityManager()->CreateEntity();
  game_controler_->Add<LevelsComponents>();
  game_controler_->Add<GameOverComponents>();
  cout<<game_controler_->Get<LevelsComponents>()->prev_level_<<endl;
  cout<<game_controler_->Get<LevelsComponents>()->next_level_<<endl;
  cout<<game_controler_->Get<GameOverComponents>()->game_over_<<endl;*/
   terminal_open();
   terminal_refresh();
   Controls controls;
     Context ctx{};
     SceneManager sm(ctx);

     sm.Put("title", new TitleScene(&ctx, controls));
     sm.Put("game", new GameScene(&ctx, controls));
     sm.Put("game_over", new GameOverScene(&ctx, controls));
     sm.Put("next_level", new NextLevelScene(&ctx, controls));
     sm.Put("record", new RecordScene(&ctx, controls));
     ctx.scene_ = "title";
     while (true) {
     terminal_clear();
     terminal_bkcolor("#e3d4a1");
     controls.Update();
     if (controls.IsExit()||sm.IsExit()) {
       break;
     }
     sm.OnRender();
     terminal_color("white");
     terminal_refresh();
   }
   terminal_close();
  return 0;
}