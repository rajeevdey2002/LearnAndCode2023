#include "Product.h"
#include "InventoryManager.h"
#include <iostream>

int main() 
{
    InventoryManager* myInventoryManager = new InventoryManager();
    while (true) 
    {
        std::cout << "\nInventory Management System\n";
        std::cout << "1. Add Product\n";
        std::cout << "2. Display Inventory\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        int userChoice;
        std::cin >> userChoice;
        std::string productName;
        std::list<Product> products;
        Product* newProduct;
        switch (userChoice) 
        {
            case 1:
                std::cout << "Enter product name: ";
                getline(std::cin >> std::ws, productName);
                std::cout << "Enter product price: ";
                double productPrice;
                std::cin >> productPrice;
                std::cout << "Enter product quantity: ";
                int productQuantity;
                std::cin >> productQuantity;
                newProduct = new Product(productName, productPrice, productQuantity);
                myInventoryManager->addProduct(*newProduct);
                std::cout << "Product added successfully!\n";
                break;
            case 2:
                std::cout << "\nCurrent Inventory:";
                products = myInventoryManager->getProducts();
                for (Product product : products) 
                {
                    std::cout << "\nName: " <<  product.getName()  << 
                                ", Price: $" <<  product.getPrice() <<
                                ", Quantity: " << product.getQuantity() << std::endl;
                }
                break;
            case 3:
                std::cout << "Exiting program. Goodbye!\n";
                std::exit(0);
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}