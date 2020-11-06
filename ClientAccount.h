#pragma once

class ClientAccount {

    float balance;

public:
    friend void showClientNewAccountBalance(ClientAccount &clientAccount, float newBalance);

    ClientAccount(float initialBalance);

    ~ClientAccount();

    bool chargeMoney(float price);
    float getBalance();
};
