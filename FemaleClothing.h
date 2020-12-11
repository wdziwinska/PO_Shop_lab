#pragma once
#include "Clothes.h"
#include "ProductionDate.h"

class FemaleClothing: public Clothes{

protected:
    float price;
    string name;
    int id;
    ProductionDate *productionDate;
    string colour;
    string material;
    string size;
    string brand;
    string manufacturerName;
    long long barcode;
};