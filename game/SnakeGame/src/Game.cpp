//
// Created by tsuhao on 2022/6/24.
//

#include "Game.h"

Game::Game(std::size_t grid_width, std::size_t grid_height) :
        snake(grid_width, grid_height), engine(dev()),
        random_w(0, static_cast<int>(grid_width - 1)),
        random_h(0, static_cast<int>(grid_height - 1)) {
    PlaceFood();
}

void Game::Run(Controller &controller, Renderer &renderer, std::size_t target_frame_duration) {
    uint32_t title_timestamp = SDL_GetTicks();
    uint32_t frame_start, frame_end, frame_duration;
    int frame_count = 0;
    bool running = true;

    while (running) {
        frame_start = SDL_GetTicks();
        controller.HandleInput(running, snake);

        Update();
        renderer.Render(snake, food);

        frame_end = SDL_GetTicks();

        frame_count++;
        frame_duration = frame_end - frame_start;
        if (frame_end - title_timestamp >= 1000) {
            renderer.UpdateWindowTitle(score, frame_count);
            frame_count = 0;
            title_timestamp = frame_end;
        }

        if (frame_duration < target_frame_duration) {
            SDL_Delay(target_frame_duration - frame_duration);
        }
    }
}

void Game::PlaceFood() {
    int x, y;
    while (true) {
        x = random_w(engine);
        y = random_h(engine);
        if (!snake.SnakeCell(x, y)) {
            food.x = x;
            food.y = y;
            return;
        }
    }
}

void Game::Update() {
    if (!snake.alive) return;
    snake.Update();

    if (food.x == static_cast<int>(snake.head_x) &&
        food.y == static_cast<int>(snake.head_y)) {
        score++;
        snake.GrowBody();
        PlaceFood();
        snake.speed += Snake::speed_hard_step;
    }
}

int Game::GetSize() const {
    return snake.size;
}

int Game::GetScore() const {
    return score;
}
