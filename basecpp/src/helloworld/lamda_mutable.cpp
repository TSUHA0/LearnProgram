//
// Created by tsuhao on 2022/6/13.
//


#include <iostream>

int main(int argc, const char *argv[]) {
    int x = 1;
    auto f = [=]() mutable {
        ++x;
        std::cout << x << std::endl;
    };
    f();
    std::cout << x << std::endl;
    return 0;
}