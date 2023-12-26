#ifndef LAPTOP_H
#define LAPTOP_H

#include "IDevice.h"

class Laptop : public IDevice
{
public:
    void displayDetails() override;
};

#endif