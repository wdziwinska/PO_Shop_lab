#pragma once
#include "Stock.h"

using namespace std;

template <unsigned int MaxNumberOfProducts>
class Shop {

    Stock<MaxNumberOfProducts>* stock;

public:
    Shop(Stock<MaxNumberOfProducts>* stock){
        this->stock=stock;
    }

    void removeProduct(unsigned int id){
        this->stock->removeProduct(this->findProductIndexById(id));
    }

private:
    unsigned int findProductIndexById(unsigned int id){
        for(int i=0;i<this->stock->getProductCount();i++){
            if(this->stock->getProduct(i)->getId()==id){
                return i;
            }
        }
    }
};

