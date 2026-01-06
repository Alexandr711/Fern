include(${CMAKE_CURRNET_SOURCE_DIR}Gui/TitleWidget/TitleWidget.cmake)
include(${CMAKE_CURRNET_SOURCE_DIR}Gui/MainWindow/MainWindow.cmake)
include(${CMAKE_CURRNET_SOURCE_DIR}Gui/MenuBar/MenuBar.cmake)
include(${CMAKE_CURRNET_SOURCE_DIR}Gui/Languages/Languages.cmake)
include(${CMAKE_CURRNET_SOURCE_DIR}Gui/ToolBars/ToolBars.cmake)

include_directories(Gui/MenuBar)
include_directories(Gui/MainWindow)
include_directories(Gui/MenuBar)
include_directories(Gui/Languages)
include_directories(Gui/ToolBars)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Core)

add_library(GuiLib
            STATIC
            ${LANGUAGES}
            ${TITLE_WIDGET}
            ${MENU_BAR}
            ${MAIN_WINDOW}
            )

target_link_libraries(GuiLib PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(GuiLib PRIVATE Qt6::Core)
