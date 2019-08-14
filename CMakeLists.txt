cmake_minimum_required(VERSION 3.14)
project(mygame)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -Wall -Werror -Wextra -Wzero-as-null-pointer-constant -Winit-self -Wswitch-default -Wfloat-equal -Wno-unused-parameter -fPIC -march=native")

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/CMake")

find_package(BearLibTerminal REQUIRED)
include_directories(SYSTEM ${BLT_INCLUDE_DIRS})

set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/src)

FILE(GLOB_RECURSE HEADERS ${PROJECT_HEADERS_DIR}/*.h)
FILE(GLOB_RECURSE SOURCES ${PROJECT_SOURCES_DIR}/*.cpp)

add_executable(mygame ${HEADERS} ${SOURCES} include/Map.h src/Map/Map.cpp include/Controls.h src/Controls.cpp include/Being/Player.h src/Player.cpp main.cpp include/LevelCreater.h include/Object/Wall.h src/ObjectMap/Wall.cpp include/Object/Money.h src/ObjectMap/Money.cpp include/Object/Earth.h src/ObjectMap/Earth.cpp include/Object/MapObject.h include/Object/Enemy.h include/Reader/MapReader.h src/Map/MapReader.cpp include/Reader/Reader.h src/ObjectMap/Enemy.cpp  include/statemashine/IState.h include/statemashine/StateSteps.h include/Object/Levels.h src/ObjectMap/Levels.cpp src/statemashine/StateSteps.cpp include/Object/Empty.h src/ObjectMap/Empty.cpp include/GameControls.h src/GameControls.cpp include/scene/IScene.h include/scene/GameOverScene.h include/scene/TitleScene.h include/scene/GameScene.h include/scene/NextLevelScene.h include/scene/Context.h include/scene/SceneManager.h include/scene/RecordScene.h include/Meny.h include/Object/PrevLevel.h src/ObjectMap/PrevLevel.cpp include/Reader/RecordReader.h src/scene/GameOverScene.cpp src/scene/GameScene.cpp src/scene/NextLevelScene.cpp src/scene/RecordScene.cpp src/scene/SceneManager.cpp src/scene/TitleScene.cpp src/LevelCreater.cpp src/Meny.cpp include/Object/Key.h src/ObjectMap/Key.cpp include/Object/DoorOne.h src/ObjectMap/DoorOne.cpp include/Object/DoorTwo.h src/ObjectMap/DoorTwo.cpp include/component/IComponent.h include/component/TextureComponent.h include/component/CoordinateComponent.h include/component/MoneyComponent.h include/component/HealthComponent.h include/component/StepsComponent.h include/component/KeyComponent.h include/component/ControlsComponent.h include/component/SizeComponent.h include/component/GameOverComponents.h include/component/LevelsComponents.h include/component/ArrayComponents.h include/component/VectorComponent.h include/component/MapRecordComponent.h include/ECS/Entity.h include/ECS/EntityManager.h include/ECS/Engine.h include/ECS/SystemManager.h include/system/ISystem.h include/Object/OpenDoor.h src/ObjectMap/OpenDoor.cpp)

target_link_libraries(${PROJECT_NAME} ${BLT_LIBRARIES})

file(COPY ${BLT_LIBRARY} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
# Add linting before compilation
include(CppLint)
ADD_STYLE_CHECK_TARGET(lint ${PROJECT_HEADERS_DIR} ${PROJECT_SOURCES_DIR})
add_dependencies(${PROJECT_NAME} lint)
