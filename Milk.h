#pragma once
#include "DairyProduct.h"
#include "ExpirationDate.h"

class Milk: public DairyProduct{

public:
    friend void changeProductName(Milk &milk, string newName);

    Milk(int id, string name, float price, int day, int month, int year, float weight, string ingredient, unsigned int calories);

    ~Milk();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
    virtual ExpirationDate *getExpirationDate() override;
    virtual float getWeight()  override;
    virtual string getIngredient()  override;
    virtual unsigned int getCalories()  override;
};

