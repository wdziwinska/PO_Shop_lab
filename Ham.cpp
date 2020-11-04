
#include "Ham.h"

using namespace std;

Ham::Ham(string name, float price, int id) {
    this->name=name;
    this->price=price;
    this->id=id;
}
Ham::~Ham(){};

float Ham::getPrice() {
    return price;
}

string Ham::getName() {
    return name;
}

unsigned int Ham::getId() {
    return id;
}

void changeProductName(Ham &ham, string newName){
    ham.name=newName;
}