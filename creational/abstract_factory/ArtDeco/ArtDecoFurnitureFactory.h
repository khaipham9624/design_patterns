#pragma once
#include "ArtDecoChair.h"
#include "ArtDecoCoffeeTable.h"
#include "ArtDecoSofa.h"
#include "FurnitureFactory.h"

class ArtDecoFurnitureFactory : public FurnitureFactory
{
private:
    /* data */
public:
    ArtDecoFurnitureFactory(/* args */) = default;
    ~ArtDecoFurnitureFactory() = default;
    Chair* createChair() override {
        return new ArtDecoChair();
    }
    Table* createTable() override {
        return new ArtDecoCoffeeTable();
    }
    Sofa* createSofa() override {
        return new ArtDecoSofa();
    }
};
