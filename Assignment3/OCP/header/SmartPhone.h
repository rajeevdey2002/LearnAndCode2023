#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "IDevice.h"

class SmartPhone : public IDevice
{
public:
    void displayDetails() override;
};


#endif