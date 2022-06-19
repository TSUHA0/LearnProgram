//
// Created by tsuhao on 2022/6/19.
//
#include <iostream>
#include "app.h"

int main(int argc, const char *argv[]) {
    std::cout << "2dShoot init" << std::endl;

    App app;
    app.init();
    while (true) {
        app.prepareScene();
        app.doInput();
        app.presentScene();
        SDL_Delay(16);
    }

    return 0;
}