#pragma once
#include "HomewareProduct.h"
#include "GuaranteeDate.h"

class MobilePhones: public HomewareProduct{

protected:
    float price;
    string name;
    int id;
    GuaranteeDate *guaranteeDate;
};
