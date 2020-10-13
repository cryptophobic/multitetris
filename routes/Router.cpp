//
// Created by dima on 11.10.20.
//

#include "Router.h"

Router::Router()
{
    controllers[0] = new Controller();
}

Controller * Router::getController(int key) {
    return key > 0 ? controllers[0] : nullptr;
}

Controller * Router::getController(unsigned char key) {
    return controllers[0];
}