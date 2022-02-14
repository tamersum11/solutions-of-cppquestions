/**
 * @file triple.cpp
 * @author tamersum11
 * @see triple.h 
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "triple.h"

/**
 * @brief Construct a new Triple:: Triple object or, by default, sets the values all equal to 0
 * 
 * @param x 
 * @param y 
 * @param z 
 */
Triple::Triple(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

/**
 * @brief Destroy the Triple:: Triple object
 * 
 */
Triple::~Triple(){}

/**
 * @brief Getter for x
 * 
 * @return float x
 */
float Triple::getX() const
{
    return x;
}

/**
 * @brief Setter for x
 * 
 * @param newX 
 */
void Triple::setX(float newX)
{
    x = newX;
}

/**
 * @brief Getter for y
 * 
 * @return float y
 */
float Triple::getY() const
{
    return y;
}

/**
 * @brief Setter for y
 * 
 * @param newY 
 */
void Triple::setY(float newY)
{
    y = newY;
}

/**
 * @brief Getter for z
 * 
 * @return float z
 */
float Triple::getZ() const
{
    return z;
}

/**
 * @brief Setter for z
 * 
 * @param newZ 
 */
void Triple::setZ(float newZ)
{
    z = newZ;
}
