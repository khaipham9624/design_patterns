#pragma once
#include "Chair.h"
#include "Sofa.h"
#include "Table.h"
class FurnitureFactory
{
private:
    /* data */
public:
    FurnitureFactory(/* args */) = default;
    ~FurnitureFactory() = default;
    virtual Chair* createChair() = 0;
    virtual Table* createTable() = 0;
    virtual Sofa* createSofa() = 0;
};
