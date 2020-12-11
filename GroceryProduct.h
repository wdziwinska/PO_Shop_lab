#pragma once
#include "Product.h"
#include "ExpirationDate.h"

class GroceryProduct: public Product {

public:
    virtual ExpirationDate *getExpirationDate() = 0;
    virtual float getWeight() = 0;
    virtual string getIngredient() = 0;
    virtual unsigned int getCalories() = 0;
};
