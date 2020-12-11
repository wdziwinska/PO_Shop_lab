#include "Milk.h"

using namespace std;

Milk::Milk(int id, string name, float price, int day, int month, int year, float weight,
           string ingredient, unsigned int calories, string packetMaterial){
    this->name = name;
    this->price = price;
    this->id = id;
    this->expirationDate = new ExpirationDate{day, month, year};
    this->weight = weight;
    this->ingredient = ingredient;
    this->calories = calories;
    this->packetMaterial =packetMaterial;
}

Milk::~Milk(){};

float Milk::getPrice() {
    return this->price;
}

string Milk::getName() {
    return this->name;
}

unsigned int Milk::getId() {
    return this->id;
}

ExpirationDate *Milk::getExpirationDate(){
    return this->expirationDate;
}

float Milk::getWeight() {
    return this->weight;
}

string Milk::getIngredient() {
    return this->ingredient;
}

unsigned int Milk::getCalories() {
    return this->calories;
}

string Milk::getPacketMaterial() {
    return this->packetMaterial;
}

void changeProductName(Milk &milk, string newName){
    milk.name=newName;
}
