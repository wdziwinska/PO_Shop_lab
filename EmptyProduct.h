#pragma once
#include "Product.h"

class EmptyProduct: public Product {

    float price=0;
    string name="no product";
    int id=0;
    string manufacturerName="no name";
    long long barcode= 00000;

public:
    friend void changePrice(EmptyProduct &emptyProduct, float newPrice);

    EmptyProduct();

    ~EmptyProduct();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
    virtual string getManufacturerName() override;
    virtual long long getBarcode() override;
};
