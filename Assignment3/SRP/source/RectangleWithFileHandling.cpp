#include "RectangleWithFileHandling.h"
#include <iostream>
#include <fstream>

RectangleWithFileHandling::RectangleWithFileHandling(double dimensionLength, double dimensionBreadth)
{
    length = dimensionLength;
    breadth = dimensionBreadth;
}

double RectangleWithFileHandling::calculateArea()
{
    double area = length * breadth;
    saveAreaToFile(area);
    return area;
}

void RectangleWithFileHandling::saveAreaToFile(double area)
{
    std::ofstream file("area.txt");
    if (file.is_open()) 
    {
        file << "Area: " << area << std::endl;
        file.close();
    } 
    else 
    {
        std::cerr << "Error writing to file" << std::endl;
    }
}
