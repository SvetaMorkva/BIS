//
// Created by Sveta Morkva on 9/21/20.
//

#include "LongArithmetic.h"
#include <gmpxx.h>

std::map<std::string, std::function<void(const std::string &, const std::string &)>>
    LongArithmetic::mCountFunc = {
        {"+", Add},
        {"-", Deduction},
        {"*", Multiply},
        {"/", Divide},
        {"%", Modulo}
};

bool LongArithmetic::is_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(),
                                      s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}

void LongArithmetic::Add(const std::string &first, const std::string &second) {
    mpz_class x(first);
    mpz_class y(second);

    std::cout << "\n         Add:   " << x << " + " << y << " = " << x + y << "\n";
}

void LongArithmetic::Multiply(const std::string &first, const std::string &second) {
    mpz_class x(first);
    mpz_class y(second);

    std::cout << "\n    Multiply:   " << x << " * " << y << " = " << x * y << "\n";
}

void LongArithmetic::Modulo(const std::string &first, const std::string &second) {
    mpz_class x(first);
    mpz_class y(second);

    std::cout << "\n      Modulo:   " << x << " % " << y << " = " << x % y << "\n";
}

void LongArithmetic::Square(const std::string &first) {
    mpz_class x(first);

    std::cout << "\n      Square:   " << first << " ^  2 = " << x * x << "\n";
}

void LongArithmetic::Deduction(const std::string &first, const std::string &second) {
    mpz_class x(first);
    mpz_class y(second);

    std::cout << "\n   Deduction:   " << x << " - " << y << " = " << x - y << "\n";
}

void LongArithmetic::Divide(const std::string &first, const std::string &second) {
    mpz_class x(first);
    mpz_class y(second);

    std::cout << "\n      Divide:   " << x << " / " << y << " = " << x / y << "\n";
}

bool LongArithmetic::FullCalculator() {
    std::string first, second, operation;
    std::cout << "\n--------------------------------------\n "
                 "Enter first number to continue or sth else to exit: \n";

    std::cin >> first;
    if (!is_number(first)) {
        return false;
    }

    std::cout << "\n Enter one of the following operations: + - * / % ^\n";
    std::cin >> operation;

    if (operation == "^") {
        Square(first);
        return true;
    }

    std::cout << "\n Enter second number: \n";
    std::cin >> second;

    auto func = mCountFunc[operation];
    if (func && is_number(second)) {
        func(first, second);
    } else {
        std::cout << "\n Error: sth incorrect entered!";
    }
    return true;
}
