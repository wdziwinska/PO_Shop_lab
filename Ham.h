#pragma once
#include "Product.h"

class Ham: public Product{

    float price=10;
    string name="mleko";
    int id=1;

//    friend void changeProductName(Ham &ham, string newName);

public:
    Ham(string name, float price, int id);

    ~Ham();

    virtual float getPrice() override;
    virtual string getName()override;
    virtual unsigned int getId()override;
};
//
//void changeProductName(Ham &ham, string newName){
//    ham.name=newName;
//}