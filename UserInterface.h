#pragma once;
#include "Stock.h"
#include <iostream>
#include "Basket.h"

template <unsigned int MaxNumberOfProducts>
class Shopping;

template <unsigned int MaxNumberOfProducts>
class UserInterface{

    Stock<MaxNumberOfProducts>* stock;

    Basket<MaxNumberOfProducts>* basket;

    string password;
    string filters;

public:
    template <unsigned int Nr>
    friend class Stock;

    template <unsigned int Nr>
    friend void changeFilters(UserInterface<Nr> &user, string filtr);

    template <unsigned int NrOfProducts>
    friend void showShoppingPrice(Basket<NrOfProducts> &basket);

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
        cout << endl << "Basket contains: "<< endl;
        for(int i=0;i<productsCount;i++) {
            Product *product = this->basket->getProduct(i);
            cout << "product id: " << product->getId() << ", ";
            cout << "product name: " << product->getName() << ", ";
            cout << "product price: " << product->getPrice() << endl;
        }
    }

    void showTotalPrice(){
        cout<< endl <<"Total price: "<<this->basket->calculatePrice()<<endl;
    }

    //class friend function
    template<unsigned int Nr>
    void shopNumber(Shopping<Nr> &shopping){
        cout << "Shop number: " << shopping.shopNumber << endl;
    }
};

template <unsigned int Nr>
void changeFilters(UserInterface<Nr> &user, string filtr){
    user.filters=filtr;
    cout << "Filtres (friend function): " << user.filters <<endl;
}

template <unsigned int NrOfProducts>
void showShoppingPrice(Basket<NrOfProducts> &basket){
    cout<< endl <<"Total shopping price: "<< basket.calculatePrice()<<endl;
}