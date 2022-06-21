//
// Created by tsuhao on 2022/6/19.
//
#include "PlaneGame.h"
#include<SDL2/SDL.h>
#include <SDL_image.h>

int main(int argc, char *argv[]) {
    PlaneGame game;
    game.init();
    game.mainLoop();

    return 0;
}

