#pragma once
#include <iostream>

class Builder{
    public:
        virtual void buildStepA() = 0;
        virtual void buildStepB() = 0;
        virtual void buildStepC() = 0;
};