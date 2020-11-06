#include <iostream>
#include "Client.h"

using namespace std;

Client::Client(ClientAccount *clientAccount, Bank *bank) {
    this->clientAccount = clientAccount;
    this->bank = bank;
}

float Client::pay(float payment) {
    if(this->bank->transfer(payment)){
        return payment;
    }
}

void changeClientNick(Client &client, string newNick){
    client.clientNick=newNick;
    cout << "New Client nick (friedn function): " << client.clientNick << endl;
}

