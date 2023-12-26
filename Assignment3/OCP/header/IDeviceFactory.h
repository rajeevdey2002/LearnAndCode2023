#ifndef DEVICE_FACTORY_H
#define DEVICE_FACTORY_H

#include "IDevice.h"

class IDeviceFactory
{
public:
    virtual IDevice* createDevice() = 0;
};

#endif