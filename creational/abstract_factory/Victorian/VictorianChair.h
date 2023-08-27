#pragma once
#include "Chair.h"
class VictorianChair : public Chair
{
private:
    /* data */
public:
    VictorianChair() = default;

    void sitOn() override {
        cout << "VictorianChair sitOn" << endl;
    }

    ~VictorianChair() = default;
};
