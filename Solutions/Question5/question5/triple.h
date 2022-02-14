/**
 * @file triple.h
 * @author tamersum11
 * @brief Class named Triple with three private data members (floats) x, y, and z.
 * It provides public functions for setting and getting values of all the private data members.
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef TRIPLE_H
#define TRIPLE_H

#include <iostream>

class Triple
{
public:
    Triple(float x = 0.00, float y = 0.00, float z = 0.00);
    ~Triple();

    //Setters and getters
    float getX() const;
    void setX(float newX);
    float getY() const;
    void setY(float newY);
    float getZ() const;
    void setZ(float newZ);

    //Overloaded operators:
    Triple& operator=(const Triple &obj);
    Triple& operator++();
    Triple operator++(int);
    Triple& operator()(float x, float y, float z);

    /**
     * @brief Addition so that corresponding elements are added together
     * 
     * @param obj1 
     * @param obj2 
     * @return Triple 
     */
    friend Triple operator+(const Triple &obj1, const Triple &obj2) {
        return Triple(obj1.x + obj2.x, obj1.y + obj2.y, obj1.z + obj2.z);
    }

    /**
     * @brief Output so that it displays the Triple in the form “The triple is (x, y, z).”
     * 
     * @param os 
     * @param obj 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream& os, const Triple &obj) {
        os << "The triple is (" << obj.x
           << "," << obj.y << "," << obj.z << ").";
        return os;
    }

private:
    float x, y, z;
};

/**
 * @brief Assignment that copies x to z, y to x, and z to y
 * 
 * @param obj 
 * @return Triple& 
 */
inline Triple &Triple::operator=(const Triple &obj)
{
    z = obj.getX();
    x = obj.getY();
    y = obj.getZ();

    return *this;
}

/**
 * @brief Pre-increment so that x and z are increased by one each
 * 
 * @return Triple& 
 */
inline Triple &Triple::operator++() {
    this->x++;
    this->z++;
    return *this;
}

/**
 * @brief Post-increment so that x and z are increased by one each.
 * 
 * @return Triple 
 */
inline Triple Triple::operator++(int) {
    Triple old = *this;
    operator++();
    return old;
}

/**
 * @brief Function call operator so that the values for x, y and z can be set
 * 
 * @param x 
 * @param y 
 * @param z 
 * @return Triple& 
 */
inline Triple &Triple::operator()(float x, float y, float z)
{
    setX(x);
    setY(y);
    setZ(z);

    return *this;
}

#endif // TRIPLE_H