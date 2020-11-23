#pragma once
#include "ClientAccount.h"
#include "Bank.h"

using namespace std;

class Client {

    friend class ClientAccount;

    ClientAccount* clientAccount;
    Bank* bank;
    string clientNick;

public:
    friend void changeClientNick(Client &, string newNick);

    Client(ClientAccount *clientAccount, Bank *bank);

    float pay(float payment);

    void clientNumber(ClientAccount &clientNumber);

    void bankName(Bank &bName);
};
