#pragma once
#include "iostream"

using namespace std;

class Product{

public:
    virtual ~Product(){}
    virtual float getPrice()=0;
    virtual string getName()=0;
    virtual unsigned int getId()=0;
    virtual long long getBarcode()=0;
    virtual string getManufacturerName()=0;
};