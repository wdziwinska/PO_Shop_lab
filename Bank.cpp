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

void Bank::gettingMoney(ClientAccount &b) {
    b.balance=b.getBalance();
}

void Bank::sendingMonay(ShopAccount &s) {
    s.shopBalance=s.getBalance();
}

void changeBankName(Bank &bank){
    bank.bankName="BBBank";
    cout <<"New Bank Name(friend function): " << bank.bankName << endl;
}