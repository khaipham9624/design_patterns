#pragma once
#include "ClientInterface.h"
#include "Service2.h"

class Service2Adapter1 : public ClientInterface
{
private:
    /* data */
    Service2 *service;
public:
    Service2Adapter1(/* args */);
    ~Service2Adapter1();
    void method(string data) override {
        cout << "Service2Adapter1" << endl;
        // convert data to special data
        int specialData = data.length();
        service->serviceMethod(specialData);
    }
};

Service2Adapter1::Service2Adapter1(/* args */)
{
    service = new Service2();
}

Service2Adapter1::~Service2Adapter1()
{
}
