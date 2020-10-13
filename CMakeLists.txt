cmake_minimum_required(VERSION 3.17)
project(multitetris)

set(CMAKE_CXX_STANDARD 20)

add_executable(multitetris main.cpp init.h input/glut/Init.cpp input/glut/Init.h input/glut/keyboard/Handler.cpp input/glut/keyboard/Handler.h routes/Router.cpp routes/Router.h World.cpp World.h models/Model.cpp models/Model.h controllers/Controller.cpp controllers/Controller.h)

target_link_libraries(multitetris glfw GL glut)
