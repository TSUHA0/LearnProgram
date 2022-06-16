//
// Created by tsuhao on 2022/6/12.
//

#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include "entity.h"

void printName(const Entity &e) {
    std::cout << e.getName() << std::endl;
}

int main(int argc, const char *argv[]) {
    const char *test = R"(1
2
3)";
//    std::cout << test << std::endl;
    std::priority_queue<int, std::vector<int>, std::less<>> que;
    que.push(1);
    que.push(2);
    std::cout << que.top() << std::endl;

    Entity entity("entity");
    Player tsuhao("tsuhao");
//    printName(entity);
//    printName(tsuhao);

//    printName(std::string("str_init"));


    return 0;
}