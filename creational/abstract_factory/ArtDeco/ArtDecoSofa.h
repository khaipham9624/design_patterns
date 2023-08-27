#pragma once
#include "Sofa.h"

class ArtDecoSofa : public Sofa
{
private:
    /* data */
public:
    ArtDecoSofa(/* args */) = default;
    ~ArtDecoSofa() = default;

    void layOn() override {
        cout << "ArtDecoSofa layOn" << endl;
    }
};
