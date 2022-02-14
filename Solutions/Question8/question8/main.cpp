/**
 * @file main.cpp
 * @author tamersum11
 * @brief Tests the template class named Point
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    int x = 5, y = 4;
    float x1 = 5.324, y1 = 4.134;

    Point<int> *a = new Point<int>(x, y);
    a->display();
    a->swap();
    a->display();

    Point<float> *b = new Point<float>();
    b->setX(x1);
    b->setY(y1);
    b->display();
    b->swap();
    b->display();

    delete a;
    a = nullptr;
    delete b;
    b = nullptr;

    return 0;
}
