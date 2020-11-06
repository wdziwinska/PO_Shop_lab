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
        new Milk("Milk", 12.55,1),
        new Cheese ("Cheese", 14.55, 2),
        new Ham ("Ham", 12.55, 3),
        new Milk ("Milk", 13.55, 4)
    };

    template <unsigned int NumberOfProducts>
    friend void showAllProducts(Stock<NumberOfProducts> &stock);

public:
    Stock(){};

    Product* getProduct(unsigned int index){
        return this->products[index];
    }

    unsigned int getProductsCount(){
        return this->productsCount;
    }

    void removeProduct(unsigned int index){
        this->products[index] = new EmptyProduct();
    }
    ~Stock(){};
};

template <unsigned int NumberOfProducts>
void showAllProducts(Stock<NumberOfProducts> &stock){
    cout << endl<< "Stock (friend function): " << endl;
    for(int i=0; i<stock.productsCount; i++){
        if (stock.products[i]->getName() == "empty name") {
            cout << "product not available" << endl;
        } else {
            cout << "product id: " << stock.products[i]->getId() << ", ";
            cout << "product name: " << stock.products[i]->getName() << ", ";
            cout << "product price: " << stock.products[i]->getPrice() << endl;
        }
    }
}





