#pragma once
#include "iostream"


class ShopAccount {

    float balance;

public:
    friend void showShopNewAccountBalance(ShopAccount &shopAccount, float NewBalance);

    ShopAccount(float initialBalance);

    ~ShopAccount();

    void addMoney(float price);

    float getBalance();

};
