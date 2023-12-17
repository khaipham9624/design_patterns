#pragma once
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"

class Director
{
private:
    /* data */
    Builder *builder;
public:
    Director(Builder *builder);
    ~Director();
    void changeBuilder(Builder *builder){
        this->builder = builder;
    }
    void make(){
        builder->buildStepA();
        builder->buildStepB();
        builder->buildStepC();
    }
};

Director::Director(Builder *builder)
{
    this->builder = builder;
}

Director::~Director()
{
}
