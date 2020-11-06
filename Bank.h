#pragma once;
#include "ClientAccount.h"
#include "ShopAccount.h"

class Bank {

    ClientAccount *clientAccount;
    ShopAccount *shopAccount;

public:
    Bank(ClientAccount *clientAccount, ShopAccount *shopAccount);

    ~Bank();

    bool transfer(float payment);
};

