#pragma once
#include "ClientInterface.h"
#include "Service2.h"

class Service2Adapter2 : public ClientInterface, public Service2
{
private:
    /* data */
public:
    Service2Adapter2(/* args */);
    ~Service2Adapter2();
    void method(string data) override {
        cout << "Service2Adapter2" << endl;
        // convert data to special data
        int specialData = data.length();
        serviceMethod(specialData);
    }
};

Service2Adapter2::Service2Adapter2(/* args */)
{
}

Service2Adapter2::~Service2Adapter2()
{
}
