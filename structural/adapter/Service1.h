#pragma once
#include "ClientInterface.h"

class Service1 : public ClientInterface
{
private:
    /* data */
public:
    Service1(/* args */) = default;
    ~Service1() = default;
    void method(string data) override {
        cout << "Service1 data " << data << endl;
    }
};
