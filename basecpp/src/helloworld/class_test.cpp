//
// Created by tsuhao on 2022/9/26.
//
#include <iostream>

using namespace std;

class animal {
    enum testEnum {
        red = 3, green
    };
    static const int a = 1;
public:
    virtual void say() { cout << "Animal." << green << endl; }
};

class bird : public animal {
public:
    virtual void say() { cout << "Bird." << endl; }
};

class Time {
    int hour;
    int minute;
public:
    Time(int hour, int minute) : hour(hour), minute(minute) {}

    Time operator+(const Time &time) const;

    friend ostream &operator<<(ostream &os, const Time &time);
};

ostream &operator<<(ostream &os, const Time &time) {
    os << time.hour << ":" << time.minute;
    return os;
}

Time Time::operator+(const Time &time) const {
    Time ret{0, 0};
    ret.minute = (this->minute + time.minute) % 60;
    ret.hour = this->hour + time.hour + (this->minute + time.minute) / 60;
    return ret;
}

int main() {
    Time t_a{2, 35};
    Time t_b{2, 30};
    cout << "Time a + b = " << (t_a + t_b) << endl;

    return 0;
}