#pragma once
#include "GroceryProduct.h"
#include "ExpirationDate.h"

class DairyProduct: public GroceryProduct{

protected:
    float price;
    string name;
    int id;
    ExpirationDate *expirationDate;
};
