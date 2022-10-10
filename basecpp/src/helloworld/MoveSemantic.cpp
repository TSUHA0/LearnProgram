#include <cstring>
#include <iostream>

class String {
public:
    char *_data;
    int _len;

    String() {
        _data = nullptr;
        _len = 0;
    }

    ~String() {
        std::cout << "Destroyed!";
        if (_data == nullptr) std::cout << "  _data is NULL.";
        else std::cout << "  _data is NOT NULL.";
        std::cout << std::endl;
        delete _data;
    }

    String(const char *str) {
        std::cout << "Created!" << std::endl;
        _len = strlen(str);
        _data = new char[_len];
        memcpy(_data, str, _len);
    }

    String(const String &other) {
        std::cout << "Copied!" << std::endl;
        _len = other._len;
        _data = new char[_len];
        memcpy(_data, other._data, _len);
    }

    String(String &&other) {
        std::cout << "Moved!" << std::endl;
        _len = other._len;
        _data = other._data;
        other._data = nullptr;
        other._len = 0;
    }

    // String &operator=(String &&other) {
        // std::cout << "Moved!" << std::endl;
        // if (this == &other) return *this;
        // _len = other._len;
        // _data = other._data;
        // other._data = nullptr;
        // other._len = 0;
        // return *this;
    // }

    void Print() {
        for (int i = 0; i < _len; ++i) std::cout << _data[i];
        std::cout << std::endl;
    }
};

class Name {
public:
    String _name;
    Name(const String &name) : _name(name) {}
    Name(String &&name) : _name(std::move(name)) {}
    void Print() {_name.Print();}
};


int main() {
    // Name name{"Tsuhao"};
    // name.Print();
    String str{"Test,String"};
    String && other_str = std::move(str);

    return 0;
}
