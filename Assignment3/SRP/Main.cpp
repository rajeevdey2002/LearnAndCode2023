#include <iostream>
#include "RectangleWithoutFileHandling.h"
#include "RectangleWithFileHandling.h"

int main()
{
    double length, breadth;
    std::cout << "Enter the length: ";
    std::cin >> length;
    std::cout << "Enter the breadth: ";
    std::cin >> breadth;
    RectangleWithoutFileHandling* firstRectangle = new RectangleWithoutFileHandling(length, breadth);
    firstRectangle->calculateArea();
    firstRectangle->printArea();
    RectangleWithFileHandling* secondRectangle = new RectangleWithFileHandling(length, breadth);
    double area = secondRectangle->calculateArea();
    secondRectangle->saveAreaToFile(area);
    std::cout << "Area: " << static_cast<double>(area) << std::endl;
    return 0;
}
