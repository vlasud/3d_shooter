cmake_minimum_required(VERSION 3.5)
project(game_third_party)

add_library(${PROJECT_NAME} INTERFACE)

add_subdirectory(graviton)
target_link_libraries(${PROJECT_NAME} INTERFACE graviton)
