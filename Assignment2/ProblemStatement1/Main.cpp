#include "ArithmeticAndStringProcessor.h"

int main() 
{
    ArithmeticAndStringProcessor* myProcessor = new ArithmeticAndStringProcessor;
    myProcessor -> firstNumber = 10;
    myProcessor -> secondNumber = 20.5;
    myProcessor -> lowerCaseInput = "hello";
    myProcessor -> additionOfTwoNumbers(myProcessor -> firstNumber, 5);
    myProcessor -> convertToUppercase("world");

    return 0;
}