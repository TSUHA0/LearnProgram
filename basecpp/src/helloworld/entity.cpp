//
// Created by tsuhao on 2022/6/12.
//

#include <iostream>
#include "entity.h"

void printName(Entity &e) {
    std::cout << e.getName() << std::endl;
}

int main(int argc, const char *argv[]) {
    const char *test = R"(1
2
3)";
    std::cout << test << std::endl;

    Entity entity;
    Player tsuhao("tsuhao");
    printName(entity);
    printName(tsuhao);

    return 0;
}