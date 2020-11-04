#include "Bank.h"

Bank::Bank(ClientAccount *clientAccount, ShopAccount *shopAccount) {
    this->clientAccount=clientAccount;
    this->shopAccount=shopAccount;
}

Bank::~Bank() { }

bool Bank::transfer(float payment) {
    if(this->clientAccount->chargeMoney(payment)){
        this->shopAccount->addMoney(payment);
    }
}