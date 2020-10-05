cmake_minimum_required(VERSION 3.17)
project(multitetris)

set(CMAKE_CXX_STANDARD 20)

add_executable(multitetris main.cpp init.h controllers/glut/Init.cpp controllers/glut/Init.h controllers/glut/controller/Controller.cpp controllers/glut/controller/Controller.h)

target_link_libraries(multitetris glfw GL glut)
