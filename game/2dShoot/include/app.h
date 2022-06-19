//
// Created by tsuhao on 2022/6/19.
//

#ifndef APP_H
#define APP_H

#include <SDL2/SDL.h>

#define SCREEN_WIDTH   1280
#define SCREEN_HEIGHT  720

class App {
    SDL_Renderer *renderer;
    SDL_Window *window;
public:
    void init();

    void prepareScene();

    void presentScene();

    void doInput();

};


#endif //APP_H
