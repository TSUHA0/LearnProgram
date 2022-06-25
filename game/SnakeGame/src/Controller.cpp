//
// Created by tsuhao on 2022/6/25.
//

#include "Controller.h"

void Controller::ChangeDirection(Snake snake, Snake::Direction input, Snake::Direction opposite) const {
    if (snake.direction != opposite || snake.size == 1)
        snake.direction = input;
}

void Controller::HandleInput(bool &running, Snake &snake) const {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            running = false;
        }
    }
}
