#include <iostream>
#include "ClientAccount.h"

using namespace std;

ClientAccount::ClientAccount(float initialBalance) {
    this->balance = initialBalance;
}

ClientAccount::~ClientAccount() { }

bool ClientAccount::chargeMoney(float price) {
    if(this->balance >= price){
        this->balance = this->balance-price;
    }
}

float ClientAccount::getBalance() {
    return this->balance;
}

void showClientAccountBalance(ClientAccount &clientAccount){
    cout << endl << "Client Account Balance (friend fucntion): " << clientAccount.getBalance();
}