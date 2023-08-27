#pragma once
#include "Chair.h"
class ModernChair : public Chair
{
private:
    /* data */
public:
    ModernChair() = default;

    void sitOn() override {
        cout << "ModernChair sitOn" << endl;
    }

    ~ModernChair() = default;
};
