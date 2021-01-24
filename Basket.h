#pragma once
#include "Product.h"
#include "Stock.h"
#include "Shop.h"

template <unsigned int MaxNumberOfProducts>
class Basket{

    Stock<MaxNumberOfProducts> *stock;

    Shop<MaxNumberOfProducts> *shop;

    Product* products[MaxNumberOfProducts] = {new Cheese (1,"Cheese", 14.55, 2,2,2021, 0.99, "milk", 300, "plastic", 34567, "Piatnica"),
                                             new Ham (3,"Ham", 12.55, 3,3,2022, 1.2, "meat", 150, "plastic", 23456, "Sokolow")};
    unsigned int productsCount = 0;

public:

    template <unsigned int NumberOfProducts>
    friend void showNewProductsCount(Basket<NumberOfProducts> &basket,unsigned int newCount);

    Basket(Stock<MaxNumberOfProducts>* stock, Shop<MaxNumberOfProducts>* shop){
        this->shop = shop;
        this->stock = stock;
    }

    float calculatePrice(){
        float sum = 0;
        for (int i = 0; i < this->productsCount; i++) {
            sum += this->products[i]->getPrice();
        }
        return sum;
    }

    void addProduct(unsigned int id){
        unsigned int index = findProductIndexById(id);
        this->products[this->productsCount] = this->stock->getProduct(index);
        this->productsCount++;
    }

    void removeProduct(unsigned int id){
        this->productsCount--;
        this->stock->removeProduct(id);
    }

    unsigned int getProductsCount(){
        return this->productsCount;
    }

    Product* getProduct(unsigned int index){
        return this->products[index];
    }

    void buy(){
        for(int i=0; i<this->productsCount; i++) {
            this->shop->removeProduct(this->products[i]->getId());
        }
    }

private:
    unsigned int findProductIndexById(unsigned int id){
        for(int i=0;i<this->stock->getProductsCount();i++){
            if(this->stock->getProduct(i)->getId()==id){
                return i;
            }
        }
        return INTMAX_MAX;
    }
};

template <unsigned int NumberOfProducts>
void showNewProductsCount(Basket<NumberOfProducts> &basket, unsigned int newCount){
    basket.productsCount = newCount;
    cout << endl << "New product count (friend function): " << basket.productsCount;
}