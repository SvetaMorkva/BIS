//
// Created by Sveta Morkva on 9/21/20.
//

#include "LongArithmetic.h"
#include <gmpxx.h>

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
