/**
 * @file rectangle.h
 * @author tamersum11
 * @brief Derive a class Rectangle from Quad and override the Area method so that it returns the area of the Rectangle.
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "quad.h"

class Rectangle : public Quad
{
public:
    float Area() override;
};

#endif // RECTANGLE_H