#pragma once
#include "Builder.h"
#include "Product1.h"

class ConcreteBuilder1 : public Builder {
    private:
        Product1 *product;
    public:
        void buildStepA() override { std::cout << "ConcreteBuilder1 buildStepA" << std::endl;}
        void buildStepB() override { std::cout << "ConcreteBuilder1 buildStepB" << std::endl;}
        void buildStepC() override { std::cout << "ConcreteBuilder1 buildStepC" << std::endl;}
        void reset(){ this->product = new Product1();}
        Product1* getProduct(){ return product;}
};