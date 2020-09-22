#include "LongArithmetic.h"

int main() {
    std::string firstNum, secondNum;
    std::cout << "Enter two numbers:\n";
    std::cin >> firstNum >> secondNum;
    if (LongArithmetic::is_number(firstNum) && LongArithmetic::is_number(secondNum)) {

        LongArithmetic::Add(firstNum, secondNum);
        LongArithmetic::Multiply(firstNum, secondNum);
        LongArithmetic::Deduction(firstNum, secondNum);
        LongArithmetic::Divide(firstNum, secondNum);
        LongArithmetic::Modulo(firstNum, secondNum);
        LongArithmetic::Square(firstNum);
    } else {
        std::cout << "Error: not a number";
    }

    bool keep_running = true;
    while (keep_running) {
        keep_running = LongArithmetic::FullCalculator();
    }

    return 0;
}
