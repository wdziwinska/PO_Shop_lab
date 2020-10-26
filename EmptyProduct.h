#pragma once
#include "Product.h"

class EmptyProduct: public Product {

    float price=0;
    string name="no product";
    int id=0;

public:
    EmptyProduct();

    ~EmptyProduct();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
};
