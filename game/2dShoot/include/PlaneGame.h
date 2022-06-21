//
// Created by tsuhao on 2022/6/22.
//

#ifndef PLANEGAME_H
#define PLANEGAME_H

#include<SDL2/SDL.h>

class PlaneGame {
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    FILE *m_log;
public:
    PlaneGame();

    virtual ~PlaneGame();

    void init();

    void mainLoop();

    void render();
};


#endif //PLANEGAME_H
