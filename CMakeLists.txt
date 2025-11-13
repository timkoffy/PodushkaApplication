cmake_minimum_required(VERSION 4.0)
project(PodushkaApplication)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
  Core
  Gui
  Widgets
  REQUIRED)

add_executable(PodushkaApplication main.cpp
        src/ui/mainWindow.cpp
        src/ui/mainWindow.h
        src/core/storageManager.cpp
        src/core/storageManager.h
        src/modules/music/musicManager.cpp
        src/modules/music/musicManager.h
        src/modules/music/playlistManager.cpp
        src/modules/music/playlistManager.h
        src/modules/notes/notesManager.cpp
        src/modules/notes/notesManager.h
        src/modules/pet/petLogic.cpp
        src/modules/pet/petLogic.h
        src/modules/games/gameSudoku.cpp
        src/modules/games/gameSudoku.h
        src/modules/terminal/terminalLogic.cpp
        src/modules/terminal/terminalLogic.h
        src/ui/headerWidget.cpp
        src/ui/headerWidget.h
        src/ui/buttonWidget.cpp
        src/ui/buttonWidget.h
        src/ui/windowLightWidget.cpp
        src/ui/windowLightWidget.h
)
target_link_libraries(PodushkaApplication
  Qt5::Core
  Qt5::Gui
  Qt5::Widgets
)

