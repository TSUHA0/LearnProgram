#include <iostream>
#include <zconf.h>

//
// Created by tsuhao on 2022/6/16.
//
struct job {
    char name[40];
    double salary;
    int floor;
};

template<typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<>
void Swap<job>(job &a, job &b) {
    job temp = a;

    a.floor = b.floor;
    b.salary = temp.salary;
    b.floor = temp.floor;
}

void Show(job &j){
    std::cout << j.name << ": $" << j.salary << " on floor:" << j.floor << std::endl;
}


int main(int argc, const char *argv[]) {
    job Tom = { "Tom", 3000, 2 };
    job Jerry = { "Jerry", 6000, 11 };

    Show(Tom);
    Show(Jerry);
    Swap(Tom, Jerry);
    Show(Tom);
    Show(Jerry);

    return 0;
}