#pragma once
#include "ClientAccount.h"
#include "ShopAccount.h"

using namespace std;

class Bank {

    ClientAccount *clientAccount;
    ShopAccount *shopAccount;
    string bankName;

public:
    friend class Client;

    friend void changeBankName(Bank &bank);

    Bank(ClientAccount *clientAccount, ShopAccount *shopAccount);

    ~Bank();

    bool transfer(float payment);

    void gettingMoney(ClientAccount &b);

    void sendingMonay(ShopAccount &s);
};
void changeBankName(Bank &bank);



