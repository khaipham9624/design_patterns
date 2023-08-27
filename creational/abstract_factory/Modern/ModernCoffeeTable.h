#pragma once
#include "Table.h"

class ModernCoffeeTable : public Table
{
private:
    /* data */
public:
    ModernCoffeeTable(/* args */) = default;
    ~ModernCoffeeTable() = default;

    void putOn() override {
        cout << "ModernCoffeeTable putOn" << endl;
    }
};
