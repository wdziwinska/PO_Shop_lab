#pragma once
#include "iostream"


class ShopAccount {

    float balance;

public:
    ShopAccount(float initialBalance);

    ~ShopAccount();

    void addMoney(float price);

    float getBalance();

};
