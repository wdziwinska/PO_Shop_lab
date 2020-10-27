
#include "ShopAccount.h"
#include "iostream"

using namespace std;

ShopAccount::ShopAccount(float initialBalance) {
    this->balance=initialBalance;
}

ShopAccount::~ShopAccount(){

}
void ShopAccount::addMoney(float payment) {
    this->balance += payment;
}

float ShopAccount::getBalance(){
    return this->balance;
}
