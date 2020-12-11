#pragma once
#include "Product.h"
#include "ProductionDate.h"

class Clothes: public Product {

public:
    virtual ProductionDate *getProductionDate() = 0;
    virtual string getColour()=0;
    virtual string getMaterial()=0;
    virtual string getSize()=0;
    virtual string getBrand()=0;
};
