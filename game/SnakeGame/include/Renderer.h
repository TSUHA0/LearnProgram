//
// Created by tsuhao on 2022/6/24.
//

#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "Snake.h"


class Renderer {
public:
    Renderer(const std::size_t screen_width, const std::size_t screen_height,
             const std::size_t grid_width, const std::size_t grid_height);

    ~Renderer();

    void Render(const Snake snake, const SDL_Point &food);

    void UpdateWindowTitle(int score, int fps);

private:
    SDL_Window *sdl_window;
    SDL_Renderer *sdl_renderer;
    const std::size_t screen_width, screen_height, grid_width, grid_height;
};


#endif //RENDERER_H
