#pragma once
#include "Chair.h"
class ArtDecoChair : public Chair
{
private:
    /* data */
public:
    ArtDecoChair() = default;
    ~ArtDecoChair() = default;

    void sitOn() override {
        cout << "ArtDecoChair sitOn" << endl;
    }
    
};
