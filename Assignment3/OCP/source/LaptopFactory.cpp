#include "LaptopFactory.h"
#include "IDevice.h"
#include "Laptop.h"

IDevice* LaptopFactory::createDevice()
{
    return new Laptop();
}