#include "Ham.h"

using namespace std;

Ham::Ham(int id, string name, float price, int day, int month, int year, float weight, string ingredient,
         unsigned int calories, string packetMaterial){
    this->name = name;
    this->price = price;
    this->id = id;
    this->expirationDate = new ExpirationDate{day, month, year};
    this->weight = weight;
    this->ingredient = ingredient;
    this->calories = calories;
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

float Ham::getWeight() {
    return this->weight;
}

string Ham::getIngredient() {
    return this->ingredient;
}

string Ham::getPacketMaterial() {
    return this->packetMaterial;
}

unsigned int Ham::getCalories() {
    return this->calories;
}