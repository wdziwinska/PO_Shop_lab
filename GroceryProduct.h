#pragma once
#include "Product.h"
#include "ExpirationDate.h"

class GroceryProduct: public Product {

public:
    virtual ExpirationDate *getExpirationDate() = 0;
};
