//
// Created by tsuhao on 2022/6/17.
//

#include <iostream>
#include <cstring>

template<class T>
T max5(T arr[5]) {
    T max = arr[0];
    for (int i = 0; i < 5; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

template<class T>
T maxn(T arr[], int n) {
    T max = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

template<>
char *maxn(char *arr[], int n) {
    char *p = nullptr;
    size_t max = 0;
    for (int i = 0; i < n; ++i) {
        size_t len = strlen(arr[i]);
        if (len > max) {
            max = len;
            p = arr[i];
        }
    }
    return p;
}

int main(int argc, const char *argv[]) {
    int a[5] = {1, 2, 3, 4, 5};
    double b[6] = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1};
    std::cout << max5(a) << std::endl;
    std::cout << maxn(b, 6) << std::endl;

    char p1[] = "1";
    char p2[] = "12";
    char p3[] = "123";
    char *p[3] = {p1, p2, p3};
    std::cout << maxn(p, 3) << std::endl;

    return 0;
}