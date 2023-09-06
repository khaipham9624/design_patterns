#pragma once

#include "Strategy.h"

class Strategy2 : public Strategy {
    public:
        void doThis() override {
            std::cout << "Strategy2 do this" << std::endl;
        }
};
