#include "Coats.h"

using namespace std;

Coats::Coats(int id, string name, float price, int day, int month, int year, string colour, string material,
             string size, string brand,  long long barcode, string manufacturerName){
    this->name = name;
    this->price = price;
    this->id = id;
    this->productionDate = new ProductionDate{day, month, year};
    this->colour = colour;
    this->material = material;
    this->size = size;
    this->brand = brand;
    this->barcode =barcode;
    this->manufacturerName =manufacturerName;
}

Coats::~Coats(){};

float Coats::getPrice() {
    return this->price;
}

string Coats::getName() {
    return this->name;
}

unsigned int Coats::getId() {
    return this->id;
}

ProductionDate *Coats::getProductionDate(){
    return this->productionDate;
}

string Coats::getColour() {
    return this->colour;
}

string Coats::getMaterial() {
    return this->material;
}

string Coats::getSize() {
    return this->size;
}

string Coats::getBrand() {
    return this->brand;
}

string Coats::getManufacturerName() {
    return this->manufacturerName;
}

long long Coats::getBarcode() {
    return this->barcode;
}