#pragma once
#include "Stock.h"
#include "ShopAccount.h"
#define PRODUCT_NOT_FOUND INTMAX_MAX

using namespace std;

template <unsigned int MaxNumberOfProducts>
class Shop {

    friend class Stock<MaxNumberOfProducts>;

//    Stock<MaxNumberOfProducts>* stock;

    ShopAccount* shopAccount;

public:
    Shop(ShopAccount* shopAccount){
        this->shopAccount=shopAccount;
    }

    void removeProduct(unsigned int id){
        unsigned int index = this->findProductIndexById(id);
        if(index==PRODUCT_NOT_FOUND){
            return;
        }
        this->removeProduct(index);
    }

private:
    unsigned int findProductIndexById(unsigned int id){
        for(int i=0;i<this->getProductCount();i++){
            if(this->getProduct(i)->getId()==id){
                return i;
            }
        }
        return PRODUCT_NOT_FOUND;
    }
};

