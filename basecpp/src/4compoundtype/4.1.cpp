//
// Created by tsuhao on 2022/5/24.
//
#include "zz.h"
#include <pthread.h>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
    string first_name, last_name;
    char grade;
    int age;

    cout << "What is your first name?";
    getline(cin, first_name);
    cout << "What is your last name?";
    getline(cin, last_name);
    cout << "What is your grade?";
    cin >> grade;
    cout << "What is your age?";
    cin >> age;

    cout << "Name:" << first_name + last_name << " grade:" << char(grade + 1) << " age:" << age << endl;
    return 0;
}
