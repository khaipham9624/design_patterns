#pragma once
#include <string>

using namespace std;
class TextBox
{
private:
public:
    virtual ~TextBox() {};
    virtual string align() = 0;
};
