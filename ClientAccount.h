#pragma once
#include <iostream>

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

    void operator+=(int value);

    void operator-=(int value);

    friend std::ostream& operator<<(std::ostream&, const ClientAccount&);
};
