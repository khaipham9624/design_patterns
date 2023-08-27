#pragma once
#include "ModernChair.h"
#include "ModernCoffeeTable.h"
#include "ModernSofa.h"
#include "FurnitureFactory.h"

class ModernFurnitureFactory : public FurnitureFactory
{
private:
    /* data */
public:
    ModernFurnitureFactory(/* args */) = default;
    ~ModernFurnitureFactory() = default;
    Chair* createChair() override{
        return new ModernChair();
    }
    Table* createTable() override{
        return new ModernCoffeeTable();
    }
    Sofa* createSofa() override{
        return new ModernSofa();
    }
};
