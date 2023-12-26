#ifndef SMARTPHONE_FACTORY_H
#define SMARTPHONE_FACTORY_H

#include "IDeviceFactory.h"

class SmartPhoneFactory : public IDeviceFactory
{
public:
    IDevice* createDevice() override;
};

#endif