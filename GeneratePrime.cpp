//
// Created by Sveta Morkva on 10/14/20.
//
#include <cstdio>
#include "GeneratePrime.h"
#include <iostream>

mpz_class GeneratePrime::create() {
    srand(time(nullptr));
    bool prime = false;
    while (!prime) {
        mResult = generateRandom(mMaxValue);
        prime = millerRabinTest(3);
    }
    return mResult;
}

mpz_class GeneratePrime::generateRandom(const std::string &maxValue) {
    mpz_t max, result;
    gmp_randstate_t state;

    mpz_init(max);
    mpz_init(result);
    gmp_randinit_default(state);

    mpz_set_str(max, maxValue.c_str(), 0);
    gmp_randseed_ui(state, rand());
    mpz_urandomm(result, state, max);

    auto r = mpz_class(result) + 2;
    return r;
}

bool GeneratePrime::fermaTest(int k) {
    std::cout << "ferma check" << std::endl;
    for (int i = 0; i < k; i++) {
        mpz_class a = generateRandom(mpz_class(mResult - 4).get_str());
        mpz_t result;
        mpz_init(result);
        mpz_powm(result, a.get_mpz_t(), mpz_class(mResult - 1).get_mpz_t(),
                 mResult.get_mpz_t());
        auto res = mpz_class(result);
        if (res != 1) {
            return false;
        }
    }
    return true;
}

bool GeneratePrime::millerRabinTest(const size_t rounds) {
    int res = mpz_probab_prime_p(mResult.get_mpz_t(), rounds);
    if (res != 0) {
        return fermaTest(rounds);
    }
    return false;
}