/**
 * @file main.cpp
 * @author tamersum11
 * @brief Tests the class Work public member functions
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "work.h"

using namespace std;

int main()
{
    Work *w = new Work(25, 60);
    w->add(65);
    w->printSalary();
    Work::reset(w);
    bool okay = w->subtract(60);
    cout << okay << endl;

    Work *v = new Work(30);
    int r = w->compare(v);
    cout << r << endl;

    Work u(v);
    u.printSalary();

    delete w;
    w = nullptr;
    delete  v;
    v = nullptr;

    return 0;
}
