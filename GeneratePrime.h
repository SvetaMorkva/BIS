//
// Created by Sveta Morkva on 10/14/20.
//

#ifndef LAB1_GENERATEPRIME_H
#define LAB1_GENERATEPRIME_H

#include <gmpxx.h>

class GeneratePrime {
public:
    mpz_class create();

    static mpz_class generateRandom(const std::string &maxValue);
    bool fermaTest(int k);
    bool millerRabinTest(const size_t rounds);

private:
    mpz_class mResult = 0;

    std::string mMaxValue = "10000000000000000000000000";
};


#endif //LAB1_GENERATEPRIME_H
