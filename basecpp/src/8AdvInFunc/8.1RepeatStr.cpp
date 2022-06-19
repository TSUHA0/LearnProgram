//
// Created by tsuhao on 2022/6/17.
//

#include <iostream>

void Print(const std::string& s, int times = 0) {
    int t = 1;
    if (times > 0) t = times;
    while (t--)
        std::cout << s << std::endl;
}

int main(int argc, const char *argv[]) {
    std::string s;
    int t;
    std::cout << "Input:" << std::endl;
    std::cin >> s;
    std::cout << "Maybe input repeat times or input 0 to only output one time" << std::endl;
    std::cin >> t;
    Print(s, t);
    return 0;
}