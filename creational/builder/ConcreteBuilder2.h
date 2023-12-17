#pragma once
#include "Builder.h"
#include "Product2.h"

class ConcreteBuilder2 : public Builder {
    private:
        Product2 *product;
    public:
        void buildStepA() override { std::cout << "ConcreteBuilder2 buildStepA" << std::endl;}
        void buildStepB() override { std::cout << "ConcreteBuilder2 buildStepB" << std::endl;}
        void buildStepC() override { std::cout << "ConcreteBuilder2 buildStepC" << std::endl;}
        void reset(){ this->product = new Product2();}
        Product2* getProduct(){ return product;}
};