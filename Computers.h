#pragma once
#include "HomewareProduct.h"
#include "GuaranteeDate.h"

class Computers: public HomewareProduct{

protected:
    float price;
    string name;
    int id;
    GuaranteeDate *guaranteeDate;
    string processorName;
    unsigned int memory;
    string operationSystem;
    string screenResolution;
    string manufacturerName;
    long long barcode;

};
