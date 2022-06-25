//
// Created by tsuhao on 2022/6/24.
//

#include <iostream>
#include "Renderer.h"

Renderer::Renderer(const std::size_t screen_width, const std::size_t screen_height, const std::size_t grid_width,
                   const std::size_t grid_height) :
        screen_width(screen_width), screen_height(screen_height), grid_height(grid_height), grid_width(grid_width) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize." << std::endl;
        std::cerr << "SDL_Error: " << SDL_GetError() << std::endl;
    }

    sdl_window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                  screen_width, screen_height, SDL_WINDOW_SHOWN);
    if (nullptr == sdl_window) {
        std::cerr << "Window could not be created." << std::endl;
        std::cerr << "SDL_Error: " << SDL_GetError() << std::endl;
    }

    sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
    if (nullptr == sdl_renderer) {
        std::cerr << "Renderer could not be created." << std::endl;
        std::cerr << "SDL_Error: " << SDL_GetError() << std::endl;
    }

}

Renderer::~Renderer() {
    SDL_DestroyWindow(sdl_window);
    SDL_Quit();
}

void Renderer::Render(const Snake snake, const SDL_Point &food) {
    SDL_Rect block;
    block.w = screen_width / grid_width;
    block.h = screen_height / grid_height;

    SDL_SetRenderDrawColor(sdl_renderer, 0x1F, 0x1F, 0x1E, 0XFF);
    SDL_RenderClear(sdl_renderer);

    SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xCC, 0x00, 0XFF);
    block.x = food.x * block.w;
    block.y = food.y * block.h;
    SDL_RenderFillRect(sdl_renderer, &block);

    SDL_RenderPresent(sdl_renderer);
}

void Renderer::UpdateWindowTitle(int score, int fps) {
    std::string title{"Snake Score: " + std::to_string(score) + " FPS: " + std::to_string(fps)};
    SDL_SetWindowTitle(sdl_window, title.c_str());
}
