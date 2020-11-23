#include "IPhone.h"

using namespace std;

IPhone::IPhone(int id, string name, float price, int day, int month, int year){
    this->name = name;
    this->price = price;
    this->id = id;
    this->guaranteeDate = new GuaranteeDate{day, month, year};
}

IPhone::~IPhone(){};

float IPhone::getPrice() {
    return this->price;
}

string IPhone::getName() {
    return this->name;
}

unsigned int IPhone::getId() {
    return this->id;
}

GuaranteeDate *IPhone::getGuaranteeDate(){
    return this->guaranteeDate;
}