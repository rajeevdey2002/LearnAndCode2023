#ifndef ARITHMETIC_AND_STRING_PROCESSOR_H
#define ARITHMETIC_AND_STRING_PROCESSOR_H

#include <string>

class ArithmeticAndStringProcessor 
{
public:
    int firstNumber;
    double secondNumber;
    std::string lowerCaseInput;
    void additionOfTwoNumbers(int firstOperand, int constantOperand);
    void convertToUppercase(std::string lowerCaseInput);
};

#endif