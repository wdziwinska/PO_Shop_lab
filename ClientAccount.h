#pragma once

class ClientAccount {

    float balance;

public:
    ClientAccount(float initialBalance);

    ~ClientAccount();

    bool chargeMoney(float price);
    float getBalance();
};
