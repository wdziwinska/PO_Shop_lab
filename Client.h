#pragma once
#include "ClientAccount.h"
#include "Bank.h"

class Client {

    ClientAccount* clientAccount;
    Bank* bank;

public:
    Client(ClientAccount *clientAccount, Bank *bank);

    float pay(float payment);
};
