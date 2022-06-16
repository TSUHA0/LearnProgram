//
// Created by tsuhao on 2022/6/16.
//

#include <iostream>

void func(const int& clv) {
    std::cout << "func2 const int&" << std::endl;
}

void func(int& lv) {
    std::cout << "func1 int&" << std::endl;
}

void func(int && rv){
    std::cout << "func3 int&&" << std::endl;
}


int main(int argc, const char *argv[]) {
    int a = 1;
    const int b = 2;
    func(a);
    func(b);
    func(3);
    return 0;
}
