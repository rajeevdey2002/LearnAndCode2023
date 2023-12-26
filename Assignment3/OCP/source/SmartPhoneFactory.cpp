#include "SmartPhoneFactory.h"
#include "IDevice.h"
#include "SmartPhone.h"

IDevice* SmartPhoneFactory::createDevice()
{
    return new SmartPhone();
}