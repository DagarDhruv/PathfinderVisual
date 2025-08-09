cmake_minimum_required(VERSION 3.27)
project(PathfinderVisual)

set(CMAKE_CXX_STANDARD 17)

# Find SFML
find_package(SFML 2.6 COMPONENTS system window graphics network audio REQUIRED)

# Include directories
include_directories(
        .
        /opt/homebrew/include # General include directory
)

# Link directories
link_directories(
        /opt/homebrew/lib # General library directory
)

add_executable(PathfinderVisual main.cpp
        Header/grid.h
        Include/grid.cpp
        Include/Node.cpp)

target_link_libraries(PathfinderVisual PRIVATE sfml-graphics sfml-window sfml-system)
