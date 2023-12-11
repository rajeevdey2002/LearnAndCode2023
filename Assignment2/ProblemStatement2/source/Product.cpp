#include "Product.h"

Product::Product(std::string name, double price, int quantity) 
{
    productName = name;
    productPrice = price;
    productQuantity = quantity;
}

std::string Product::getName() 
{
    return productName;
}

double Product::getPrice() 
{
    return productPrice;
}

int Product::getQuantity() 
{
    return productQuantity;
}

void Product::setQuantity(int newQuantity) 
{
    productQuantity = newQuantity;
}