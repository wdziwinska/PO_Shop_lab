#include "Product.h"
#include "GuaranteeDate.h"

class HomewareProduct: public Product {

public:
    virtual GuaranteeDate *getGuaranteeDate() = 0;
};
