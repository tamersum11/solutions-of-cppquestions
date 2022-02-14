/**
 * @file main.cpp
 * @author tamersum11
 * @brief 
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "rectangle.h"

using namespace std;

/**
 * @brief Top-level function that will take a parameter of type Quad and return the value of the appropriate Area function.
 * 
 * @param quad 
 * @return float the value of the appropriate Area function
 */
float getArea(Quad *quad) {
    return quad->Area();
}

int main()
{
    Quad *rectangle = new Rectangle();
    rectangle->setSides(3.00, 4.00, 3.00, 4.00);

    cout << getArea(rectangle) << endl;

    return 0;
}