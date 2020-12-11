#pragma once
#include "GroceryProduct.h"
#include "ExpirationDate.h"

class Meat: public GroceryProduct{

protected:
    float price;
    string name;
    int id;
    ExpirationDate *expirationDate;
    float weight;
    string ingredient;
    unsigned int calories;
    string packetMaterial;
    string manufacturerName;
    long long barcode;
};