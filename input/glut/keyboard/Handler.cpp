#include <GL/glut.h>
#include <iostream>
#include <chrono>
#include "Handler.h"

Handler::Handler(Router *router) :m_router(router) {}

Handler::~Handler() = default;

void Handler::control(int key, int x, int y) {
    auto controller = m_router->getController(key);
    controller->action(key);
}

void Handler::control(unsigned char key, int x, int y) {
    auto controller = m_router->getController(key);
    controller->action(key);
}