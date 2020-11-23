#include "Nokia.h"

using namespace std;

Nokia::Nokia(int id, string name, float price, int day, int month, int year){
    this->name = name;
    this->price = price;
    this->id = id;
    this->guaranteeDate = new GuaranteeDate{day, month, year};
}

Nokia::~Nokia(){};

float Nokia::getPrice() {
    return this->price;
}

string Nokia::getName() {
    return this->name;
}

unsigned int Nokia::getId() {
    return this->id;
}

GuaranteeDate *Nokia::getGuaranteeDate(){
    return this->guaranteeDate;
}