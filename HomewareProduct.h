#include "Product.h"
#include "GuaranteeDate.h"

class HomewareProduct: public Product {

public:
    virtual GuaranteeDate *getGuaranteeDate() = 0;
    virtual string getOperationSysetm() = 0;
    virtual string getProcessorName() = 0;
    virtual unsigned int getMemory() = 0;
};
