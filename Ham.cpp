#include "Ham.h"

using namespace std;

Ham::Ham(int id, string name, float price, int day, int month, int year){
    this->name = name;
    this->price = price;
    this->id = id;
    this->expirationDate = new ExpirationDate{day, month, year};
}

Ham::~Ham(){};

float Ham::getPrice() {
    return this->price;
}

string Ham::getName() {
    return this->name;
}

unsigned int Ham::getId() {
    return this->id;
}

ExpirationDate *Ham::getExpirationDate(){
    return this->expirationDate;
}