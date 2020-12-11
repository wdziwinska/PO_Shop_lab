#pragma once
#include "Date.h"

class ProductionDate: public Date{

public:
    ProductionDate(int day, int month, int year) : Date(day, month, year) {
    }
};