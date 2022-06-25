//
// Created by tsuhao on 2022/6/24.
//

#ifndef GAME_H
#define GAME_H

#include "Renderer.h"
#include "Controller.h"
#include <random>

class Game {
public:
    Game(std::size_t grid_width, std::size_t grid_height);

    void Run(Controller &controller, Renderer &renderer, std::size_t target_frame_duration);


private:
    Snake snake;
    SDL_Point food;

    std::random_device dev;
    std::mt19937 engine;
    std::uniform_int_distribution<int> random_w;
    std::uniform_int_distribution<int> random_h;

    int score{0};

    void PlaceFood();

    void Update();
};


#endif //GAME_H
