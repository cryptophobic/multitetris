//
// Created by dima on 03.10.20.
//

#ifndef MULTITETRIS_GLUT_INIT_H
#define MULTITETRIS_GLUT_INIT_H

class Init {
    static void initializeGlutCallbacks();
    static void renderSceneCB();

public:
    static void start(int argc, char* argv[]);
};


#endif //MULTITETRIS_GLUT_INIT_H
