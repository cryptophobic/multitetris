//
// Created by dima on 03.10.20.
//

#ifndef MULTITETRIS_CONTROLLER_H
#define MULTITETRIS_CONTROLLER_H


class Controller {

public:
    Controller();
    ~Controller();
    void control(int key, int x, int y);
    void control(unsigned char key, int x, int y);
};

#endif //MULTITETRIS_CONTROLLER_H
