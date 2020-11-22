#include "Milk.h"

using namespace std;

Milk::Milk(int id, string name, float price, int day, int month, int year){
    this->name = name;
    this->price = price;
    this->id = id;
    this->expirationDate = new ExpirationDate{day, month, year};
}

Milk::~Milk(){};

float Milk::getPrice() {
    return this->price;
}

string Milk::getName() {
    return this->name;
}

unsigned int Milk::getId() {
    return this->id;
}

ExpirationDate *Milk::getExpirationDate(){
    return this->expirationDate;
}

void changeProductName(Milk &milk, string newName){
    milk.name=newName;
}
