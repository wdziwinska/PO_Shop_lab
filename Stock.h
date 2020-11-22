#pragma once
#include "Product.h"
#include <iostream>
#include "Milk.h"
#include "Cheese.h"
#include "EmptyProduct.h"
#include "Ham.h"

using namespace std;

template <unsigned int MaxNumberOfProducts>
class UserInterface;

template <unsigned int MaxNumberOfProducts>
class Stock {

    unsigned int productsCount=4;

    Product* products[MaxNumberOfProducts]={
        new Milk(1,"Milk", 12.55,1,1,2020),
        new Cheese ("Cheese", 14.55, 2),
        new Ham ("Ham", 12.55, 3),
        new Milk (4, "Milk", 13.55,1,2,2020)
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

    template <unsigned int Nr>
    void changePassword(UserInterface<Nr> &userInterface, string newPassword){
        userInterface.password=newPassword;
        cout << "New password: " << userInterface.password <<endl;
    }

    ~Stock(){};

};

template <unsigned int NumberOfProducts>
void showAllProducts(Stock<NumberOfProducts> &stock){
    cout << endl << "Stock (friend function): " << endl;
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





