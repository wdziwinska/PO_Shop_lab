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

void Client::clientNumber(ClientAccount &clientNumber){
    clientNumber.number=1234;
}

void Client::bankName(Bank &bName) {
    bName.bankName="QWERTY";
}

void changeClientNick(Client &client, string newNick){
    client.clientNick=newNick;
    cout << "New Client nick (friend function): " << client.clientNick << endl;
}

