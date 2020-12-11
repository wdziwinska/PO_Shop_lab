#pragma once
#include "MobilePhones.h"
#include "GuaranteeDate.h"

class IPhone: public MobilePhones{

public:
    IPhone(int id, string name, float price, int day, int month, int year, string operationSystem,
           string processorName, int memory);

    ~IPhone();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
    virtual GuaranteeDate *getGuaranteeDate() override;
    virtual string getOperationSysetm() override;
    virtual string getProcessorName() override;
    virtual unsigned int getMemory() override;

};