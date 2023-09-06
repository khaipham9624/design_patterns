#pragma once

#include "Strategy.h"

class Strategy1 : public Strategy {
    public:
        void doThis() override {
            std::cout << "Strategy1 do this" << std::endl;
        }
};
