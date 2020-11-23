
#include "ShopAccount.h"
#include "iostream"

using namespace std;

ShopAccount::ShopAccount(float initialBalance) {
    this->balance=initialBalance;
}

ShopAccount::~ShopAccount(){

}
void ShopAccount::addMoney(float payment) {
    this->balance =this->balance + payment;
}

float ShopAccount::getBalance(){
    return this->balance;
}

void showShopNewAccountBalance(ShopAccount &shopAccount, float newBalance){
    shopAccount.balance = newBalance;
    cout << endl << "Shop Account New Balance (friend function): " << shopAccount.balance;
}
