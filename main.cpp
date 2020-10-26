#include <iostream>
#include "Shop.h"
#include "Stock.h"
#include "UserInterface.h"

const unsigned int MAX_NUMBER_OF_PRODUCTS=10;

int main() {

    Stock<MAX_NUMBER_OF_PRODUCTS>* stock = new Stock<MAX_NUMBER_OF_PRODUCTS>();

    Shop<MAX_NUMBER_OF_PRODUCTS>* shop = new Shop<MAX_NUMBER_OF_PRODUCTS>(stock);

    UserInterface<MAX_NUMBER_OF_PRODUCTS>* userInterface = new UserInterface<MAX_NUMBER_OF_PRODUCTS>(stock);

    userInterface->showAvailableProducts();
    cout<<endl;
    shop->removeProduct(2);
    userInterface->showAvailableProducts();

    return 0;
}
