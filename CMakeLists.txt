cmake_minimum_required(VERSION 3.10)
project(ide VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(IDE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(IDE_SUBPROJECT_INCLUDE_DIRS ${DEP_INCLUDES})
add_subdirectory(dependencies)
add_subdirectory(src)

add_executable(ide src/Main.cpp)
target_link_libraries(ide PRIVATE ${DEP_LIBS})
target_include_directories(ide PRIVATE ${DEP_INCLUDES})
