//
// Created by tsuhao on 2022/6/22.
//

#include <iostream>
#include "PlaneGame.h"

PlaneGame::PlaneGame() :
        m_window(nullptr), m_renderer(nullptr) {
    m_log = fopen("PlaneGame.log", "w");
    if (nullptr == m_log) {
        exit(-1);
    }
}

PlaneGame::~PlaneGame() {
    if (nullptr != m_window)
        SDL_DestroyWindow(m_window);
    if (nullptr != m_window)
        SDL_DestroyRenderer(m_renderer);
}

void PlaneGame::init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(m_log, "Failed to init SDL2!\n");
        exit(-1);
    }

    m_window = SDL_CreateWindow("2dShoot",
                                SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED,
                                400, 300,
                                SDL_WINDOW_SHOWN
    );
    if (nullptr == m_window) {
        fprintf(m_log, "Cannot create window! Error: %s\n", SDL_GetError());
    }

    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
    if (nullptr == m_renderer) {
        fprintf(m_log, "Cannot create renderer! Error: %s\n", SDL_GetError());
    }
}

void PlaneGame::mainLoop() {
    SDL_Event event;
    while (true) {
        render();
        if (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                break;
            }
        }
    }

}

void PlaneGame::render() {
    SDL_SetRenderDrawColor(m_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(m_renderer);

    SDL_RenderPresent(m_renderer);
}


