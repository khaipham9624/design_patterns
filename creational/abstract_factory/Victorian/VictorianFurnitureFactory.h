#pragma once
#include "VictorianChair.h"
#include "VictorianCoffeeTable.h"
#include "VictorianSofa.h"
#include "FurnitureFactory.h"

class VictorianFurnitureFactory : public FurnitureFactory
{
private:
    /* data */
public:
    VictorianFurnitureFactory(/* args */) = default;
    ~VictorianFurnitureFactory() = default;
    Chair* createChair() override{
        return new VictorianChair();
    }
    Table* createTable() override{
        return new VictorianCoffeeTable();
    }
    Sofa* createSofa() override{
        return new VictorianSofa();
    }
};
