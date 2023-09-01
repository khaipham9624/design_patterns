#pragma once
#include <iostream>
using namespace std;
class ClientInterface
{
private:
    /* data */
public:
    virtual void method(string data) = 0;
};
