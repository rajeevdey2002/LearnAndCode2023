#include "InventoryManager.h"

InventoryManager::InventoryManager()
{
    products = new std::list<Product>();
}

void InventoryManager::addProduct(Product newProduct) 
{
    products->push_back(newProduct);
}

std::list<Product> InventoryManager::getProducts() 
{
    return *products;
}