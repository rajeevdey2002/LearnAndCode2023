#include <iostream>
#include "IDevice.h"
#include "IDeviceFactory.h"
#include "Laptop.h"
#include "SmartPhone.h"
#include "LaptopFactory.h"
#include "SmartPhoneFactory.h"

int main()
{
    IDeviceFactory* smartPhoneFactory = new SmartPhoneFactory();
    IDeviceFactory* laptopFactory = new LaptopFactory();
    IDevice* smartPhone = smartPhoneFactory->createDevice();
    IDevice* laptop = laptopFactory->createDevice();
    smartPhone->displayDetails();
    laptop->displayDetails();
    return 0;
}
