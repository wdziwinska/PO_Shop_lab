#pragma once
#include "Stock.h"
#include "ShopAccount.h"

using namespace std;

template <unsigned int MaxNumberOfProducts>
class Shop {

    Stock<MaxNumberOfProducts>* stock;

    ShopAccount* shopAccount;

public:
    Shop(Stock<MaxNumberOfProducts>* stock, ShopAccount* shopAccount){
        this->stock=stock;
        this->shopAccount=shopAccount;
    }

    void removeProduct(unsigned int id){
        unsigned int index = this->findProductIndexById(id);
        if(index==INTMAX_MAX){
            return;
        }
        this->stock->removeProduct(index);
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

