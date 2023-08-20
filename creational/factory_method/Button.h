#pragma once
#include <string>

using namespace std;
class Button
{
private:
public:
    virtual ~Button() {};
    virtual string onClick() = 0;
};
