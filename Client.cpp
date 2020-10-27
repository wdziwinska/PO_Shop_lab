#include "Client.h"

Client::Client(ClientAccount *clientAccount, Bank *bank) {
    this->clientAccount = clientAccount;
    this->bank = bank;
}

float Client::pay(float payment) {
    if(this->bank->transfer(payment)){
        return payment;
    }
}