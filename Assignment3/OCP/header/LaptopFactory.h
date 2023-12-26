#ifndef LAPTOP_FACTORY_H
#define LAPTOP_FACTORY_H

#include "IDeviceFactory.h"

class LaptopFactory : public IDeviceFactory
{
public:
    IDevice* createDevice() override;
};

#endif