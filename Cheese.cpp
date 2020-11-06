#include "Cheese.h"

using namespace std;

Cheese::Cheese(string name, float price, int id) {
    this->name = name;
    this->price = price;
    this->id = id;
}
Cheese::~Cheese(){};

float Cheese::getPrice() {
    return price;
}

string Cheese::getName() {
    return name;
}

unsigned int Cheese::getId() {
    return id;
}
void changeProductName(Cheese &cheese, string newName){
    cheese.name=newName;
}