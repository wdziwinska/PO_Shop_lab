#pragma once

class ClientAccount {

    float balance;
    int number;

public:
    friend class Client;
    friend class Bank;

    friend void showClientNewAccountBalance(ClientAccount &clientAccount, float newBalance);

    ClientAccount(float initialBalance);

    ~ClientAccount();

    bool chargeMoney(float price);
    float getBalance();
};
