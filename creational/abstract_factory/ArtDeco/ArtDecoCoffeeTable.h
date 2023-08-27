#pragma once
#include "Table.h"

class ArtDecoCoffeeTable : public Table
{
private:
    /* data */
public:
    ArtDecoCoffeeTable(/* args */) = default;
    ~ArtDecoCoffeeTable() = default;

    void putOn() override {
        cout << "ArtDecoCoffeeTable putOn" << endl;
    }
};
