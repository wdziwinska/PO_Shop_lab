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

void showClientNewAccountBalance(ClientAccount &clientAccount, float newBalance){
    clientAccount.balance = newBalance;
    cout << endl << "Client Account New Balance (friend function): " << clientAccount.balance;
}

void ClientAccount::operator+=(int value) {
    balance +=value;
}

void ClientAccount::operator-=(int value) {
    balance -=value;
}

ostream& operator<<(ostream& s, const ClientAccount& clientAccount){
    s << "new balance: " << clientAccount.balance;
}
