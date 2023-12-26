#ifndef RECTANGLE_WITH_FILE_HANDLING_H
#define RECTANGLE_WITH_FILE_HANDLING_H

class RectangleWithFileHandling
{
private:
    double length;
    double breadth;
public:
    RectangleWithFileHandling(double dimensionLength, double dimensionBreadth);
    double calculateArea();
    void saveAreaToFile(double area);
    ~RectangleWithFileHandling();
};

#endif