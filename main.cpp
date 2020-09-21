#include "LongArithmetic.h"

int main() {
    std::string firstNum, secondNum;
    std::cin >> firstNum >> secondNum;

    LongArithmetic::Add(firstNum, secondNum);
    LongArithmetic::Multiply(firstNum, secondNum);
    LongArithmetic::Deduction(firstNum, secondNum);
    LongArithmetic::Divide(firstNum, secondNum);
    LongArithmetic::Modulo(firstNum, secondNum);
    LongArithmetic::Square(firstNum);

    return 0;
}
