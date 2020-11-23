#pragma once
#include "DairyProduct.h"
#include "ExpirationDate.h"

class Cheese: public DairyProduct{

public:
    friend void changeProductName(Cheese &milk, string newName);

    Cheese(int id, string name, float price, int day, int month, int year);

    ~Cheese();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
    virtual ExpirationDate *getExpirationDate() override;
};

