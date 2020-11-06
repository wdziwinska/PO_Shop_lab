#pragma once
#include "iostream"


class ShopAccount {

    float balance;
    float shopBalance;

public:
    friend class Bank;

    friend void showShopNewAccountBalance(ShopAccount &shopAccount, float NewBalance);

    ShopAccount(float initialBalance);

    ~ShopAccount();

    void addMoney(float price);

    float getBalance();

};
