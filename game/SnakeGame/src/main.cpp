//
// Created by tsuhao on 2022/6/19.
//
#include <iostream>
#include "Game.h"

int main(int argc, char *argv[]) {
    const std::size_t screen_width = 640;
    const std::size_t screen_height = 640;
    const std::size_t grid_width = 32;
    const std::size_t grid_height = 32;
    const std::size_t target_fps = 60;
    const std::size_t kmsPerFrame = 1000 / target_fps;

    Renderer renderer(screen_width, screen_height, grid_width, grid_height);
    Controller controller;
    Game game(grid_width, grid_height);
    game.Run(controller, renderer, kmsPerFrame);
    std::cout << "Game has terminated successfully!\n";
    std::cout << "Score: " << game.GetScore() << "\n";
    std::cout << "Size: " << game.GetSize() << "\n";
    return 0;
}

