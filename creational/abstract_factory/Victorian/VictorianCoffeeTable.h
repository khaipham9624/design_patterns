#pragma once
#include "Table.h"

class VictorianCoffeeTable : public Table
{
private:
    /* data */
public:
    VictorianCoffeeTable(/* args */) = default;
    ~VictorianCoffeeTable() = default;

    void putOn() override {
        cout << "VictorianCoffeeTable putOn" << endl;
    }
};
