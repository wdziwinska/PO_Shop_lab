#pragma once;
#include "Stock.h"
#include <iostream>
#include "Basket.h"

template <unsigned int MaxNumberOfProducts>
class UserInterface{

    Stock<MaxNumberOfProducts>* stock;

    Basket<MaxNumberOfProducts>* basket;

public:
    UserInterface(Stock<MaxNumberOfProducts>* stock,Basket<MaxNumberOfProducts>* basket){
        this->stock=stock;
        this->basket=basket;
    }

    void showAvailableProducts(){
        unsigned int productsCount = this->stock->getProductsCount();
        for(int i=0;i<productsCount;i++) {
            Product *product = this->stock->getProduct(i);
            if (product->getName() == "empty name") {
                cout << "product not available" << endl;
            } else {
                cout << "product id: " << product->getId() << ", ";
                cout << "product name: " << product->getName() << ", ";
                cout << "product price: " << product->getPrice() << endl;
            }
        }
    }

    void showBasketContain(){
        unsigned int productsCount = this->basket->getProductsCount();
        cout << "Basket contains: "<< endl;
        for(int i=0;i<productsCount;i++) {
            Product *product = this->basket->getProduct(i);
            cout << "product id: " << product->getId() << ", ";
            cout << "product name: " << product->getName() << ", ";
            cout << "product price: " << product->getPrice() << endl;
        }
    }

    void showTotalPrice(){
        cout<<"Total price: "<<this->basket->calculatePrice()<<endl;
    }
};