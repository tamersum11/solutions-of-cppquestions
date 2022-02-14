/**
 * @file main.cpp
 * @author tamersum11
 * @brief Tests the overloaded operators of Triple class
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "triple.h"

using namespace std;

int main()
{
    cout << "Triple t(1.00):" << endl;
    Triple t(1.00);
    cout << t << endl << endl;

    cout << "t(1.00, 2.00, 3.00):" << endl;
    t(1.00, 2.00, 3.00);
    cout << t << endl << endl;

    cout << "Triple t1(1.00, 2.00, 3.00):" << endl;
    Triple t1(1.00, 2.00, 3.00);
    cout << t1 << endl << endl;

    cout << "Triple t2(1.00, 2.00, 3.00):" << endl;
    Triple t2(1.00, 2.00, 3.00);
    cout << t2 << endl << endl;

    cout << "Triple t3(1.00, 2.00, 3.00):" << endl;
    Triple t3(1.00, 2.00, 3.00);
    cout << t3 << endl << endl;

    cout << "t1 + t2 + t3:" << endl;
    cout << t1 + t2 + t3 << endl << endl;

    cout << "t = t1 + t2 + t3:" << endl;
    t = t1 + t2 + t3;
    cout << t << endl << endl;

    cout << "++t:" << endl;
    ++t;
    cout << t << endl << endl;

    cout << "t++:" << endl;
    t++;
    cout << t << endl;

    return 0;
}
