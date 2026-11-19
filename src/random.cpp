#include "game.h"

#include <random>

int randomNumber(int minimum, int maximum) {
    std::random_device seed;
    std::mt19937 generator(seed());
    std::uniform_int_distribution<int> distribution(minimum, maximum);
    return distribution(generator);
}
