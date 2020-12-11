#pragma once
#include "MobilePhones.h"
#include "GuaranteeDate.h"

class Nokia: public MobilePhones{

public:
    Nokia(int id, string name, float price, int day, int month, int year, string operationSystem,
          string processorName, unsigned int memory, string screenResolution,  long long barcode, string manufacturerName);

    ~Nokia();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
    virtual GuaranteeDate *getGuaranteeDate() override;
    virtual string getOperationSysetm() override;
    virtual string getProcessorName() override;
    virtual unsigned int getMemory() override;
    virtual string getScreenResolution() override;
    virtual string getManufacturerName() override;
    virtual long long getBarcode() override;

};