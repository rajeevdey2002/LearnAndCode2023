#ifndef RECTANGLE_WITHOUT_FILE_HANDLING_H
#define RECTANGLE_WITHOUT_FILE_HANDLING_H

class RectangleWithoutFileHandling
{
private:
    double length;
    double breadth;
    double area;
public:
    RectangleWithoutFileHandling(double dimensionLength, double dimensionBreadth);
    void calculateArea();
    void printArea();
    ~RectangleWithoutFileHandling();
};

#endif