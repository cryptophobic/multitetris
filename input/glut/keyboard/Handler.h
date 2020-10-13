//
// Created by dima on 03.10.20.
//

#ifndef MULTITETRIS_HANDLER_H
#define MULTITETRIS_HANDLER_H

#include "../../../routes/Router.h"

class Handler {

public:
    Handler(Router *route);
    ~Handler();
    void control(int key, int x, int y);
    void control(unsigned char key, int x, int y);

private:
    Router *m_router;
};

#endif //MULTITETRIS_HANDLER_H
