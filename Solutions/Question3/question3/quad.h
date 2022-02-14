/**
 * @file quad.h
 * @author tamersum11
 * @brief Abstract base class Quad have four member data variables (floats) representing side lenghts 
 * and a pure virtual function Area. It also have a method for setting the data variables.
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef QUAD_H
#define QUAD_H

class Quad
{
public:
    virtual float Area() = 0;
    void setSides(float side_1, float side_2, float side_3, float side_4) {
        this->side_1 = side_1;
        this->side_2 = side_2;
        this->side_3 = side_3;
        this->side_4 = side_4;
    }
protected:
    float side_1, side_2, side_3, side_4;
};

#endif // QUAD_H