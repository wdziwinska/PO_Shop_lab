#include <iostream>
#include "Shop.h"
#include "Stock.h"
#include "UserInterface.h"
#include "Basket.h"
#include "Shopping.h"
#include "ClientAccount.h"
#include "Client.h"
#include "ShopAccount.h"

const unsigned int MAX_NUMBER_OF_PRODUCTS=10;

int main() {

    ShopAccount* shopAccount = new ShopAccount(0);

    Stock<MAX_NUMBER_OF_PRODUCTS>* stock = new Stock<MAX_NUMBER_OF_PRODUCTS>();

    Shop<MAX_NUMBER_OF_PRODUCTS>* shop = new Shop<MAX_NUMBER_OF_PRODUCTS>(stock, shopAccount);

    Basket<MAX_NUMBER_OF_PRODUCTS>* basket = new Basket<MAX_NUMBER_OF_PRODUCTS>(stock, shop);

    UserInterface<MAX_NUMBER_OF_PRODUCTS>* userInterface = new UserInterface<MAX_NUMBER_OF_PRODUCTS>(stock, basket);


    ClientAccount* clientAccount = new ClientAccount(100);

    Bank* bank = new Bank(clientAccount, shopAccount);

    Client* client = new Client(clientAccount, bank);

    Shopping<MAX_NUMBER_OF_PRODUCTS>* shopping = new Shopping<MAX_NUMBER_OF_PRODUCTS>(basket, userInterface, client);

    shopping->process();
    userInterface->showBasketContain();
    userInterface->showTotalPrice();

    cout<< "Account balance: "<< clientAccount->getBalance() << endl;
    cout<< "Shop account balance: "<<shopAccount->getBalance() <<endl;

    return 0;
}
