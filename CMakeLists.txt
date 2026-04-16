cmake_minimum_required(VERSION 3.8)

project("test")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

file(GLOB SRC *.cpp *.h *.ui)
add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Widgets) 