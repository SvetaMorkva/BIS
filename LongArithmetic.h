//
// Created by Sveta Morkva on 9/21/20.
//

#ifndef LAB1_LONGARITHMETIC_H
#define LAB1_LONGARITHMETIC_H

#include <iostream>

class LongArithmetic {
public:
    static void Add(const std::string &first, const std::string &second);
    static void Deduction(const std::string &first, const std::string &second);
    static void Multiply(const std::string &first, const std::string &second);
    static void Divide(const std::string &first, const std::string &second);
    static void Modulo(const std::string &first, const std::string &second);
    static void Square(const std::string &first);

};


#endif //LAB1_LONGARITHMETIC_H
