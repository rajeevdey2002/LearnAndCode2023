#include "Email.h"
#include "IEntity.h"
#include "InputValidation.h"
#include <iostream>

void displayMainMenu()
{
    std::cout << "Choose an Entity type:\n";
    std::cout << "1. Email\n";
    std::cout << "2. Server\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter a choice: ";
}

const std::string takeEmailIdFromUser()
{
    std::string emailId;
    std::cout << "Enter your email id: ";
    getline(std::cin >> std::ws, emailId);
    return emailId;
}

void getCarbonFootPrintByEmail()
{
    std::string emailId = takeEmailIdFromUser();
    if (isValidEmailId(emailId) == false)
    {
        std::cout << "Incorrect email id. Please enter correct id." << std::endl;
        return;
    }
    int spamEmails, standardEmail, emailWithAttachments;
    std::cout << "Enter the number of spam mails: ";
    std::cin >> spamEmails;
    if (checkValidity() == 0)
    {
        return;
    }
    std::cout << "Enter the number of standard mails: ";
    std::cin >> standardEmail;
    if (checkValidity() == 0)
    {
        return;
    }
    std::cout << "Enter the number of emails with attachments: ";
    std::cin >> emailWithAttachments;
    if (checkValidity() == 0)
    {
        return;
    }
    IEntity *entity = new Email(spamEmails, standardEmail, emailWithAttachments);
    double carbonFootPrint = entity->calculateCarbonFootPrint();
    std::cout << "\nYou have " << carbonFootPrint << " amount of carbon foot print\n" << std::endl;
}

void getCarbonFootPrintByServer()
{
    std::cout << "Currently server feature is not available.\n" << std::endl;
}

int main()
{
    int userChoice;
    do
    {
        displayMainMenu();
        std::cin >> userChoice;
        if (checkValidity() == 0)
        {
            continue;
        }
        switch (userChoice)
        {
        case 1:
            getCarbonFootPrintByEmail();
            break;
        case 2:
            getCarbonFootPrintByServer();
            break;
        case 3:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (userChoice != 3);

    return 0;
}
