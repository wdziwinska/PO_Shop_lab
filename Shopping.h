#include "Basket.h"
#include "UserInterface.h"
#include "Client.h"


template <unsigned int MaxNumberOfProduct>
class Shopping {

    Basket<MaxNumberOfProduct> *basket;

    UserInterface<MaxNumberOfProduct> *userInterface;

    Client *client;

    unsigned int productId;

    int shopNumber=10;

    void show(){
        cout << "Chosen products: " <<endl;
    }

public:
    template<unsigned int Nr>
    friend class UserInterface;

    template<unsigned int NrOfProduct>
    friend void newProductId(Shopping<NrOfProduct> &shopping, int newId);

    Shopping(Basket<MaxNumberOfProduct> *basket, UserInterface<MaxNumberOfProduct> *userInterface, Client* client){
        this->basket=basket;
        this->userInterface=userInterface;
        this->client=client;
    }

    ~Shopping(){}

    void process(){
        this->userInterface->showAvailableProducts();
        while(true) {
            cout << "Enter the product id which you want to buy. Enter \"0\" if you want to end shopping" << endl;
            cin >> this->productId;
            if(this->productId==0){
                break;
            }
            this->basket->addProduct(productId);
        }
        this->client->pay(this->basket->calculatePrice());
    }
};

template <unsigned int NrOfProduct>
void newProductId(Shopping<NrOfProduct> &shopping, int newId){
    shopping.productId=newId;
    cout << "New product Id (friend function): " << shopping.productId << endl;
}
