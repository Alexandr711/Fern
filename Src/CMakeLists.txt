include(${CMAKE_CURRNET_SOURCE_DIR}Gui/TitleWidget/TitleWidget.cmake)
include(${CMAKE_CURRNET_SOURCE_DIR}Gui/MainWindow/MainWindow.cmake)
include(${CMAKE_CURRNET_SOURCE_DIR}Gui/MenuBar/MenuBar.cmake)

include_directories(Gui/TitleWidget)
include_directories(Gui/MainWindow)
include_directories(Gui/MenuBar)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_library(Gui
            STATIC
            ${TITLE_WIDGET})

target_link_libraries(Gui PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
