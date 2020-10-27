#pragma once;
#include "Product.h"
#include "Stock.h"
#include "Shop.h"

template <unsigned int MaxNumberOfProducts>
class Basket{

    Stock<MaxNumberOfProducts> *stock;

    Shop<MaxNumberOfProducts> *shop;

    Product* products[MaxNumberOfProducts] = {new Cheese ("Cheese", 14.55, 2),
                                             new Ham ("Ham", 12.55, 3)};

    unsigned int productsCount = 0;

public:
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
        for(int i=0;i<this->stock->getProductCount();i++){
            if(this->stock->getProduct(i)->getId()==id){
                return i;
            }
        }
        return INTMAX_MAX;
    }
};