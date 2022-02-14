/**
 * @file rectangle.cpp
 * @author tamersum11
 * @see rectangle.h
 * @see quad.h
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "rectangle.h"

/**
 * @brief Overrides the Area method from base class Quad
 * 
 * @return float the area of the Rectangle
 */
float Rectangle::Area()
{
    return side_1 * side_2;
}
