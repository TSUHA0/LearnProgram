//
// Created by tsuhao on 2022/6/16.
//

#include <memory>
#include "entity.h"

int main(int argc, const char *argv[]) {
//    std::unique_ptr<Entity> e0 = std::make_unique<Entity>();
//    std::unique_ptr<Entity> e1 = e0;  // Error usage
    std::cout << "Share Ptr test:" << std::endl;
    {
        std::cout << "first {} begin" << std::endl;
        std::shared_ptr<Entity> sharedPtr;
        {
            std::cout << "second {} begin" << std::endl;
            std::shared_ptr<Entity> sharedPtr1 = std::make_shared<Entity>();
            sharedPtr = sharedPtr1;
            std::cout << "second {} end" << std::endl;
        }
        std::cout << "first {} end" << std::endl;
    }

    std::cout << "Weak Ptr test:" << std::endl;
    // weak_prt doesn't add pointer ref count
    {
        std::cout << "first {} begin" << std::endl;
        std::weak_ptr<Entity> weakPtr;
        {
            std::cout << "second {} begin" << std::endl;
            std::shared_ptr<Entity> weakPtr1 = std::make_shared<Entity>();
            weakPtr = weakPtr1;
            std::cout << "second {} end" << std::endl;
        }
        std::cout << "first {} end" << std::endl;
    }

    return 0;
}