//
// Created by tsuhao on 2022/6/12.
//

#ifndef ENTITY_H
#define ENTITY_H


#include <string>
#include <utility>
#include <iostream>

class Entity {
    std::string name = "entity";
    mutable int getNameCnt = 0;
public:
    const std::string &getEName() const {
        ++getNameCnt;
        return name;
    }

    virtual std::string getName() const { return "entity"; }
    Entity() {std::cout << "Entity Constructor" << std::endl;};
    explicit Entity(std::string name):name(std::move(name)) {}
    ~Entity() {std::cout << "Entity Destroy" << std::endl;}
};


class Player : public Entity {
    std::string name;
public:
    explicit Player(std::string name) : name(std::move(name)) {}

    std::string getName() const override { return name; }
};


#endif //ENTITY_H
