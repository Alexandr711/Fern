cmake_minimum_required(VERSION 3.14)

project(Fern)

add_subdirectory(Src)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(Src/Gui/MainWindow)
#include_directories(Src/Gui/MenuBar)
#include_directories(Src/Gui/TitleWidget)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_executable(${PROJECT_NAME} Src/Main.cpp)


target_link_libraries(${PROJECT_NAME} PRIVATE GuiLib)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
