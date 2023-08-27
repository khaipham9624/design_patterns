#pragma once
#include "Sofa.h"

class VictorianSofa : public Sofa
{
private:
    /* data */
public:
    VictorianSofa(/* args */) = default;
    ~VictorianSofa() = default;

    void layOn() override {
        cout << "VictorianSofa layOn" << endl;
    }
};
