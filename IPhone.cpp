#include "IPhone.h"

using namespace std;

IPhone::IPhone(int id, string name, float price, int day, int month, int year, string operationSystem,
               string processorName, int memory, string screenResolution){
    this->name = name;
    this->price = price;
    this->id = id;
    this->guaranteeDate = new GuaranteeDate{day, month, year};
    this->operationSystem = operationSystem;
    this->processorName = processorName;
    this->memory = memory;
    this->screenResolution =screenResolution;
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

string IPhone::getOperationSysetm() {
    return this->operationSystem;
}

string IPhone::getProcessorName() {
    return this->processorName;
}

unsigned int IPhone::getMemory() {
    return this->memory;
}

string IPhone::getScreenResolution() {
    return this->screenResolution;
}