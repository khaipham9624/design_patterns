#pragma once
#include <iostream>

class Handler {
    protected:
        Handler* next;
    public:
        virtual bool handle() = 0;
        void setNextHandler(Handler *handler){
            next = handler;
        }
};
