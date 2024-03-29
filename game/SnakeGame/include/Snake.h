//
// Created by tsuhao on 2022/6/24.
//

#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "SDL2/SDL.h"

class Snake {
public:
    enum class Direction {
        kUp, kDown, kLeft, kRight
    };
    static constexpr float speed_hard_step = 0.02;

    Snake(int grid_width, int grid_height) :
            grid_width(grid_height),
            grid_height(grid_height),
            head_x(grid_width / 2),
            head_y(grid_height / 2) {};

    void Update();

    void GrowBody();

    bool SnakeCell(int x, int y);

    Direction direction = Direction::kUp;
    int size{1};
    bool alive{true};
    float speed{0.1f};
    float head_x, head_y;
    bool growing;
    std::vector<SDL_Point> body;

private:
    void UpdateHead();

    void UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell);

    int grid_width, grid_height;

};


#endif //SNAKE_H
