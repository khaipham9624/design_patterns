#pragma once
#include <memory>
using namespace std;

class User
{

public:
    User(/* args */);
    ~User();
    // void setAge(int age);
    // int getAge();
    private:
    /* data */
    class  UserImpl;
    unique_ptr<UserImpl> impl;
};
