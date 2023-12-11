#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product 
{
private:
    std::string productName;
    double productPrice;
    int productQuantity;

public:
    Product(std::string name, double price, int quantity);
    std::string getName();
    double getPrice();
    int getQuantity();
    void setQuantity(int newQuantity);
};

#endif