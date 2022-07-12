cmake_minimum_required(VERSION 3.22)
project(untitled3)

set(CMAKE_PREFIX_PATH "/Users/70ltw/Qt/6.2.2/macos/lib/cmake")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(untitled3
        src/main.cpp
        src/aboutdoc.cpp
        src/backgrounditems.cpp
        src/Ball.cpp
        src/frame.cpp
        src/game.cpp
        src/initialscreen.cpp
        src/mainwindow.cpp
        src/Paddle.cpp
        src/result.cpp
        src/timer.cpp
        src/view.cpp
        src/aboutdoc.ui
        src/result.ui
        lib/aboutdoc.h
        lib/backgrounditems.h
        lib/Ball.h
        lib/frame.h
        lib/game.h
        lib/initialscreen.h
        lib/mainwindow.h
        lib/Paddle.h
        lib/result.h
        lib/timer.h
        lib/view.h)
target_link_libraries(untitled3
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

