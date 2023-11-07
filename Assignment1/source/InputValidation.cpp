#include "InputValidation.h"
#include <iostream>
#include <limits>
#include <regex>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int checkValidity()
{
    if (std::cin.eof())
    {
        exit(1);
    }
    if (std::cin.fail() || std::cin.peek() != '\n')
    {
        std::cout << "Invalid Input!!!\n" << std::endl;
        std::cin.clear();
        ignoreLine();
        return 0;
    }
    ignoreLine();
    return 1;
}

bool isValidEmailId(const std::string &email)
{
    std::regex pattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    return std::regex_match(email, pattern);
}
