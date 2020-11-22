#include "Product.h"
#include "ExpirationDate.h"

class GroceryProduct {

    ExpirationDate * expirationDate;

public:
    virtual ExpirationDate getExpirationDate()=0;
};
