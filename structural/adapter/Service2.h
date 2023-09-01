#pragma once 
#include <iostream>
using namespace std;
class Service2
{
private:
    /* data */
public:
    Service2(/* args */);
    ~Service2();
    void serviceMethod(int specialData){
        cout << "Special data " << specialData << endl;
    }
};

Service2::Service2(/* args */)
{
}

Service2::~Service2()
{
}
