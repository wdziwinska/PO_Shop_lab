#pragma once
#include "Product.h"
#include <iostream>
#include "Milk.h"
#include "Cheese.h"
#include "EmptyProduct.h"
#include "Ham.h"
#include "IPhone.h"
#include "Nokia.h"
#include "Coats.h"

using namespace std;

template <unsigned int MaxNumberOfProducts>
class UserInterface;

template <unsigned int MaxNumberOfProducts>
class Stock {

    unsigned int productsCount=7;

    Product* products[MaxNumberOfProducts]={
        new Milk(1,"Milk", 12.55,1,1,2020, 0.99, "water", 150, "paper", 768543, "Laciate"),
        new Cheese (2,"Cheese", 14.55, 2,2,2021, 1, "milk", 300, "plastic", 345678, "Piatnica"),
        new Ham (3,"Ham", 12.55, 3,3,2022, 0.125, "meat", 200, "plastic", 234567, "Sokolow"),
        new Milk (4, "Milk", 13.55,1,2,2020, 0.99, "water", 150, "paper", 987645, "Laciate"),
        new IPhone(5, "IPhone", 213.99, 15,10,2025, "IOS", "Bionic", 256, "4k", 45678, "IPhone"),
        new Nokia(6, "Nokia", 1999.99, 23,12,2023, "MobileWindows", "qualcom", 32, "1080p", 345676, "Nokia"),
        new Coats(7, "Coat", 199.99, 17, 01, 2020, "black", "cotton", "M", "Orsay", 987654, "Orsay")
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





