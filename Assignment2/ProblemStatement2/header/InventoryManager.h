#ifndef INVENTORY_MANAGER_H
#define INVENTORY_MANAGER_H

#include "Product.h"
#include <list>

class InventoryManager 
{
private:
    std::list<Product>* products;

public:
    InventoryManager();
    void addProduct(Product newProduct);
    std::list<Product> getProducts();
};

#endif