//
// Created by tsuhao on 2022/6/12.
//

#ifndef ENTITY_H
#define ENTITY_H


#include <string>
#include <utility>

class Entity {
    std::string name = "entity";
    mutable int getNameCnt = 0;
public:
    const std::string &getEName() const {
        ++getNameCnt;
        return name;
    }
    virtual std::string getName() {return "entity";}
};


class Player: public Entity {
    std::string name;
public:
    explicit Player(std::string name):name(std::move(name)){}
    std::string getName() override {return name;}
};


#endif //ENTITY_H
