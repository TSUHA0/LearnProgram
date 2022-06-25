//
// Created by tsuhao on 2022/6/19.
//
#include "Game.h"

int main(int argc, char *argv[]) {
    const std::size_t screen_width = 400;
    const std::size_t screen_height = 500;
    const std::size_t grid_width = 20;
    const std::size_t grid_height = 20;
    const std::size_t target_fps = 60;
    const std::size_t kmsPerFrame = 1000 / target_fps;

    Renderer renderer(screen_width, screen_height, grid_width, grid_height);
    Controller controller;
    Game game(400, 500);
    game.Run(controller, renderer, kmsPerFrame);

    return 0;
}

