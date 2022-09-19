//
// Created by tsuhao on 2022/6/25.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Snake.h"

class Controller {
public:
    void ChangeDirection(Snake &snake, Snake::Direction input, Snake::Direction opposite) const;

    void HandleInput(bool &running, Snake &snake) const;

};


#endif //CONTROLLER_H
