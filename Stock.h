#pragma once
#include "Product.h"
#include <iostream>
#include "Milk.h"
#include "Cheese.h"
#include "EmptyProduct.h"
#include "Ham.h"

using namespace std;

template <unsigned int MaxNumberOfProducts>
class Stock {

    unsigned int productsCount=4;

    Product* products[MaxNumberOfProducts]={
        new Milk("Milk", 12.55, 1),
        new Cheese ("Cheese", 14.55, 2),
        new Ham ("Ham", 12.55, 3),
        new Milk ("Milk", 13.55, 4)
    };

public:
    Stock(){};

    Product* getProduct(unsigned int index){
        return this->products[index];
    }

    unsigned int getProductCount(){
        return this->productsCount;
    }

    void removeProduct(unsigned int index){
        this->products[index] = new EmptyProduct();
    }
    ~Stock(){};
};



