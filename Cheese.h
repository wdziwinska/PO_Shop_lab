#pragma once
#include "Product.h"

class Cheese: public Product{

    float price = 10;
    string name = "mleko";
    int id = 1;

public:
    Cheese(string name, float price, int id);

    ~Cheese();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
};

