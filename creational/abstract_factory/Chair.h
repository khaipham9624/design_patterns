#pragma once
#include <iostream>
using namespace std;

class Chair {
private:
public:
    virtual void sitOn() = 0;
    virtual ~Chair() = default;
};