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
}

void Snake::GrowBody() {

}

bool Snake::SnakeCell(int x, int y) {
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
    // todo
}

void Snake::UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell) {

}
