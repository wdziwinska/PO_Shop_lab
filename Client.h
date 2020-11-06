#pragma once
#include "ClientAccount.h"
#include "Bank.h"

using namespace std;

class Client {

    ClientAccount* clientAccount;
    Bank* bank;
    string clientNick;

public:
    friend void changeClientNick(Client &, string newNick);

    Client(ClientAccount *clientAccount, Bank *bank);

    float pay(float payment);
};
