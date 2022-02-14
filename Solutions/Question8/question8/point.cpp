/**
 * @file point.cpp
 * @author tamersum11
 * @see point.h
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "point.h"

/**
 * @brief Construct a new Point< T>:: Point object
 *
 * @tparam T
 * @param x
 * @param y
 */
template<typename T>
Point<T>::Point(T x, T y)
{
    this->x = x;
    this->y = y;
}

/**
 * @brief Construct a new Point< T>:: Point object
 *
 * @tparam T
 */
template<typename T>
Point<T>::Point(){}

/**
 * @brief Destroy the Point< T>:: Point object
 *
 * @tparam T
 */
template<typename T>
Point<T>::~Point(){}

/**
 * @brief Sets the value of x coordinate of the Point
 *
 * @tparam T
 * @param newX
 */
template<typename T>
void Point<T>::setX(T newX)
{
    x = newX;
}

/**
 * @brief Gets the value of x coordinate of the Point
 *
 * @tparam T
 * @return T
 */
template<typename T>
T Point<T>::getX() const
{
    return x;
}

/**
 * @brief Sets the value of y coordinate of the Point
 *
 * @tparam T
 * @param newY
 */
template<typename T>
void Point<T>::setY(T newY)
{
    y = newY;
}

/**
 * @brief Gets the value of x coordinate of the Point
 *
 * @tparam T
 * @return T
 */
template<typename T>
T Point<T>::getY() const
{
    return y;
}

/**
 * @brief Displays the data values of two coordinates of the Point
 *
 * @tparam T
 */
template<typename T>
void Point<T>::display()
{
    std::cout << "x: " << x << std::endl
              << "y: " << y << std::endl;
}

/**
 * @brief Swaps the values so the first element is cast into the second
 * and the second is cast into the first
 *
 * @tparam T
 */
template<typename T>
void Point<T>::swap()
{
    std::swap(x, y);
}

/**
 * @brief The explicit instantiation of template class named Point
*/
template class Point<int>;
template class Point<float>;
template class Point<double>;
template class Point<long long>;
