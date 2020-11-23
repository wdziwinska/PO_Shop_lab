#pragma once
#include "Date.h"

class GuaranteeDate: public Date{

public:
    GuaranteeDate(int day, int month, int year) : Date(day, month, year) {
    }
};