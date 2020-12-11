#pragma once
#include "Meat.h"
#include "ExpirationDate.h"

class Ham: public Meat{

public:
    Ham(int id, string name, float price, int day, int month, int year, float weight, string ingredient, unsigned int calories);

    ~Ham();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
    virtual ExpirationDate *getExpirationDate() override;
    virtual float getWeight()  override;
    virtual string getIngredient()  override;
    virtual unsigned int getCalories()  override;
};
