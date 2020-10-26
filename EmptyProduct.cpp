#include "EmptyProduct.h"

EmptyProduct::EmptyProduct(){
    this->name="empty name";
    this->price=0;
    this->id=0;
}
EmptyProduct::~EmptyProduct(){};

float EmptyProduct::getPrice() {
    return price;
}

string EmptyProduct::getName() {
    return name;
}

unsigned int EmptyProduct::getId() {
    return id;
}
