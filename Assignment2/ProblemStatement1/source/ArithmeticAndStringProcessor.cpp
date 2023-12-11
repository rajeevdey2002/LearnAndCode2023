#include "ArithmeticAndStringProcessor.h"
#include <iostream>
#include <algorithm>

void ArithmeticAndStringProcessor::additionOfTwoNumbers(int firstOperand, int secondOperand) 
{
    int resultAfterAddition = firstOperand + secondOperand;
    std::cout << "Result: " << resultAfterAddition << std::endl;
}

void ArithmeticAndStringProcessor::convertToUppercase(std::string lowerCaseInput) 
{
    std::transform(lowerCaseInput.begin(), lowerCaseInput.end(), lowerCaseInput.begin(), ::toupper);
    std::cout << "Updated String: " << lowerCaseInput << std::endl;
}