cmake_minimum_required(VERSION 3.29)
project(runner_2d)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp InputDispatcher.h GameObject.h Component.h Factory.h InputDispatcher.h InputDispatcher.cpp InputReceiver.h Factory.cpp InputReceiver.cpp)
add_executable(runner_2d ${SOURCE_FILES})

set(CMAKE_PREFIX_PATH /opt/homebrew/Cellar/sfml/2.6.2)
find_package(SFML 2.6.2 COMPONENTS graphics window system audio REQUIRED)
target_link_libraries(runner_2d sfml-graphics sfml-window sfml-system sfml-audio)