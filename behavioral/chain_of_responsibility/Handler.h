#pragma once
#include <iostream>

using request = std::string;

class Handler {
    protected:
        Handler* next;
    public:
        virtual bool handle(request r) = 0;
        void setNextHandler(Handler *handler){
            next = handler;
        }
};
