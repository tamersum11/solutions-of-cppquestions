/**
 * @file point.hpp
 * @author tamersum11
 *
 * @brief Template class Point with two class parameters representing the two coordinates of the Point.
 * Include public methods to display and set the data values as well as a function that swaps the values so that,
 * after the swap, the first element is cast into the second and the second is cast into the first.
 *
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef POINT_H
#define POINT_H

#include <iostream>

template <typename T>
class Point
{
private:
    T x, y;

public:
    Point(T x, T y);
    Point();
    ~Point();

    //Setters and Getters
    void setX(T newX);
    T getX(void) const;
    void setY(T newY);
    T getY(void) const;

    void display(void);
    void swap(void);
};

#endif // POINT_H
