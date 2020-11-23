#include "Cheese.h"

using namespace std;

Cheese::Cheese(int id, string name, float price, int day, int month, int year) {
    this->name = name;
    this->price = price;
    this->id = id;
    this->expirationDate = new ExpirationDate{day, month, year};
}

Cheese::~Cheese(){};

float Cheese::getPrice() {
    return this->price;
}

string Cheese::getName() {
    return this->name;
}

unsigned int Cheese::getId() {
    return this->id;
}

ExpirationDate *Cheese::getExpirationDate(){
    return this->expirationDate;
}
void changeProductName(Cheese &cheese, string newName){
    cheese.name=newName;
}