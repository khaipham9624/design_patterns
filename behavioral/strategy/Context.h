#pragma once
#include "Strategy1.h"
#include "Strategy2.h"
class Context{
    private:
        Strategy* strategy;
    public:
        void setStrategy(Strategy *strategy){
            this->strategy = strategy;
        }

        void doSomething(){
            strategy->doThis();
        }
};