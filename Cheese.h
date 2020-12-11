#pragma once
#include "DairyProduct.h"
#include "ExpirationDate.h"

class Cheese: public DairyProduct{

public:
    friend void changeProductName(Cheese &milk, string newName);

    Cheese(int id, string name, float price, int day, int month, int year, float weight,
           string ingredient, unsigned int calories, string packetMaterial);

    ~Cheese();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
    virtual ExpirationDate *getExpirationDate() override;
    virtual float getWeight()  override;
    virtual string getIngredient()  override;
    virtual unsigned int getCalories()  override;
    virtual string getPacketMaterial() override;
};

