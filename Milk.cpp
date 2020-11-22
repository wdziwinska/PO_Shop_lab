
#include "Milk.h"

using namespace std;

Milk::Milk(string name, float price, int id) {
    this->name=name;
    this->price=price;
    this->id=id;
}
Milk::~Milk(){};

float Milk::getPrice() {
    return price;
}

string Milk::getName() {
    return name;
}

unsigned int Milk::getId() {
    return id;
}
void changeProductName(Milk &milk, string newName){
    milk.name=newName;
}