#include "EmptyProduct.h"

EmptyProduct::EmptyProduct(){
    this->name="empty name";
    this->price=0;
    this->id=0;
    this->barcode=000;
    this->manufacturerName="no name";
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
void changePrice(EmptyProduct &emptyProduct, float newPrice){
    emptyProduct.price = newPrice;
}

string EmptyProduct::getManufacturerName() {
    return this->manufacturerName;
}

long long EmptyProduct::getBarcode() {
    return this->barcode;
}
