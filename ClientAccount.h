#pragma once

class ClientAccount {

    float balance;

public:
    friend void showClientAccountBalance(ClientAccount &clientAccount);

    ClientAccount(float initialBalance);

    ~ClientAccount();

    bool chargeMoney(float price);
    float getBalance();
};
