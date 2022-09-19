//
// Created by tsuhao on 2022/6/24.
//

#include "Snake.h"

void Snake::Update() {
    SDL_Point prev_cell{
            static_cast<int>(head_x),
            static_cast<int>(head_y),
    };
    UpdateHead();
    SDL_Point curr_cell{
            static_cast<int>(head_x),
            static_cast<int>(head_y),
    };
    if (prev_cell.x != curr_cell.x || prev_cell.y != curr_cell.y) {
        UpdateBody(curr_cell, prev_cell);
    }
}

void Snake::GrowBody() {
    growing = true;
}

bool Snake::SnakeCell(int x, int y) {
    if (x == static_cast<int>(head_x) && y == static_cast<int>(head_y)) return true;
    for (const auto p: body) {
        if (x == p.x && y == p.y)
            return true;
    }
    return false;
}

void Snake::UpdateHead() {
    switch (direction) {
        case Direction::kUp:
            head_y -= speed;
            break;
        case Direction::kDown:
            head_y += speed;
            break;
        case Direction::kLeft:
            head_x -= speed;
            break;
        case Direction::kRight:
            head_x += speed;
            break;
    }
    head_x = fmod(head_x + grid_width, grid_width);
    head_y = fmod(head_y + grid_height, grid_height);
}

void Snake::UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell) {

}
