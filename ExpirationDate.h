#pragma once
#include "Date.h"

class ExpirationDate: public Date{

public:
    ExpirationDate(int day, int month, int year) : Date(day, month, year) {
    }
};