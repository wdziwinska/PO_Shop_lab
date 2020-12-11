#include "Nokia.h"

using namespace std;

Nokia::Nokia(int id, string name, float price, int day, int month, int year, string operationSystem,
             string processorName, unsigned int memory, string screenResolution){
    this->name = name;
    this->price = price;
    this->id = id;
    this->guaranteeDate = new GuaranteeDate{day, month, year};
    this->operationSystem = operationSystem;
    this->processorName = processorName;
    this->memory = memory;
    this->screenResolution =screenResolution;
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

string Nokia::getOperationSysetm() {
    return this->operationSystem;
}

string Nokia::getProcessorName() {
    return this->processorName;
}

unsigned int Nokia::getMemory() {
    return this->memory;
}
string Nokia::getScreenResolution() {
    return this->screenResolution;
}