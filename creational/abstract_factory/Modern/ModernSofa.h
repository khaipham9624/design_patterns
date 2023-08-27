#pragma once
#include "Sofa.h"

class ModernSofa : public Sofa
{
private:
    /* data */
public:
    ModernSofa(/* args */) = default;
    ~ModernSofa() = default;

    void layOn() override {
        cout << "ModernSofa layOn" << endl;
    }
};
