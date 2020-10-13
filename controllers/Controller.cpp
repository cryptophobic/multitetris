//
// Created by dima on 14.10.20.
//

#include <iostream>
#include "Controller.h"

void Controller::action(int key) {
    std::cout << key << std::endl;
}

void Controller::action(unsigned char key) {
    std::cout << key << std::endl;
}
