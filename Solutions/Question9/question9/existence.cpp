/**
 * @file existence.cpp
 * @author tamersum11
 * @see existence.hpp
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "existence.h"

/**
 * @brief Initializing the static variables
 *
 */
unsigned int Existence::numBorn = 0;
unsigned int Existence::numLiving = 0;

/**
 * @brief Construct a new Existence:: Existence object
 *
 */
Existence::Existence() {
    numBorn++;
    numLiving++;
}

/**
 * @brief Destroy the Existence:: Existence object
 *
 */
Existence::~Existence() {
    numLiving--;
}

/**
 * @brief Returns the value of numBorn that number of objects of the class that have been instanced.
 *
 * @return unsigned int
 */
unsigned int Existence::getNumBorn() const {
    return numBorn;
}

/**
 * @brief Returns the value of numLiving that total number of objects in existance currently.
 *
 * @return unsigned int
 */
unsigned int Existence::getNumLiving() const {
    return numLiving;
}
