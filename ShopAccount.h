#pragma once
#include "iostream"


class ShopAccount {

    float balance;

public:
    friend void showShopAccountBalance(ShopAccount &shopAccount);

    ShopAccount(float initialBalance);

    ~ShopAccount();

    void addMoney(float price);

    float getBalance();

};
