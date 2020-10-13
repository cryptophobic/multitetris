//
// Created by dima on 11.10.20.
//

#ifndef MULTITETRIS_ROUTER_H
#define MULTITETRIS_ROUTER_H


#include "../controllers/Controller.h"

class Router {
public:
    Router();
    Controller* getController(int key);
    Controller* getController(unsigned char key);

protected:
    Controller* controllers[10];
};


#endif //MULTITETRIS_ROUTER_H
