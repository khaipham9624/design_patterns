#include "User.h"
User::~User()=default;

User::User(/* args */) : impl(make_unique<UserImpl>())
{
}

class  User::UserImpl {
    public:
    int age;
    // int getAge(){
    //     return age;
    // }

    // void setAge(int age){
    //     this->age = age;
    // }
};

// int User::getAge(){
//     return impl->getAge();
// }

// void User::setAge(int age){
//     return impl->setAge(age);
// }
