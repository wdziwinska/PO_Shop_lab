#pragma once
#include "Product.h"

class Milk: public Product{

    float price=10;
    string name="mleko";
    int id=1;

public:
    Milk(string name,float price, int id);

    ~Milk();

    virtual float getPrice() override;
    virtual string getName()override;
    virtual unsigned int getId()override;
};

