#pragma once;
#include "Stock.h"
#include <iostream>

template <unsigned int MaxNumberOfProducts>
class UserInterface{

    Stock<MaxNumberOfProducts>* stock;
public:
    UserInterface(Stock<MaxNumberOfProducts>* stock){
        this->stock=stock;
    }

    void showAvailableProducts(){
        unsigned int productsCount = this->stock->getProductCount();
        for(int i=0;i<productsCount;i++) {
            Product *product = this->stock->getProduct(i);
            if (product->getName() == "empty name") {
                cout << "product not available" << endl;
            } else {
                cout << "product id " << product->getId() << " ";
                cout << "product name " << product->getName() << " ";
                cout << "product price " << product->getPrice() << endl;
            }
        }
    }
};