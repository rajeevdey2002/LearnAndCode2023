#include "RectangleWithoutFileHandling.h"
#include <iostream>

RectangleWithoutFileHandling::RectangleWithoutFileHandling(double dimensionLength, double dimensionBreadth)
{
    length = dimensionLength;
    breadth = dimensionBreadth;
}

void RectangleWithoutFileHandling::calculateArea()
{
    area = (length * breadth);
}

void RectangleWithoutFileHandling::printArea()
{
    std::cout << "Area: " << static_cast<double>(area) << std::endl;
}