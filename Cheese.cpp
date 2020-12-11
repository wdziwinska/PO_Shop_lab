#include "Cheese.h"

using namespace std;

Cheese::Cheese(int id, string name, float price, int day, int month, int year, float weight, string ingredient, unsigned int calories) {
    this->name = name;
    this->price = price;
    this->id = id;
    this->expirationDate = new ExpirationDate{day, month, year};
    this->weight = weight;
    this->ingredient = ingredient;
    this->calories = calories;
}

Cheese::~Cheese(){};

float Cheese::getPrice() {
    return this->price;
}

string Cheese::getName() {
    return this->name;
}

unsigned int Cheese::getId() {
    return this->id;
}

ExpirationDate *Cheese::getExpirationDate(){
    return this->expirationDate;
}
float Cheese::getWeight() {
    return this->weight;
}

string Cheese::getIngredient() {
    return this->ingredient;
}

unsigned int Cheese::getCalories() {
    return this->calories;
}

void changeProductName(Cheese &cheese, string newName){
    cheese.name=newName;
}